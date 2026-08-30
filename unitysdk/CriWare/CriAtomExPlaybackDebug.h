#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x164CD4C0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x164CD600)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERFLOAT32_OFFSET UNITYSDK_OFFSET(0x164CD160)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERSINT32_OFFSET UNITYSDK_OFFSET(0x164CD3A0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERUINT32_OFFSET UNITYSDK_OFFSET(0x164CD280)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x164CD550)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x164CD430)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x164CD1F0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_2_OFFSET UNITYSDK_OFFSET(0x164CD310)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x164CD0D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlaybackDebug_TypeDefinitionIndex = 38897;

	class CriAtomExPlaybackDebug : public ::System::Object
	{
	public:
		static ::System::Boolean GetParameter(::CriWare::CriAtomExPlayback a1, ::CriWare::CriAtomEx_Parameter a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetParameter_1(::CriWare::CriAtomExPlayback a1, ::CriWare::CriAtomEx_Parameter a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetParameter_2(::CriWare::CriAtomExPlayback a1, ::CriWare::CriAtomEx_Parameter a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetAisacControl(::CriWare::CriAtomExPlayback a1, ::System::UInt32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetAisacControl_1(::CriWare::CriAtomExPlayback a1, ::System::String* a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterFloat32(::System::UInt32 a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERFLOAT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterUint32(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERUINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterSint32(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERSINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExPlayback_GetAisacControlById(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single& a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExPlayback_GetAisacControlByName(::System::UInt32 a1, ::System::String* a2, ::System::Single& a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYNAME_OFFSET))(a1, a2, a3);
		}
	};
}
