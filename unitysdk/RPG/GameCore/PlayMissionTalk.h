#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MissionTalkStyle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x174C26C0)
#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174C2640)
#define RPG_GAMECORE_PLAYMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x174C2690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMissionTalk_TypeDefinitionIndex = 22080;

	class PlayMissionTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Boolean IsVoice3D; // 0x20
		::RPG::GameCore::TargetEvaluator* Voice3DTargetType; // 0x28
		::System::Boolean ResumeAfterInterrupt; // 0x30
		::System::UInt32 SubMissionIDForResume; // 0x34
		::System::Boolean PendingInBattle; // 0x38
		::RPG::GameCore::DynamicFloat* StartSentenceID; // 0x40
		::RPG::GameCore::DynamicFloat* EndSentenceID; // 0x48
		::System::Boolean IsOverrideContentTime; // 0x50
		::System::Single OverrideContentTime; // 0x54
		::System::Boolean MuteBattleVO; // 0x58
		::System::Boolean ChangeStyle; // 0x59
		::Il2CppArray<::RPG::GameCore::MissionTalkStyle*>* StyleList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMissionTalk*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMissionTalk* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
