#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExTween_Config.h"
#include "unitysdk/CriWare/CriAtomExTween_ParameterType.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_CREATE_OFFSET UNITYSDK_OFFSET(0x146AF730)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_DESTROY_OFFSET UNITYSDK_OFFSET(0x146AFFB0)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_GETVALUE_OFFSET UNITYSDK_OFFSET(0x146AF860)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x146AF960)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVEFROM_OFFSET UNITYSDK_OFFSET(0x146AFB90)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVETO_OFFSET UNITYSDK_OFFSET(0x146AFA70)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0x146AFDA0)
#define CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_STOP_OFFSET UNITYSDK_OFFSET(0x146AFCA0)
#define CRIWARE_CRIATOMEXTWEEN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146AFE90)
#define CRIWARE_CRIATOMEXTWEEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146AF7C0)
#define CRIWARE_CRIATOMEXTWEEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x146AFE20)
#define CRIWARE_CRIATOMEXTWEEN_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x146AF8E0)
#define CRIWARE_CRIATOMEXTWEEN_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x146AF510)
#define CRIWARE_CRIATOMEXTWEEN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x146AF7E0)
#define CRIWARE_CRIATOMEXTWEEN_MOVEFROM_OFFSET UNITYSDK_OFFSET(0x146AFB00)
#define CRIWARE_CRIATOMEXTWEEN_MOVETO_OFFSET UNITYSDK_OFFSET(0x146AF9E0)
#define CRIWARE_CRIATOMEXTWEEN_RESET_OFFSET UNITYSDK_OFFSET(0x146AFD20)
#define CRIWARE_CRIATOMEXTWEEN_STOP_OFFSET UNITYSDK_OFFSET(0x146AFC20)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x146AF530)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x146AF720)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x146AF540)
#define CRIWARE_CRIATOMEXTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x146AF520)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExTween_TypeDefinitionIndex = 37111;

	class CriAtomExTween : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CriWare::CriAtomEx_Parameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx_Parameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::CriWare::CriAtomExTween_ParameterType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExTween_ParameterType, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN__CTOR_3_OFFSET))(this, a1, a2);
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

		::System::Void MoveTo(::System::UInt16 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_MOVETO_OFFSET))(this, a1, a2);
		}

		::System::Void MoveFrom(::System::UInt16 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_MOVEFROM_OFFSET))(this, a1, a2);
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

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::IntPtr criAtomExTween_Create(::CriWare::CriAtomExTween_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExTween_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExTween_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_DESTROY_OFFSET))(a1);
		}

		static ::System::Single criAtomExTween_GetValue(::System::IntPtr a1)
		{
			return ((::System::Single(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_GETVALUE_OFFSET))(a1);
		}

		static ::System::Void criAtomExTween_MoveTo(::System::IntPtr a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVETO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExTween_MoveFrom(::System::IntPtr a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_MOVEFROM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExTween_Stop(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_STOP_OFFSET))(a1);
		}

		static ::System::Void criAtomExTween_Reset(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_RESET_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExTween_IsActive(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXTWEEN_CRIATOMEXTWEEN_ISACTIVE_OFFSET))(a1);
		}
	};
}
