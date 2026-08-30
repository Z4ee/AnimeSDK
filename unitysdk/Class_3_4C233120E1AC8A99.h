#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_4C233120E1AC8A99_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1CC8EB30)
#define CLASS_3_4C233120E1AC8A99_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1CC8EAF0)
#define CLASS_3_4C233120E1AC8A99__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8EB20)

inline static constexpr unsigned int Class_3_4C233120E1AC8A99_TypeDefinitionIndex = 19715;

class Class_3_4C233120E1AC8A99 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x18
	::System::Boolean GNDCCBNILML; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C233120E1AC8A99__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4C233120E1AC8A99*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4C233120E1AC8A99*&))((::PBYTE)hIl2Cpp + CLASS_3_4C233120E1AC8A99_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4C233120E1AC8A99* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4C233120E1AC8A99*))((::PBYTE)hIl2Cpp + CLASS_3_4C233120E1AC8A99_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
