#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExTween_Config.h"
#include "unitysdk/CriWare/CriAtomExTween_ParameterType.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_CREATE_OFFSET UNITYSDK_OFFSET(0x11A246F0)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A24F40)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_GETVALUE_OFFSET UNITYSDK_OFFSET(0x11A24820)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x11A24920)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVEFROM_OFFSET UNITYSDK_OFFSET(0x11A24B50)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVETO_OFFSET UNITYSDK_OFFSET(0x11A24A30)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0x11A24D60)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_STOP_OFFSET UNITYSDK_OFFSET(0x11A24C60)
#define CRIWARE_CRIATOMEXTWEEN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x11A24E50)
#define CRIWARE_CRIATOMEXTWEEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A24780)
#define CRIWARE_CRIATOMEXTWEEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A24DE0)
#define CRIWARE_CRIATOMEXTWEEN_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x11A248A0)
#define CRIWARE_CRIATOMEXTWEEN_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x11A244D0)
#define CRIWARE_CRIATOMEXTWEEN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x11A247A0)
#define CRIWARE_CRIATOMEXTWEEN_MOVEFROM_OFFSET UNITYSDK_OFFSET(0x11A24AC0)
#define CRIWARE_CRIATOMEXTWEEN_MOVETO_OFFSET UNITYSDK_OFFSET(0x11A249A0)
#define CRIWARE_CRIATOMEXTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0x11A24CE0)
#define CRIWARE_CRIATOMEXTWEEN_STOP_OFFSET UNITYSDK_OFFSET(0x11A24BE0)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11A244F0)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11A246E0)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x11A24500)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A244E0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExTween_TypeDefinitionIndex = 31091;

	class CriAtomExTween : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CriWare::CriAtomEx_Parameter parameterId)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_1_OFFSET))(this, parameterId);
		}

		::System::Void _ctor_2(::System::UInt32 aisacId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_2_OFFSET))(this, aisacId);
		}

		::System::Void _ctor_3(::CriWare::CriAtomExTween_ParameterType parameterType, ::System::UInt32 targetId)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExTween_ParameterType, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_3_OFFSET))(this, parameterType, targetId);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_DISPOSE_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void MoveTo(::System::UInt16 durationMs, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_MOVETO_OFFSET))(this, durationMs, value);
		}

		::System::Void MoveFrom(::System::UInt16 durationMs, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_MOVEFROM_OFFSET))(this, durationMs, value);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_STOP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_RESET_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IntPtr criAtomExTween_Create(::CriWare::CriAtomExTween_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExTween_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomExTween_Destroy(::System::IntPtr tween)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_DESTROY_OFFSET))(tween);
		}

		static ::System::Single criAtomExTween_GetValue(::System::IntPtr tween)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_GETVALUE_OFFSET))(tween);
		}

		static ::System::Void criAtomExTween_MoveTo(::System::IntPtr tween, ::System::UInt16 time_ms, ::System::Single value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVETO_OFFSET))(tween, time_ms, value);
		}

		static ::System::Void criAtomExTween_MoveFrom(::System::IntPtr tween, ::System::UInt16 time_ms, ::System::Single value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVEFROM_OFFSET))(tween, time_ms, value);
		}

		static ::System::Void criAtomExTween_Stop(::System::IntPtr tween)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_STOP_OFFSET))(tween);
		}

		static ::System::Void criAtomExTween_Reset(::System::IntPtr tween)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_RESET_OFFSET))(tween);
		}

		static ::System::Boolean criAtomExTween_IsActive(::System::IntPtr tween)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_ISACTIVE_OFFSET))(tween);
		}
	};
}
