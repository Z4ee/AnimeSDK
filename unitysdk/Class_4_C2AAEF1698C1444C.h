#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageByAttackProperty.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_C2AAEF1698C1444C_METHOD_4_0BAE4FCAEFBCC63D_OFFSET UNITYSDK_OFFSET(0x1CB8D8F0)
#define CLASS_4_C2AAEF1698C1444C_METHOD_4_73FEEC595A0D4611_OFFSET UNITYSDK_OFFSET(0x1CB8D9F0)
#define CLASS_4_C2AAEF1698C1444C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8D980)

inline static constexpr unsigned int Class_4_C2AAEF1698C1444C_TypeDefinitionIndex = 19682;

class Class_4_C2AAEF1698C1444C : public ::RPG::GameCore::DamageByAttackProperty
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C2AAEF1698C1444C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0BAE4FCAEFBCC63D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2AAEF1698C1444C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2AAEF1698C1444C*&))((::PBYTE)hIl2Cpp + CLASS_4_C2AAEF1698C1444C_METHOD_4_0BAE4FCAEFBCC63D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73FEEC595A0D4611(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_C2AAEF1698C1444C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_C2AAEF1698C1444C*))((::PBYTE)hIl2Cpp + CLASS_4_C2AAEF1698C1444C_METHOD_4_73FEEC595A0D4611_OFFSET))(a1, a2);
	}
};
