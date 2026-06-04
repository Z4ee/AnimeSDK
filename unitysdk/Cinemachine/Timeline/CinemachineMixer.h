#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine::Timeline { class CinemachineMixer_MasterDirectorDelegate; }
namespace System { class Object; }

#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x14667170)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14666760)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x14666790)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x146667A0)
#define CINEMACHINE_TIMELINE_CINEMACHINEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x146671D0)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineMixer_TypeDefinitionIndex = 36941;

	class CinemachineMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::Cinemachine::Timeline::CinemachineMixer_MasterDirectorDelegate** StaticGet_GetMasterPlayableDirector()
		{
			return (::Cinemachine::Timeline::CinemachineMixer_MasterDirectorDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineMixer_TypeDefinitionIndex)->GetStaticField(0x6AF70);
		}
		::Cinemachine::CinemachineBrain* mBrain; // 0x10
		::System::Int32 mBrainOverrideId; // 0x18
		::System::Boolean mPreviewPlay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetDeltaTime(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINEMIXER_GETDELTATIME_OFFSET))(this, a1);
		}
	};
}
