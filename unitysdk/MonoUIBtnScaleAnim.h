#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BtnScaleType.h"
#include "unitysdk/MonoUIBtnScaleAnim_AnimState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MONOUIBTNSCALEANIM_AWAKE_OFFSET UNITYSDK_OFFSET(0x12EB0C30)
#define MONOUIBTNSCALEANIM_GETFIXSCALE_OFFSET UNITYSDK_OFFSET(0x12EB17C0)
#define MONOUIBTNSCALEANIM_INIT_OFFSET UNITYSDK_OFFSET(0x12EB2050)
#define MONOUIBTNSCALEANIM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12EB21E0)
#define MONOUIBTNSCALEANIM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12EB1FA0)
#define MONOUIBTNSCALEANIM_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x12EB0D80)
#define MONOUIBTNSCALEANIM_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x12EB1980)
#define MONOUIBTNSCALEANIM_STARTANIM_OFFSET UNITYSDK_OFFSET(0x12EB1820)
#define MONOUIBTNSCALEANIM_STOPANIM_OFFSET UNITYSDK_OFFSET(0x12EB1F60)
#define MONOUIBTNSCALEANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x12EB2000)
#define MONOUIBTNSCALEANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB2240)
#define MONOUIBTNSCALEANIM__STARTANIM_OFFSET UNITYSDK_OFFSET(0x12EB19D0)
#define MONOUIBTNSCALEANIM___STARTANIM_B__40_0_OFFSET UNITYSDK_OFFSET(0x12EB22D0)
#define MONOUIBTNSCALEANIM___STARTANIM_B__40_1_OFFSET UNITYSDK_OFFSET(0x12EB2570)

inline static constexpr unsigned int MonoUIBtnScaleAnim_TypeDefinitionIndex = 38897;

class MonoUIBtnScaleAnim : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean PlayOnStart; // 0x18
	::BtnScaleType ScaleType; // 0x1C
	::System::Boolean UseScriptMaxDelta; // 0x20
	::System::Single MaxDelta; // 0x24
	::System::Boolean UseScriptMinDelta; // 0x28
	::System::Single MinDelta; // 0x2C
	::System::Boolean UseScriptAnimTime; // 0x30
	::System::Single AnimTime; // 0x34
	::System::Boolean UseScriptBiggerCurve; // 0x38
	::UnityEngine::AnimationCurve* BiggerCurve; // 0x40
	::System::Boolean UseScriptSmallerCurve; // 0x48
	::UnityEngine::AnimationCurve* SmallerCurve; // 0x50
	::System::Boolean UseScriptColor; // 0x58
	::UnityEngine::RectTransform* rectTransform; // 0x60
	::DG::Tweening::Sequence* seq; // 0x68
	::MonoUIBtnScaleAnim_AnimState CurState; // 0x70
	::MonoUIBtnScaleAnim_AnimState TargetState; // 0x74
	::System::Boolean large; // 0x78
	::System::Boolean isAnim; // 0x79
	::UnityEngine::Vector2 oriScale; // 0x7C
	::UnityEngine::Vector2 oriSizeDelta; // 0x84
	::System::Boolean init; // 0x8C
	::System::Int32 tickCount; // 0x90
	::System::Single _MaxDelta; // 0x94
	::System::Single _MinDelta; // 0x98
	::System::Single _AnimTime; // 0x9C
	::UnityEngine::AnimationCurve* _BiggerCurve; // 0xA0
	::UnityEngine::AnimationCurve* _SmallerCurve; // 0xA8
	::UnityEngine::UI::Image* img; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_AWAKE_OFFSET))(this);
	}

	::System::Void ReloadConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_RELOADCONFIG_OFFSET))(this);
	}

	::System::Single GetFixScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_GETFIXSCALE_OFFSET))(this);
	}

	::System::Void StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_STARTANIM_OFFSET))(this);
	}

	::System::Void ResetState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_RESETSTATE_OFFSET))(this);
	}

	::System::Void StopAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_STOPANIM_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_UPDATE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_INIT_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM_ONDISABLE_OFFSET))(this);
	}

	::System::Void _StartAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM__STARTANIM_OFFSET))(this);
	}

	::System::Void __StartAnim_b__40_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM___STARTANIM_B__40_0_OFFSET))(this);
	}

	::System::Void __StartAnim_b__40_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIBTNSCALEANIM___STARTANIM_B__40_1_OFFSET))(this);
	}
};
