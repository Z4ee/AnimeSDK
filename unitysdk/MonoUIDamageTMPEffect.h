#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9B987022DA1CF35D.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }

#define MONOUIDAMAGETMPEFFECT_ANIMATETEXT_OFFSET UNITYSDK_OFFSET(0x12B306D0)
#define MONOUIDAMAGETMPEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B2ED80)
#define MONOUIDAMAGETMPEFFECT_CLEARCOROUTINE_OFFSET UNITYSDK_OFFSET(0x12B2F3E0)
#define MONOUIDAMAGETMPEFFECT_DOUPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x12B307B0)
#define MONOUIDAMAGETMPEFFECT_GETCHARACTERFADEININTERVAL_OFFSET UNITYSDK_OFFSET(0x12B30250)
#define MONOUIDAMAGETMPEFFECT_GETCHARACTERFADEOUTINTERVAL_OFFSET UNITYSDK_OFFSET(0x12B302A0)
#define MONOUIDAMAGETMPEFFECT_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x12B30390)
#define MONOUIDAMAGETMPEFFECT_GETTEXTSCALE_OFFSET UNITYSDK_OFFSET(0x12B302F0)
#define MONOUIDAMAGETMPEFFECT_GETTEXTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x12B301B0)
#define MONOUIDAMAGETMPEFFECT_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x12B2ED70)
#define MONOUIDAMAGETMPEFFECT_GET_ISPLAYINGANIM_OFFSET UNITYSDK_OFFSET(0x12B2ED60)
#define MONOUIDAMAGETMPEFFECT_INITDATA_OFFSET UNITYSDK_OFFSET(0x12B2EEF0)
#define MONOUIDAMAGETMPEFFECT_MANUALUPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x12B30750)
#define MONOUIDAMAGETMPEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B2F2F0)
#define MONOUIDAMAGETMPEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B2F4B0)
#define MONOUIDAMAGETMPEFFECT_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x12B2F5A0)
#define MONOUIDAMAGETMPEFFECT_PLAYDAMAGEJUMPANIM_OFFSET UNITYSDK_OFFSET(0x12B303E0)
#define MONOUIDAMAGETMPEFFECT_REFRESHCOMBINEDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x12B2F5F0)
#define MONOUIDAMAGETMPEFFECT_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x12B31500)
#define MONOUIDAMAGETMPEFFECT_SETDAMAGETEXTCOMBINE_OFFSET UNITYSDK_OFFSET(0x12B2F720)
#define MONOUIDAMAGETMPEFFECT_SETDAMAGETEXT_OFFSET UNITYSDK_OFFSET(0x12B2FAC0)
#define MONOUIDAMAGETMPEFFECT_SETFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x12B2F930)
#define MONOUIDAMAGETMPEFFECT_UPDATETRSMATRIX_OFFSET UNITYSDK_OFFSET(0x12B31570)
#define MONOUIDAMAGETMPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B316C0)

inline static constexpr unsigned int MonoUIDamageTMPEffect_TypeDefinitionIndex = 89214;

class MonoUIDamageTMPEffect : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
{
public:
	::TMPro::TMP_Text* TextTMP; // 0x58
	::UnityEngine::CanvasGroup* sampleGo; // 0x60
	::UnityEngine::Vector2 Pivot; // 0x68
	::System::Single TiltDegree; // 0x70
	::System::Single normalScale; // 0x74
	::System::Single criticalScale; // 0x78
	::System::Single specialScale; // 0x7C
	::System::Single uniqueSkillScale; // 0x80
	::System::Single UniqueSkillBlinkInterval; // 0x84
	::System::Single UniqueSkillBlinkDuration; // 0x88
	::System::Int32 UniqueSkillBlinkTimes; // 0x8C
	::UnityEngine::AnimationCurve* CharacterFadeInIntervalCurve; // 0x90
	::UnityEngine::AnimationClip* fadeInAnimationClip; // 0x98
	::System::Boolean fadeInPosition; // 0xA0
	::System::Boolean fadeInRotation; // 0xA1
	::System::Boolean fadeInScale; // 0xA2
	::System::Boolean fadeInAlpha; // 0xA3
	::System::Single NormalShowTime; // 0xA4
	::System::Single CriticalShowTime; // 0xA8
	::System::Single SpecialShowTime; // 0xAC
	::System::Single UniqueSkillShowTime; // 0xB0
	::UnityEngine::AnimationCurve* CharacterFadeOutIntervalCurve; // 0xB8
	::UnityEngine::AnimationClip* fadeOutAnimationClip; // 0xC0
	::System::Boolean fadeOutPosition; // 0xC8
	::System::Boolean fadeOutRotation; // 0xC9
	::System::Boolean fadeOutScale; // 0xCA
	::System::Boolean fadeOutAlpha; // 0xCB
	::System::Single _effectTimer; // 0xCC
	::UnityEngine::Coroutine* _animCoroutine; // 0xD0
	::System::Boolean _isPlayingAnim; // 0xD8
	::System::Boolean _isPause; // 0xD9
	::System::Byte fadeInEndAlpha; // 0xDA
	::UnityEngine::Vector3 fadeInEndPosition; // 0xDC
	::UnityEngine::Quaternion fadeInEndRotation; // 0xE8
	::UnityEngine::Vector3 fadeInEndScale; // 0xF8
	::System::Single finishTime; // 0x104
	::Enum_3_9B987022DA1CF35D _damageTextShowType; // 0x108
	::System::Single _runtimeFadeInInterval; // 0x10C
	::System::Single _runtimeFadeOutInterval; // 0x110
	::System::Int32 _damageTextLength; // 0x114
	::System::Boolean _isUniqueSkill; // 0x118
	::System::Single _curTextScale; // 0x11C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsPlayingAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GET_ISPLAYINGANIM_OFFSET))(this);
	}

	::System::Boolean get_IsPause()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GET_ISPAUSE_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
	}

	::System::Void RefreshCombineDamageText(::System::Single damageNum, ::System::Boolean isCriticalDamage)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_REFRESHCOMBINEDAMAGETEXT_OFFSET))(this, damageNum, isCriticalDamage);
	}

	::System::Void SetDamageTextCombine(::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_SETDAMAGETEXTCOMBINE_OFFSET))(this, fontMat, isUniqueSkillDamage);
	}

	::System::Void SetDamageText(::System::String* damageStr, ::Enum_3_9B987022DA1CF35D damageTextShowType, ::UnityEngine::Material* fontMat, ::System::Boolean isUniqueSkillDamage)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_9B987022DA1CF35D, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_SETDAMAGETEXT_OFFSET))(this, damageStr, damageTextShowType, fontMat, isUniqueSkillDamage);
	}

	::System::Single GetDamageTextLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GETDAMAGETEXTLENGTH_OFFSET))(this);
	}

	::System::Void PlayDamageJumpAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_PLAYDAMAGEJUMPANIM_OFFSET))(this);
	}

	::System::Void ManualUpdateAnimation(::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_MANUALUPDATEANIMATION_OFFSET))(this, deltaTime);
	}

	::System::Void InitData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_INITDATA_OFFSET))(this);
	}

	::System::Void ClearCoroutine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_CLEARCOROUTINE_OFFSET))(this);
	}

	::System::Single GetCharacterFadeInInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GETCHARACTERFADEININTERVAL_OFFSET))(this);
	}

	::System::Single GetCharacterFadeOutInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GETCHARACTERFADEOUTINTERVAL_OFFSET))(this);
	}

	::System::Void SetFontMaterial(::UnityEngine::Material* mat)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_SETFONTMATERIAL_OFFSET))(this, mat);
	}

	::System::Void DoUpdateAnimation(::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_DOUPDATEANIMATION_OFFSET))(this, deltaTime);
	}

	::System::Collections::IEnumerator* AnimateText()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_ANIMATETEXT_OFFSET))(this);
	}

	::System::Byte SampleAnimation(::System::Int32 index, ::System::Int32 maxCount, ::System::Single time)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_SAMPLEANIMATION_OFFSET))(this, index, maxCount, time);
	}

	::UnityEngine::Matrix4x4 UpdateTRSMatrix(::System::Int32 index, ::System::Int32 maxCount, ::System::Single time)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_UPDATETRSMATRIX_OFFSET))(this, index, maxCount, time);
	}

	::System::Single GetTextShowTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GETTEXTSHOWTIME_OFFSET))(this);
	}

	::System::Single GetTextScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIDAMAGETMPEFFECT_GETTEXTSCALE_OFFSET))(this);
	}
};
