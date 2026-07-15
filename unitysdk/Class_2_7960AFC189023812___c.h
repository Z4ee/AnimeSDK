#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_7960AFC189023812___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1708CA60)
#define CLASS_2_7960AFC189023812___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1708CAA0)
#define CLASS_2_7960AFC189023812___C___TRYAPPLY_B__5_1_OFFSET UNITYSDK_OFFSET(0x1708CAB0)

inline static constexpr unsigned int Class_2_7960AFC189023812___c_TypeDefinitionIndex = 73494;

class Class_2_7960AFC189023812___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7960AFC189023812___c_TypeDefinitionIndex)->GetStaticField(0x4B9A0);
	}
	static ::Class_2_7960AFC189023812___c** StaticGet___9()
	{
		return (::Class_2_7960AFC189023812___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7960AFC189023812___c_TypeDefinitionIndex)->GetStaticField(0x4B9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __TryApply_b__5_1(::RPG::Client::ChimeraDuelChimeraData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812___C___TRYAPPLY_B__5_1_OFFSET))(this, a1);
	}
};
