#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x11A1A150)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x11A1A290)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERFLOAT32_OFFSET UNITYSDK_OFFSET(0x11A19DF0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERSINT32_OFFSET UNITYSDK_OFFSET(0x11A1A030)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERUINT32_OFFSET UNITYSDK_OFFSET(0x11A19F10)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x11A1A1E0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x11A1A0C0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x11A19E80)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_2_OFFSET UNITYSDK_OFFSET(0x11A19FA0)
#define CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x11A19D60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlaybackDebug_TypeDefinitionIndex = 31212;

	class CriAtomExPlaybackDebug : public ::System::Object
	{
	public:
		static ::System::Boolean GetParameter(::CriWare::CriAtomExPlayback playback, ::CriWare::CriAtomEx_Parameter parameterId, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_OFFSET))(playback, parameterId, value);
		}

		static ::System::Boolean GetParameter_1(::CriWare::CriAtomExPlayback playback, ::CriWare::CriAtomEx_Parameter parameterId, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_1_OFFSET))(playback, parameterId, value);
		}

		static ::System::Boolean GetParameter_2(::CriWare::CriAtomExPlayback playback, ::CriWare::CriAtomEx_Parameter parameterId, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::CriWare::CriAtomEx_Parameter, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETPARAMETER_2_OFFSET))(playback, parameterId, value);
		}

		static ::System::Boolean GetAisacControl(::CriWare::CriAtomExPlayback playback, ::System::UInt32 controlId, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_OFFSET))(playback, controlId, value);
		}

		static ::System::Boolean GetAisacControl_1(::CriWare::CriAtomExPlayback playback, ::System::String* controlName, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExPlayback, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_GETAISACCONTROL_1_OFFSET))(playback, controlName, value);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterFloat32(::System::UInt32 id, ::System::Int32 parameterId, ::System::Single& value)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERFLOAT32_OFFSET))(id, parameterId, value);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterUint32(::System::UInt32 id, ::System::Int32 parameterId, ::System::UInt32& value)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERUINT32_OFFSET))(id, parameterId, value);
		}

		static ::System::Int32 criAtomExPlayback_GetParameterSint32(::System::UInt32 id, ::System::Int32 parameterId, ::System::Int32& value)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETPARAMETERSINT32_OFFSET))(id, parameterId, value);
		}

		static ::System::Int32 criAtomExPlayback_GetAisacControlById(::System::UInt32 id, ::System::UInt32 controlId, ::System::Single& value)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYID_OFFSET))(id, controlId, value);
		}

		static ::System::Int32 criAtomExPlayback_GetAisacControlByName(::System::UInt32 id, ::System::String* controlName, ::System::Single& value)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACKDEBUG_CRIATOMEXPLAYBACK_GETAISACCONTROLBYNAME_OFFSET))(id, controlName, value);
		}
	};
}
