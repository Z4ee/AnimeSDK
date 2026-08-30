#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_METHOD_3_5575D9705FBB5FA4_OFFSET UNITYSDK_OFFSET(0x1D5353F0)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_METHOD_3_E7B9AEC0C074F591_OFFSET UNITYSDK_OFFSET(0x1D5353B0)
#define RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5353E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventCharacterTriggerEmotion_TypeDefinitionIndex = 22120;

	class TrainPartyEventCharacterTriggerEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EntityUniqueName; // 0x18
		::System::String* EmotionName; // 0x20
		::System::Single TransitionTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7B9AEC0C074F591(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_METHOD_3_E7B9AEC0C074F591_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5575D9705FBB5FA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventCharacterTriggerEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCHARACTERTRIGGEREMOTION_METHOD_3_5575D9705FBB5FA4_OFFSET))(a1, a2);
		}
	};
}
