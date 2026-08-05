#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScePadTriggerEffectFeedbackParam.h"
#include "unitysdk/ScePadTriggerEffectMode.h"
#include "unitysdk/ScePadTriggerEffectMultiplePositionFeedbackParam.h"
#include "unitysdk/ScePadTriggerEffectMultiplePositionVibrationParam.h"
#include "unitysdk/ScePadTriggerEffectParam.h"
#include "unitysdk/ScePadTriggerEffectSlopeFeedbackParam.h"
#include "unitysdk/ScePadTriggerEffectVibrationParam.h"
#include "unitysdk/ScePadTriggerEffectWeaponParam.h"
#include "unitysdk/ScePadTriggerMask.h"
#include "unitysdk/System/Object.h"

#define SCEPADINVOKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E828040)
#define SCEPADINVOKE_GETSCEPADHANDLE_OFFSET UNITYSDK_OFFSET(0x1E827280)
#define SCEPADINVOKE_INITSCEPADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E826F60)
#define SCEPADINVOKE_SCEPADSETTRIGGEREFFECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E827350)
#define SCEPADINVOKE_SCEPADSETTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x1E826E40)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1E8278A0)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTMULTIPLEPOSITIONFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1E827BE0)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTMULTIPLEPOSITIONVIBRATION_OFFSET UNITYSDK_OFFSET(0x1E827A00)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTOFF_OFFSET UNITYSDK_OFFSET(0x1E827F30)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTSLOPEFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1E827D90)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTVIBRATION_OFFSET UNITYSDK_OFFSET(0x1E827710)
#define SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTWEAPON_OFFSET UNITYSDK_OFFSET(0x1E827580)
#define SCEPADINVOKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8281F0)
#define SCEPADINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8281E0)

inline static constexpr unsigned int ScePadInvoke_TypeDefinitionIndex = 42669;

class ScePadInvoke : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__scePadHandle()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A20);
	}
	static ::System::Int32* StaticGet_SCE_PAD_TRIGGER_EFFECT_CONTROL_POINT_NUM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A24);
	}
	static ::System::Byte* StaticGet_SCE_PAD_TRIGGER_EFFECT_TRIGGER_MASK_R2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A28);
	}
	static ::System::Boolean* StaticGet__sceInited()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A29);
	}
	static ::System::Byte* StaticGet_SCE_PAD_TRIGGER_EFFECT_TRIGGER_MASK_L2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A2A);
	}
	static ::System::Int32* StaticGet_SCE_USER_SERVICE_MAX_LOGIN_USERS()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScePadInvoke_TypeDefinitionIndex)->GetStaticField(0x12A2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCEPADINVOKE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCEPADINVOKE__CCTOR_OFFSET))();
	}

	static ::System::UInt32 scePadSetTriggerEffect(::System::Int32 handle, ::ScePadTriggerEffectParam& param)
	{
		return ((::System::UInt32(*)(::System::Int32, ::ScePadTriggerEffectParam&))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SCEPADSETTRIGGEREFFECT_OFFSET))(handle, param);
	}

	static ::System::Void InitScePadInternal()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCEPADINVOKE_INITSCEPADINTERNAL_OFFSET))();
	}

	static ::System::Int32 GetScePadHandle()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SCEPADINVOKE_GETSCEPADHANDLE_OFFSET))();
	}

	static ::System::Void scePadSetTriggerEffectInternal(::System::Int32 handle, ::ScePadTriggerMask trigger, ::ScePadTriggerEffectMode mode, ::Il2CppArray<::System::Byte>* data)
	{
		return ((::System::Void(*)(::System::Int32, ::ScePadTriggerMask, ::ScePadTriggerEffectMode, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SCEPADSETTRIGGEREFFECTINTERNAL_OFFSET))(handle, trigger, mode, data);
	}

	static ::System::Void SetGamepadTriggerEffectWeapon(::ScePadTriggerMask trigger, ::ScePadTriggerEffectWeaponParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectWeaponParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTWEAPON_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectVibration(::ScePadTriggerMask trigger, ::ScePadTriggerEffectVibrationParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectVibrationParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTVIBRATION_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectFeedback(::ScePadTriggerMask trigger, ::ScePadTriggerEffectFeedbackParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectFeedbackParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTFEEDBACK_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectMultiplePositionVibration(::ScePadTriggerMask trigger, ::ScePadTriggerEffectMultiplePositionVibrationParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectMultiplePositionVibrationParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTMULTIPLEPOSITIONVIBRATION_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectMultiplePositionFeedback(::ScePadTriggerMask trigger, ::ScePadTriggerEffectMultiplePositionFeedbackParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectMultiplePositionFeedbackParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTMULTIPLEPOSITIONFEEDBACK_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectSlopeFeedback(::ScePadTriggerMask trigger, ::ScePadTriggerEffectSlopeFeedbackParam param)
	{
		return ((::System::Void(*)(::ScePadTriggerMask, ::ScePadTriggerEffectSlopeFeedbackParam))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTSLOPEFEEDBACK_OFFSET))(trigger, param);
	}

	static ::System::Void SetGamepadTriggerEffectOff(::ScePadTriggerMask trigger)
	{
		return ((::System::Void(*)(::ScePadTriggerMask))((::PBYTE)hIl2Cpp + SCEPADINVOKE_SETGAMEPADTRIGGEREFFECTOFF_OFFSET))(trigger);
	}

	static ::System::Void Dispose()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCEPADINVOKE_DISPOSE_OFFSET))();
	}
};
