#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_5FBBAB980BA3A22B_OFFSET UNITYSDK_OFFSET(0x1D7A9FE0)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_76F2F5DD704850DA_OFFSET UNITYSDK_OFFSET(0x1D7A9F90)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_Sequence_TypeDefinitionIndex = 20378;

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

		static ::System::Void Method_3_76F2F5DD704850DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Sequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Sequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_76F2F5DD704850DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5FBBAB980BA3A22B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_METHOD_3_5FBBAB980BA3A22B_OFFSET))(a1, a2);
		}
	};
}
