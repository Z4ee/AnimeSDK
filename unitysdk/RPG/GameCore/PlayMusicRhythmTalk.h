#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MusicRhythmTalkInfo; }

#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18C0E9C0)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0E940)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0E990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicRhythmTalk_TypeDefinitionIndex = 20927;

	class PlayMusicRhythmTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MusicRhythmTalkInfo*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMusicRhythmTalk*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMusicRhythmTalk* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
