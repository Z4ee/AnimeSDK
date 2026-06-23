#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class CinemachineMixer_MasterDirectorDelegate;
namespace Cinemachine { class CinemachineBrain; }
namespace System { class Object; }

#define CINEMACHINEMIXER_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x1E6A0600)
#define CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E69F520)
#define CINEMACHINEMIXER_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1E69F670)
#define CINEMACHINEMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E69F680)
#define CINEMACHINEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0690)

inline static constexpr unsigned int CinemachineMixer_TypeDefinitionIndex = 33999;

class CinemachineMixer : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::CinemachineMixer_MasterDirectorDelegate** StaticGet_GetMasterPlayableDirector()
	{
		return (::CinemachineMixer_MasterDirectorDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineMixer_TypeDefinitionIndex)->GetStaticField(0x4F3E0);
	}
	::Cinemachine::CinemachineBrain* mBrain; // 0x10
	::System::Boolean mPreviewPlay; // 0x18
	::System::Int32 mBrainOverrideId; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_ONPLAYABLEDESTROY_OFFSET))(this, playable);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_PREPAREFRAME_OFFSET))(this, playable, info);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
	}

	::System::Single GetDeltaTime(::System::Single deltaTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINEMIXER_GETDELTATIME_OFFSET))(this, deltaTime);
	}
};
