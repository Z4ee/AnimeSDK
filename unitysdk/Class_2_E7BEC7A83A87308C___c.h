#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E7BEC7A83A87308C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11760250)
#define CLASS_2_E7BEC7A83A87308C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11760290)
#define CLASS_2_E7BEC7A83A87308C___C__EVALUATE_B__1_1_OFFSET UNITYSDK_OFFSET(0x117602A0)

inline static constexpr unsigned int Class_2_E7BEC7A83A87308C___c_TypeDefinitionIndex = 59003;

class Class_2_E7BEC7A83A87308C___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::FateBuffData*, ::System::Int64>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::RPG::Client::FateBuffData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7BEC7A83A87308C___c_TypeDefinitionIndex)->GetStaticField(0x66C10);
	}
	static ::Class_2_E7BEC7A83A87308C___c** StaticGet___9()
	{
		return (::Class_2_E7BEC7A83A87308C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7BEC7A83A87308C___c_TypeDefinitionIndex)->GetStaticField(0x66C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7BEC7A83A87308C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7BEC7A83A87308C___C__CTOR_OFFSET))(this);
	}

	::System::Int64 _Evaluate_b__1_1(::RPG::Client::FateBuffData* buff)
	{
		return ((::System::Int64(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + CLASS_2_E7BEC7A83A87308C___C__EVALUATE_B__1_1_OFFSET))(this, buff);
	}
};
