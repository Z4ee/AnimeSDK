#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_5_0589B181DE51E26F_OFFSET UNITYSDK_OFFSET(0x1D245AC0)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_5_6D207B0E2CB76D0E_OFFSET UNITYSDK_OFFSET(0x1D245A60)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D245AB0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomFreezeBombAction_TypeDefinitionIndex = 24634;

	class RandomFreezeBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Line; // 0x18
		::System::Boolean Square; // 0x19
		::System::Boolean MultiStyle; // 0x1A
		::System::UInt32 Count; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6D207B0E2CB76D0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomFreezeBombAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_5_6D207B0E2CB76D0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0589B181DE51E26F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_5_0589B181DE51E26F_OFFSET))(a1, a2);
		}
	};
}
