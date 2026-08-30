#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_METHOD_2_8D586FD7A609A263_OFFSET UNITYSDK_OFFSET(0x1B2E94E0)
#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_METHOD_2_D87231D0840AD185_OFFSET UNITYSDK_OFFSET(0x1B2E9A90)
#define RPG_GAMECORE_BASECHENLINGBATTLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E9AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleEffect_TypeDefinitionIndex = 15610;

	class BaseChenLingBattleEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8D586FD7A609A263(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_METHOD_2_8D586FD7A609A263_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D87231D0840AD185(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEEFFECT_METHOD_2_D87231D0840AD185_OFFSET))(a1, a2);
		}
	};
}
