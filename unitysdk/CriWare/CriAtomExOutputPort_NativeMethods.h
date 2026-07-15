#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputPort_Config.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_CALCULATEWORKSIZE_OFFSET UNITYSDK_OFFSET(0x1B78E810)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B78E920)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B78ECF0)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_ISDESTROYABLE_OFFSET UNITYSDK_OFFSET(0x1B78F110)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETASRRACKID_OFFSET UNITYSDK_OFFSET(0x1B78EDF0)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETMONAURALMIX_OFFSET UNITYSDK_OFFSET(0x1B78F010)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETVIBRATIONCHANNELLEVEL_OFFSET UNITYSDK_OFFSET(0x1B78EF00)
#define CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78F1D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputPort_NativeMethods_TypeDefinitionIndex = 37896;

	class CriAtomExOutputPort_NativeMethods : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 criAtomExOutputPort_CalculateWorkSize(::CriWare::CriAtomExOutputPort_Config a1)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomExOutputPort_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_CALCULATEWORKSIZE_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExOutputPort_Create(::CriWare::CriAtomExOutputPort_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExOutputPort_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExOutputPort_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomExOutputPort_SetAsrRackId(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETASRRACKID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputPort_SetVibrationChannelLevel(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETVIBRATIONCHANNELLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExOutputPort_SetMonauralMix(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_SETMONAURALMIX_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExOutputPort_IsDestroyable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_NATIVEMETHODS_CRIATOMEXOUTPUTPORT_ISDESTROYABLE_OFFSET))(a1);
		}
	};
}
