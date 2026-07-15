#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_METHOD_2_218A75345BB57EC9_OFFSET UNITYSDK_OFFSET(0x1C376670)
#define RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37F940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTriggerCallback_TypeDefinitionIndex = 15098;

	class ChenLingBattleTriggerCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* CallbackSequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_218A75345BB57EC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTriggerCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTriggerCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_METHOD_2_218A75345BB57EC9_OFFSET))(a1, a2);
		}
	};
}
