#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputPort_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"

#define CRIWARE_CRIATOMEXOUTPUTPORT_CALCULATEWORKSIZE_OFFSET UNITYSDK_OFFSET(0x164CAFF0)
#define CRIWARE_CRIATOMEXOUTPUTPORT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x164CB460)
#define CRIWARE_CRIATOMEXOUTPUTPORT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164CB3E0)
#define CRIWARE_CRIATOMEXOUTPUTPORT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164CB310)
#define CRIWARE_CRIATOMEXOUTPUTPORT_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x164CAFE0)
#define CRIWARE_CRIATOMEXOUTPUTPORT_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x164CBA30)
#define CRIWARE_CRIATOMEXOUTPUTPORT_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x164CB930)
#define CRIWARE_CRIATOMEXOUTPUTPORT_SETASRRACKID_OFFSET UNITYSDK_OFFSET(0x164CB610)
#define CRIWARE_CRIATOMEXOUTPUTPORT_SETMONAURALMIX_OFFSET UNITYSDK_OFFSET(0x164CB830)
#define CRIWARE_CRIATOMEXOUTPUTPORT_SETVIBRATIONCHANNELLEVEL_OFFSET UNITYSDK_OFFSET(0x164CB710)
#define CRIWARE_CRIATOMEXOUTPUTPORT_SET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x164CBA40)
#define CRIWARE_CRIATOMEXOUTPUTPORT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x164CB2C0)
#define CRIWARE_CRIATOMEXOUTPUTPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x164CB160)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputPort_TypeDefinitionIndex = 38752;

	class CriAtomExOutputPort : public ::CriWare::CriDisposable
	{
	public:
		// static const ::System::UInt32 MaxNameLength = 0x40; // 0x0
		::System::IntPtr _NativeHandle_k__BackingField; // 0x20
		::System::Boolean hasExistingNativeHandle; // 0x28

		::System::Void _ctor(::CriWare::CriAtomExOutputPort_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputPort_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_isAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Int32 CalculateWorkSize(::CriWare::CriAtomExOutputPort_Config a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CriWare::CriAtomExOutputPort_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_CALCULATEWORKSIZE_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void SetAsrRackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_SETASRRACKID_OFFSET))(this, a1);
		}

		::System::Void SetVibrationChannelLevel(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_SETVIBRATIONCHANNELLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetMonauralMix(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_SETMONAURALMIX_OFFSET))(this, a1);
		}

		::System::Boolean IsDestroyable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_ISDESTROYABLE_OFFSET))(this);
		}

		::System::IntPtr get_NativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void set_NativeHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_SET_NATIVEHANDLE_OFFSET))(this, a1);
		}
	};
}
