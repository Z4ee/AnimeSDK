#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector_CaptureUsage.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LevelDirector_LevelFrameBlendingEndOP; }
namespace RPG::Client { class LevelDirector_LevelFrameCaptureEndOP; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LEVELDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA665F50)
#define RPG_CLIENT_LEVELDIRECTOR_GETPROJECTILECURVE_OFFSET UNITYSDK_OFFSET(0xA6664E0)
#define RPG_CLIENT_LEVELDIRECTOR_ISLEVELFRAMECAPTUREFULL_OFFSET UNITYSDK_OFFSET(0xA666150)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELBLENDFRAMESTART_OFFSET UNITYSDK_OFFSET(0xA666430)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0xA6661E0)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELCLEARCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0xA6663D0)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELRELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0xA666320)
#define RPG_CLIENT_LEVELDIRECTOR_TICK_OFFSET UNITYSDK_OFFSET(0xA665FA0)
#define RPG_CLIENT_LEVELDIRECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6665A0)
#define RPG_CLIENT_LEVELDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA665CE0)
#define RPG_CLIENT_LEVELDIRECTOR__LOADPROJECTILECURVEASSET_OFFSET UNITYSDK_OFFSET(0xA665DA0)
#define RPG_CLIENT_LEVELDIRECTOR__ONLEVELBLENDFRAMEREALLYSTART_OFFSET UNITYSDK_OFFSET(0xA666030)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelDirector_TypeDefinitionIndex = 54699;

	class LevelDirector : public ::System::Object
	{
	public:
		static ::RPG::Client::LevelDirector_LevelFrameCaptureEndOP** StaticGet_CaptureEndOPDefault()
		{
			return (::RPG::Client::LevelDirector_LevelFrameCaptureEndOP**)Il2CppClass::FromTypeDefinitionIndex(LevelDirector_TypeDefinitionIndex)->GetStaticField(0x26420);
		}
		::RPG::Client::LevelDirector_LevelFrameBlendingEndOP* _BlendingEndOPDefault; // 0x10
		::RPG::GameCore::GameWorld* _WorldRef; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* _CustomProjectileCurveMap; // 0x20
		::System::Single _LevelBlendFrameDelayTimer; // 0x28
		::System::Single _LevelBlendFrameDelayTime; // 0x2C
		::System::Single _BlendFrameDuration; // 0x30
		::RPG::Client::LevelDirector_CaptureUsage _CurrentCaptureUsage; // 0x34
		::System::Single _BlendFrameStartWeight; // 0x38

		::System::Void _ctor(::RPG::GameCore::GameWorld* pWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__CTOR_OFFSET))(this, pWorld);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean IsLevelFrameCaptureFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_ISLEVELFRAMECAPTUREFULL_OFFSET))(this);
		}

		::System::Boolean LevelCaptureFrame(::RPG::CustomRP::FrameCapture_CaptureType eCaptureType, ::RPG::Client::LevelDirector_CaptureUsage eUsage)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::Client::LevelDirector_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELCAPTUREFRAME_OFFSET))(this, eCaptureType, eUsage);
		}

		::System::Void LevelReleaseCaptureFrame(::RPG::Client::LevelDirector_CaptureUsage usage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelDirector_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELRELEASECAPTUREFRAME_OFFSET))(this, usage);
		}

		::System::Void LevelClearCaptureFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELCLEARCAPTUREFRAME_OFFSET))(this);
		}

		::System::Void LevelBlendFrameStart(::System::Single fDelayTime, ::System::Single fStartWeight, ::System::Single fDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELBLENDFRAMESTART_OFFSET))(this, fDelayTime, fStartWeight, fDuration);
		}

		::UnityEngine::AnimationCurve* GetProjectileCurve(::System::String* name)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_GETPROJECTILECURVE_OFFSET))(this, name);
		}

		::System::Void _LoadProjectileCurveAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__LOADPROJECTILECURVEASSET_OFFSET))(this);
		}

		::System::Void _OnLevelBlendFrameReallyStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__ONLEVELBLENDFRAMEREALLYSTART_OFFSET))(this);
		}
	};
}
