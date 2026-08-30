#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXMIC_EFFECT_GET_AFXINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D364CC0)
#define CRIWARE_CRIATOMEXMIC_EFFECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D364CA0)
#define CRIWARE_CRIATOMEXMIC_EFFECT_SET_AFXINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D364CD0)
#define CRIWARE_CRIATOMEXMIC_EFFECT_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D364CB0)
#define CRIWARE_CRIATOMEXMIC_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D364CE0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_Effect_TypeDefinitionIndex = 38747;

	class CriAtomExMic_Effect : public ::System::Object
	{
	public:
		::System::IntPtr _handle_k__BackingField; // 0x10
		::System::IntPtr _afxInstance_k__BackingField; // 0x18

		::System::Void _ctor(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_EFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr get_handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_EFFECT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_handle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_EFFECT_SET_HANDLE_OFFSET))(this, a1);
		}

		::System::IntPtr get_afxInstance()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_EFFECT_GET_AFXINSTANCE_OFFSET))(this);
		}

		::System::Void set_afxInstance(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_EFFECT_SET_AFXINSTANCE_OFFSET))(this, a1);
		}
	};
}
