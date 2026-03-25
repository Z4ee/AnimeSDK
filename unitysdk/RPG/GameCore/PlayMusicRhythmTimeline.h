#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_METHOD_3_9748D0FAB63BEE9F_OFFSET UNITYSDK_OFFSET(0x174C3520)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_METHOD_3_AB4C100569A13719_OFFSET UNITYSDK_OFFSET(0x174C35A0)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C3570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicRhythmTimeline_TypeDefinitionIndex = 20243;

	class PlayMusicRhythmTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelinePath; // 0x18
		::System::Boolean ShowHint; // 0x20
		::System::Boolean ShowLine; // 0x21
		::System::Boolean IsTutorial; // 0x22
		::System::UInt32 CountDown; // 0x24
		::System::UInt32 FailSkip; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9748D0FAB63BEE9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicRhythmTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_METHOD_3_9748D0FAB63BEE9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4C100569A13719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_METHOD_3_AB4C100569A13719_OFFSET))(a1, a2);
		}
	};
}
