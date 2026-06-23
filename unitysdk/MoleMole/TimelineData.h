#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/DirectorWrapMode.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_TIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x191958A0)
#define MOLEMOLE_TIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19195860)
#define MOLEMOLE_TIMELINEDATA_GET_AUDIORESPATH_OFFSET UNITYSDK_OFFSET(0x19195730)
#define MOLEMOLE_TIMELINEDATA_GET_FINALTIMELINERESPATH_OFFSET UNITYSDK_OFFSET(0x19195740)
#define MOLEMOLE_TIMELINEDATA_GET_RESPATH_OFFSET UNITYSDK_OFFSET(0x19195720)
#define MOLEMOLE_TIMELINEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x191958F0)
#define MOLEMOLE_TIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191958E0)

namespace MoleMole
{
	inline static constexpr unsigned int TimelineData_TypeDefinitionIndex = 74741;

	class TimelineData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_C_LanStrList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineData_TypeDefinitionIndex)->GetStaticField(0x39F40);
		}
		// static const ::System::String* C_PlayableAffix; // 0x0
		::System::String* _resPath; // 0x10
		::System::String* _audioResPath; // 0x18
		::System::Boolean IgnoreTimelineResOverride; // 0x20
		::System::String* timelineResPath; // 0x28
		::System::String* timelineResPathFemale; // 0x30
		::System::String* beginBGMEvent; // 0x38
		::System::String* endBGMEvent; // 0x40
		::System::Single endBGMDelayTime; // 0x48
		::MoleMole::Config::ConfigSoundActionGeneral* beginSoundAction; // 0x50
		::MoleMole::Config::ConfigSoundActionGeneral* endSoundAction; // 0x58
		::System::Boolean customSoundFadBehaviour; // 0x60
		::System::Boolean soundNotStopPlaying; // 0x61
		::System::Int32 soundFadeTime; // 0x64
		::AkCurveInterpolation soundFadeCurve; // 0x68
		::System::Boolean EnableOverrideDirectorWrapMode; // 0x6C
		::UnityEngine::Playables::DirectorWrapMode OverrideDirectorWrapMode; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA__CCTOR_OFFSET))();
		}

		::System::String* get_resPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA_GET_RESPATH_OFFSET))(this);
		}

		::System::String* get_audioResPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA_GET_AUDIORESPATH_OFFSET))(this);
		}

		::System::String* get_FinalTimelineResPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA_GET_FINALTIMELINERESPATH_OFFSET))(this);
		}

		::System::Boolean GetIgnoreTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA_GETIGNORETIMELINERESOVERRIDE_OFFSET))(this);
		}

		::System::Boolean GetDefaultNeedDisplayTimelineResOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINEDATA_GETDEFAULTNEEDDISPLAYTIMELINERESOVERRIDE_OFFSET))(this);
		}
	};
}
