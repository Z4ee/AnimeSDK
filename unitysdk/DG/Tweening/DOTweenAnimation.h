#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/DG/Tweening/Core/ABSAnimationComponent.h"
#include "unitysdk/DG/Tweening/Core/DOTweenAnimationType.h"
#include "unitysdk/DG/Tweening/Core/TargetType.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/RotateMode.h"
#include "unitysdk/DG/Tweening/ScrambleMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define DG_TWEENING_DOTWEENANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x123CEBB0)
#define DG_TWEENING_DOTWEENANIMATION_CREATETWEEN_OFFSET UNITYSDK_OFFSET(0x123CED70)
#define DG_TWEENING_DOTWEENANIMATION_DOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x123CFBB0)
#define DG_TWEENING_DOTWEENANIMATION_DOKILL_OFFSET UNITYSDK_OFFSET(0x123CFCC0)
#define DG_TWEENING_DOTWEENANIMATION_DOPAUSE_OFFSET UNITYSDK_OFFSET(0x123CF320)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYALLBYID_OFFSET UNITYSDK_OFFSET(0x123CFF10)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDSALLBYID_OFFSET UNITYSDK_OFFSET(0x123D0150)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDSBYID_OFFSET UNITYSDK_OFFSET(0x123D0020)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDS_OFFSET UNITYSDK_OFFSET(0x123CF100)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYBYID_OFFSET UNITYSDK_OFFSET(0x123CFDE0)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARDALLBYID_OFFSET UNITYSDK_OFFSET(0x123D0390)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARDBYID_OFFSET UNITYSDK_OFFSET(0x123D0260)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x123CF210)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x123D04A0)
#define DG_TWEENING_DOTWEENANIMATION_DOPLAY_OFFSET UNITYSDK_OFFSET(0x123CEFF0)
#define DG_TWEENING_DOTWEENANIMATION_DORESTARTALLBYID_OFFSET UNITYSDK_OFFSET(0x123D0950)
#define DG_TWEENING_DOTWEENANIMATION_DORESTARTBYID_OFFSET UNITYSDK_OFFSET(0x123D0820)
#define DG_TWEENING_DOTWEENANIMATION_DORESTART_OFFSET UNITYSDK_OFFSET(0x123CF680)
#define DG_TWEENING_DOTWEENANIMATION_DOREWINDANDPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x123D06F0)
#define DG_TWEENING_DOTWEENANIMATION_DOREWIND_OFFSET UNITYSDK_OFFSET(0x123CF540)
#define DG_TWEENING_DOTWEENANIMATION_DOTOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x123CF430)
#define DG_TWEENING_DOTWEENANIMATION_GETTWEENS_OFFSET UNITYSDK_OFFSET(0x123D0A70)
#define DG_TWEENING_DOTWEENANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x123CED10)
#define DG_TWEENING_DOTWEENANIMATION_REEVALUATERELATIVETWEEN_OFFSET UNITYSDK_OFFSET(0x123CF9D0)
#define DG_TWEENING_DOTWEENANIMATION_START_OFFSET UNITYSDK_OFFSET(0x123CEC60)
#define DG_TWEENING_DOTWEENANIMATION_TYPETODOTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x123D0C00)
#define DG_TWEENING_DOTWEENANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x123D0F20)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenAnimation_TypeDefinitionIndex = 95372;

	class DOTweenAnimation : public ::DG::Tweening::Core::ABSAnimationComponent
	{
	public:
		::System::Single delay; // 0x60
		::System::Single duration; // 0x64
		::DG::Tweening::Ease easeType; // 0x68
		::UnityEngine::AnimationCurve* easeCurve; // 0x70
		::DG::Tweening::LoopType loopType; // 0x78
		::System::Int32 loops; // 0x7C
		::System::String* id; // 0x80
		::System::Boolean isRelative; // 0x88
		::System::Boolean isFrom; // 0x89
		::System::Boolean isIndependentUpdate; // 0x8A
		::System::Boolean isWorldTimeScale; // 0x8B
		::System::Boolean isValid; // 0x8C
		::UnityEngine::Component* target; // 0x90
		::DG::Tweening::Core::DOTweenAnimationType animationType; // 0x98
		::DG::Tweening::Core::TargetType targetType; // 0x9C
		::DG::Tweening::Core::TargetType forcedTargetType; // 0xA0
		::System::Boolean useTargetAsV3; // 0xA4
		::System::Single endValueFloat; // 0xA8
		::UnityEngine::Vector3 endValueV3; // 0xAC
		::UnityEngine::Vector2 endValueV2; // 0xB8
		::UnityEngine::Color endValueColor; // 0xC0
		::System::String* endValueString; // 0xD0
		::UnityEngine::Rect endValueRect; // 0xD8
		::UnityEngine::Transform* endValueTransform; // 0xE8
		::System::Boolean optionalBool0; // 0xF0
		::System::Single optionalFloat0; // 0xF4
		::System::Int32 optionalInt0; // 0xF8
		::DG::Tweening::RotateMode optionalRotationMode; // 0xFC
		::DG::Tweening::ScrambleMode optionalScrambleMode; // 0x100
		::System::String* optionalString; // 0x108
		::System::Boolean _tweenCreated; // 0x110
		::System::Int32 _playCount; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_ONDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask CreateTween()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_CREATETWEEN_OFFSET))(this);
		}

		::System::Void DOPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAY_OFFSET))(this);
		}

		::System::Void DOPlayBackwards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDS_OFFSET))(this);
		}

		::System::Void DOPlayForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARD_OFFSET))(this);
		}

		::System::Void DOPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPAUSE_OFFSET))(this);
		}

		::System::Void DOTogglePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOTOGGLEPAUSE_OFFSET))(this);
		}

		::System::Void DORewind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOREWIND_OFFSET))(this);
		}

		::System::Void DORestart(::System::Boolean fromHere)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DORESTART_OFFSET))(this, fromHere);
		}

		::System::Void DOComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOCOMPLETE_OFFSET))(this);
		}

		::System::Void DOKill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOKILL_OFFSET))(this);
		}

		::System::Void DOPlayById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayAllById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYALLBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayBackwardsById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDSBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayBackwardsAllById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYBACKWARDSALLBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayForwardById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARDBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayForwardAllById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYFORWARDALLBYID_OFFSET))(this, id);
		}

		::System::Void DOPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOPLAYNEXT_OFFSET))(this);
		}

		::System::Void DORewindAndPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DOREWINDANDPLAYNEXT_OFFSET))(this);
		}

		::System::Void DORestartById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DORESTARTBYID_OFFSET))(this, id);
		}

		::System::Void DORestartAllById(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_DORESTARTALLBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* GetTweens()
		{
			return ((::System::Collections::Generic::List_1<::DG::Tweening::Tween*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_GETTWEENS_OFFSET))(this);
		}

		static ::DG::Tweening::Core::TargetType TypeToDOTargetType(::System::Type* t)
		{
			return ((::DG::Tweening::Core::TargetType(*)(::System::Type*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_TYPETODOTARGETTYPE_OFFSET))(t);
		}

		::System::Void ReEvaluateRelativeTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION_REEVALUATERELATIVETWEEN_OFFSET))(this);
		}
	};
}
