#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MusicRhythmTalkInfo; }

#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A5530)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A54F0)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A5520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicRhythmTalk_TypeDefinitionIndex = 21815;

	class PlayMusicRhythmTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MusicRhythmTalkInfo*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicRhythmTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicRhythmTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
