#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30C5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmStartInfo_TypeDefinitionIndex = 60302;

	class MusicRhythmStartInfo : public ::System::Object
	{
	public:
		::System::Single GoodInputTime; // 0x10
		::System::UInt32 CountDown; // 0x14
		::System::Single BeatTime; // 0x18
		::System::UInt32 TotalScore; // 0x1C
		::System::Single CircleOffset; // 0x20
		::System::Boolean IsTutorial; // 0x24
		::System::Boolean LineVisible; // 0x25
		::System::Boolean ShowCircle; // 0x26
		::System::Boolean HintVisible; // 0x27
		::System::Boolean IsPuMan; // 0x28
		::System::UInt32 LevelId; // 0x2C
		::System::Int32 BeatCount; // 0x30
		::System::Single MusicTotalTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET))(this);
		}
	};
}
