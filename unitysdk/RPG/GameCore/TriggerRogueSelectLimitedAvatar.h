#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_182F9E025CE46305_OFFSET UNITYSDK_OFFSET(0x190CC370)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_FC9B094E5F1937ED_OFFSET UNITYSDK_OFFSET(0x190CC2F0)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x190CC340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueSelectLimitedAvatar_TypeDefinitionIndex = 21145;

	class TriggerRogueSelectLimitedAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupPropID; // 0x20
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC9B094E5F1937ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_FC9B094E5F1937ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_182F9E025CE46305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_182F9E025CE46305_OFFSET))(a1, a2);
		}
	};
}
