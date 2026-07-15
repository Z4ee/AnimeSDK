#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E998A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmStartInfo_TypeDefinitionIndex = 57485;

	class MusicRhythmStartInfo : public ::System::Object
	{
	public:
		::System::Int32 BeatCount; // 0x10
		::System::Single GoodInputTime; // 0x14
		::System::Boolean IsTutorial; // 0x18
		::System::Single BeatTime; // 0x1C
		::System::Single MusicTotalTime; // 0x20
		::System::UInt32 LevelId; // 0x24
		::System::UInt32 TotalScore; // 0x28
		::System::UInt32 CountDown; // 0x2C
		::System::Single CircleOffset; // 0x30
		::System::Boolean LineVisible; // 0x34
		::System::Boolean ShowCircle; // 0x35
		::System::Boolean HintVisible; // 0x36
		::System::Boolean IsPuMan; // 0x37

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSTARTINFO__CTOR_OFFSET))(this);
		}
	};
}
