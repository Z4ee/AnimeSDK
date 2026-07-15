#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_8634BD30C72E5FFE_OFFSET UNITYSDK_OFFSET(0x1B05BB20)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_A8E76D00FDDC54E3_OFFSET UNITYSDK_OFFSET(0x1B05BB60)
#define RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B05BB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueSelectLimitedAvatar_TypeDefinitionIndex = 21460;

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

		static ::System::Void Method_3_8634BD30C72E5FFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_8634BD30C72E5FFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8E76D00FDDC54E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUESELECTLIMITEDAVATAR_METHOD_3_A8E76D00FDDC54E3_OFFSET))(a1, a2);
		}
	};
}
