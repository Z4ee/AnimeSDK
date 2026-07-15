#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_7BEA553B07B2704F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1706BAB0)
#define CLASS_1_7BEA553B07B2704F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1706BAF0)
#define CLASS_1_7BEA553B07B2704F___C__SERIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1706BB00)

inline static constexpr unsigned int Class_1_7BEA553B07B2704F___c_TypeDefinitionIndex = 61703;

class Class_1_7BEA553B07B2704F___c : public ::System::Object
{
public:
	static ::Class_1_7BEA553B07B2704F___c** StaticGet___9()
	{
		return (::Class_1_7BEA553B07B2704F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BEA553B07B2704F___c_TypeDefinitionIndex)->GetStaticField(0x4A7C0);
	}
	static ::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightFormationRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7BEA553B07B2704F___c_TypeDefinitionIndex)->GetStaticField(0x4A7C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _Serialize_b__1_0(::RPG::Client::GridFightFormationRole* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + CLASS_1_7BEA553B07B2704F___C__SERIALIZE_B__1_0_OFFSET))(this, a1);
	}
};
