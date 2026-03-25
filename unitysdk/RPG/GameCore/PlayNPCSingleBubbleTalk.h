#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_METHOD_3_9902D67DA8CAACEE_OFFSET UNITYSDK_OFFSET(0x174C3ED0)
#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_METHOD_3_FF3195682057F645_OFFSET UNITYSDK_OFFSET(0x174C40B0)
#define RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x174C3FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayNPCSingleBubbleTalk_TypeDefinitionIndex = 19757;

	class PlayNPCSingleBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single AutoSkipTime; // 0x20
		::RPG::GameCore::DynamicFloat* TalkSentenceID; // 0x28
		::System::Boolean EnableVoice; // 0x30
		::System::Boolean InstantFinish; // 0x31
		::RPG::GameCore::DynamicFloat* ID; // 0x38
		::System::UInt32 UniqueID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9902D67DA8CAACEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_METHOD_3_9902D67DA8CAACEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF3195682057F645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYNPCSINGLEBUBBLETALK_METHOD_3_FF3195682057F645_OFFSET))(a1, a2);
		}
	};
}
