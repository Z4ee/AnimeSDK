#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_SINGLE_METHOD_3_0D2B2CEA9322F353_OFFSET UNITYSDK_OFFSET(0x1BA09360)
#define RPG_GAMECORE_PLAYVOICE_SINGLE_METHOD_3_5030FABB95576A80_OFFSET UNITYSDK_OFFSET(0x1BA093A0)
#define RPG_GAMECORE_PLAYVOICE_SINGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA09390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_Single_TypeDefinitionIndex = 19833;

	class PlayVoice_Single : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VoiceID; // 0x18
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D2B2CEA9322F353(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Single*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Single*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE_METHOD_3_0D2B2CEA9322F353_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5030FABB95576A80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Single* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Single*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE_METHOD_3_5030FABB95576A80_OFFSET))(a1, a2);
		}
	};
}
