#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactParameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactStatus.h"
#include "unitysdk/CriWare/CriAtomEx_AisacInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x12BE11C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE14C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE1640)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE0E60)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x12BE17B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x12BDF900)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDF850)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET UNITYSDK_OFFSET(0x12BDFD80)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDFC60)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET UNITYSDK_OFFSET(0x12BE06C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE05A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET UNITYSDK_OFFSET(0x12BE0240)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE0120)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET UNITYSDK_OFFSET(0x12BDFB40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDFA20)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET UNITYSDK_OFFSET(0x12BE0480)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE0360)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x12BE0A40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE0810)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE0C60)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x12BDF7C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDF710)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET UNITYSDK_OFFSET(0x12BDFFF0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET UNITYSDK_OFFSET(0x12BDFEB0)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x12BE0F60)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x12BE1250)
#define CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x12BE1570)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE0D60)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x12BE1710)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x12BC3CD0)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x12BC3BA0)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET UNITYSDK_OFFSET(0x12BDFD00)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET UNITYSDK_OFFSET(0x12BDFBC0)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET UNITYSDK_OFFSET(0x12BE0640)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12BE0500)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET UNITYSDK_OFFSET(0x12BE01C0)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET UNITYSDK_OFFSET(0x12BE0080)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET UNITYSDK_OFFSET(0x12BDFAC0)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET UNITYSDK_OFFSET(0x12BDF980)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x12BE0400)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET UNITYSDK_OFFSET(0x12BE02C0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x12BE09B0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x12BE0740)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x12BE0AD0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET UNITYSDK_OFFSET(0x12BE08E0)
#define CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE0B60)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x12BC3A60)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x12BC3920)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET UNITYSDK_OFFSET(0x12BDFF60)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET UNITYSDK_OFFSET(0x12BDFE00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_TypeDefinitionIndex = 36727;

	class CriAtomExCategory : public ::System::Object
	{
	public:
		static ::System::Void SetVolume(::System::String* name, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET))(name, volume);
		}

		static ::System::Void SetVolume_1(::System::Int32 id, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET))(id, volume);
		}

		static ::System::Single GetVolume(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET))(name);
		}

		static ::System::Single GetVolume_1(::System::Int32 id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET))(id);
		}

		static ::System::Void Mute(::System::String* name, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET))(name, mute);
		}

		static ::System::Void Mute_1(::System::Int32 id, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET))(id, mute);
		}

		static ::System::Boolean IsMuted(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET))(name);
		}

		static ::System::Boolean IsMuted_1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET))(id);
		}

		static ::System::Void Solo(::System::String* name, ::System::Boolean solo, ::System::Single muteVolume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET))(name, solo, muteVolume);
		}

		static ::System::Void Solo_1(::System::Int32 id, ::System::Boolean solo, ::System::Single muteVolume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET))(id, solo, muteVolume);
		}

		static ::System::Boolean IsSoloed(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET))(name);
		}

		static ::System::Boolean IsSoloed_1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET))(id);
		}

		static ::System::Void Pause(::System::String* name, ::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET))(name, pause);
		}

		static ::System::Void Pause_1(::System::Int32 id, ::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET))(id, pause);
		}

		static ::System::Boolean IsPaused(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET))(name);
		}

		static ::System::Boolean IsPaused_1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET))(id);
		}

		static ::System::Void SetAisacControl(::System::String* name, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET))(name, controlName, value);
		}

		static ::System::Void SetAisac(::System::String* name, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET))(name, controlName, value);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 id, ::System::Int32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET))(id, controlId, value);
		}

		static ::System::Void SetAisac_1(::System::Int32 id, ::System::Int32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET))(id, controlId, value);
		}

		static ::System::Void SetReactParameter(::System::String* name, ::CriWare::CriAtomExCategory_ReactParameter parameter)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(name, parameter);
		}

		static ::System::Boolean GetReactParameter(::System::String* name, ::CriWare::CriAtomExCategory_ReactParameter& parameter)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(name, parameter);
		}

		static ::System::Boolean GetAttachedAisacInfoById(::System::UInt32 id, ::System::Int32 aisacAttachedIndex, ::CriWare::CriAtomEx_AisacInfo& aisacInfo)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(id, aisacAttachedIndex, aisacInfo);
		}

		static ::System::Boolean GetAttachedAisacInfoByName(::System::String* name, ::System::Int32 aisacAttachedIndex, ::CriWare::CriAtomEx_AisacInfo& aisacInfo)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(name, aisacAttachedIndex, aisacInfo);
		}

		static ::System::Boolean GetCurrentAisacControlValue(::System::String* categoryName, ::System::String* aisacControlName, ::System::Single& controlValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET))(categoryName, aisacControlName, controlValue);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus GetReactStatus(::System::String* reactName)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(reactName);
		}

		static ::System::Void criAtomExCategory_SetVolumeByName(::System::String* name, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET))(name, volume);
		}

		static ::System::Single criAtomExCategory_GetVolumeByName(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET))(name);
		}

		static ::System::Void criAtomExCategory_SetVolumeById(::System::Int32 id, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET))(id, volume);
		}

		static ::System::Single criAtomExCategory_GetVolumeById(::System::Int32 id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET))(id);
		}

		static ::System::Void criAtomExCategory_MuteById(::System::Int32 id, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET))(id, mute);
		}

		static ::System::Boolean criAtomExCategory_IsMutedById(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET))(id);
		}

		static ::System::Void criAtomExCategory_MuteByName(::System::String* name, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET))(name, mute);
		}

		static ::System::Boolean criAtomExCategory_IsMutedByName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET))(name);
		}

		static ::System::Void criAtomExCategory_SoloById(::System::Int32 id, ::System::Boolean solo, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET))(id, solo, volume);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedById(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET))(id);
		}

		static ::System::Void criAtomExCategory_SoloByName(::System::String* name, ::System::Boolean solo, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET))(name, solo, volume);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedByName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET))(name);
		}

		static ::System::Void criAtomExCategory_PauseById(::System::Int32 id, ::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET))(id, pause);
		}

		static ::System::Boolean criAtomExCategory_IsPausedById(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET))(id);
		}

		static ::System::Void criAtomExCategory_PauseByName(::System::String* name, ::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET))(name, pause);
		}

		static ::System::Boolean criAtomExCategory_IsPausedByName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET))(name);
		}

		static ::System::Void criAtomExCategory_SetAisacControlById(::System::Int32 id, ::System::UInt16 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET))(id, controlId, value);
		}

		static ::System::Void criAtomExCategory_SetAisacControlByName(::System::String* name, ::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET))(name, controlName, value);
		}

		static ::System::Void criAtomExCategory_SetReactParameter(::System::String* react_name, ::CriWare::CriAtomExCategory_ReactParameter& parameter)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(react_name, parameter);
		}

		static ::System::Boolean criAtomExCategory_GetReactParameter(::System::String* react_name, ::CriWare::CriAtomExCategory_ReactParameter& parameter)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(react_name, parameter);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoById(::System::UInt32 id, ::System::Int32 aisacAttachedIndex, ::System::IntPtr aisacInfo)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(id, aisacAttachedIndex, aisacInfo);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoByName(::System::String* name, ::System::Int32 aisacAttachedIndex, ::System::IntPtr aisacInfo)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(name, aisacAttachedIndex, aisacInfo);
		}

		static ::System::Boolean criAtomExCategory_GetCurrentAisacControlValueByName(::System::String* category_name, ::System::String* aisac_control_name, ::System::Single& control_value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET))(category_name, aisac_control_name, control_value);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus criAtomExCategory_GetReactStatus(::System::String* react_name)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(react_name);
		}
	};
}
