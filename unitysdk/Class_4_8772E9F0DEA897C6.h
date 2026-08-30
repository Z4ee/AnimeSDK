#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F5924891E2C8D3BA.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_8772E9F0DEA897C6_METHOD_4_478618D187C207EF_OFFSET UNITYSDK_OFFSET(0x1CAA05A0)
#define CLASS_4_8772E9F0DEA897C6_METHOD_4_F074025B94DFED31_OFFSET UNITYSDK_OFFSET(0x1CAA0540)
#define CLASS_4_8772E9F0DEA897C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA0590)

inline static constexpr unsigned int Class_4_8772E9F0DEA897C6_TypeDefinitionIndex = 23069;

class Class_4_8772E9F0DEA897C6 : public ::Class_3_F5924891E2C8D3BA
{
public:
	::RPG::GameCore::BattleHintToastStyle CFNAKPADAEB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8772E9F0DEA897C6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F074025B94DFED31(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8772E9F0DEA897C6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8772E9F0DEA897C6*&))((::PBYTE)hIl2Cpp + CLASS_4_8772E9F0DEA897C6_METHOD_4_F074025B94DFED31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_478618D187C207EF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8772E9F0DEA897C6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8772E9F0DEA897C6*))((::PBYTE)hIl2Cpp + CLASS_4_8772E9F0DEA897C6_METHOD_4_478618D187C207EF_OFFSET))(a1, a2);
	}
};
