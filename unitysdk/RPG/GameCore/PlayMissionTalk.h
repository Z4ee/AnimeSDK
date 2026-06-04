#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MissionTalkStyle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19A24C80)
#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A24C00)
#define RPG_GAMECORE_PLAYMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A24C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMissionTalk_TypeDefinitionIndex = 22503;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMissionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMissionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
