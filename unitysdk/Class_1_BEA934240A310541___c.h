#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_BEA934240A310541___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BF45B0)
#define CLASS_1_BEA934240A310541___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BF45E0)
#define CLASS_1_BEA934240A310541___C___ONGAMEFINALLEAVE_B__22_0_OFFSET UNITYSDK_OFFSET(0x10BF45F0)

inline static constexpr unsigned int Class_1_BEA934240A310541___c_TypeDefinitionIndex = 49045;

class Class_1_BEA934240A310541___c : public ::System::Object
{
public:
	static ::Class_1_BEA934240A310541___c** StaticGet___9()
	{
		return (::Class_1_BEA934240A310541___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541___c_TypeDefinitionIndex)->GetStaticField(0x2C110);
	}
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEA934240A310541___c_TypeDefinitionIndex)->GetStaticField(0x2C118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnGameFinalLeave_b__22_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEA934240A310541___C___ONGAMEFINALLEAVE_B__22_0_OFFSET))(this);
	}
};
