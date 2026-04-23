#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_1F1AEA60DFC07823_OFFSET UNITYSDK_OFFSET(0x18C13D60)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_33D485DED46FCD94_OFFSET UNITYSDK_OFFSET(0x18C13DF0)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C13DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_Sequence_TypeDefinitionIndex = 19585;

	class PlayVoice_Sequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDs; // 0x18
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x20
		::System::Single IntervalTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F1AEA60DFC07823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Sequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Sequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_1F1AEA60DFC07823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_33D485DED46FCD94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_33D485DED46FCD94_OFFSET))(a1, a2);
		}
	};
}
