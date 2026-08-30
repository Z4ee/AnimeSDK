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

#define RPG_CLIENT_LEVELDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x194F7120)
#define RPG_CLIENT_LEVELDIRECTOR_GETPROJECTILECURVE_OFFSET UNITYSDK_OFFSET(0x194F7690)
#define RPG_CLIENT_LEVELDIRECTOR_ISLEVELFRAMECAPTUREFULL_OFFSET UNITYSDK_OFFSET(0x194F7300)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELBLENDFRAMESTART_OFFSET UNITYSDK_OFFSET(0x194F75E0)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x194F7390)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELCLEARCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x194F7580)
#define RPG_CLIENT_LEVELDIRECTOR_LEVELRELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x194F74D0)
#define RPG_CLIENT_LEVELDIRECTOR_TICK_OFFSET UNITYSDK_OFFSET(0x194F7170)
#define RPG_CLIENT_LEVELDIRECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F7740)
#define RPG_CLIENT_LEVELDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x194F6EA0)
#define RPG_CLIENT_LEVELDIRECTOR__LOADPROJECTILECURVEASSET_OFFSET UNITYSDK_OFFSET(0x194F6F60)
#define RPG_CLIENT_LEVELDIRECTOR__ONLEVELBLENDFRAMEREALLYSTART_OFFSET UNITYSDK_OFFSET(0x194F7200)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelDirector_TypeDefinitionIndex = 59448;

	class LevelDirector : public ::System::Object
	{
	public:
		static ::RPG::Client::LevelDirector_LevelFrameCaptureEndOP** StaticGet_CaptureEndOPDefault()
		{
			return (::RPG::Client::LevelDirector_LevelFrameCaptureEndOP**)Il2CppClass::FromTypeDefinitionIndex(LevelDirector_TypeDefinitionIndex)->GetStaticField(0x25A30);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* _CustomProjectileCurveMap; // 0x10
		::RPG::Client::LevelDirector_LevelFrameBlendingEndOP* _BlendingEndOPDefault; // 0x18
		::RPG::GameCore::GameWorld* _WorldRef; // 0x20
		::System::Single _LevelBlendFrameDelayTime; // 0x28
		::System::Single _BlendFrameDuration; // 0x2C
		::System::Single _BlendFrameStartWeight; // 0x30
		::System::Single _LevelBlendFrameDelayTimer; // 0x34
		::RPG::Client::LevelDirector_CaptureUsage _CurrentCaptureUsage; // 0x38

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelFrameCaptureFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_ISLEVELFRAMECAPTUREFULL_OFFSET))(this);
		}

		::System::Boolean LevelCaptureFrame(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::Client::LevelDirector_CaptureUsage a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::Client::LevelDirector_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELCAPTUREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void LevelReleaseCaptureFrame(::RPG::Client::LevelDirector_CaptureUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelDirector_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELRELEASECAPTUREFRAME_OFFSET))(this, a1);
		}

		::System::Void LevelClearCaptureFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELCLEARCAPTUREFRAME_OFFSET))(this);
		}

		::System::Void LevelBlendFrameStart(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_LEVELBLENDFRAMESTART_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* GetProjectileCurve(::System::String* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELDIRECTOR_GETPROJECTILECURVE_OFFSET))(this, a1);
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
