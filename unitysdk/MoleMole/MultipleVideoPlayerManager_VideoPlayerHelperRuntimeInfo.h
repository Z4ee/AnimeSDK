#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_ONFINISH_OFFSET UNITYSDK_OFFSET(0x15B45EF0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_PLAY_OFFSET UNITYSDK_OFFSET(0x15B45E30)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_STOP_OFFSET UNITYSDK_OFFSET(0x15B45EA0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B45E10)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo_TypeDefinitionIndex = 74893;

	class MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo : public ::System::Object
	{
	public:
		::MoleMole::MultipleVideoPlayerManager_PlayParam playParam; // 0x10
		::Class_1_E9529ED64113E4E9* videoPlayerHelper; // 0x28
		::System::Int32 index; // 0x30

		::System::Void _ctor(::Class_1_E9529ED64113E4E9* videoPlayerHelper, ::MoleMole::MultipleVideoPlayerManager_PlayParam playParam, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*, ::MoleMole::MultipleVideoPlayerManager_PlayParam, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO__CTOR_OFFSET))(this, videoPlayerHelper, playParam, index);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_STOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_ONFINISH_OFFSET))(this);
		}
	};
}
