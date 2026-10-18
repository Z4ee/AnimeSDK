#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXMIC_EFFECT_GET_AFXINSTANCE_OFFSET UNITYSDK_OFFSET(0x166E03F0)
#define CRIWARE_CRIATOMEXMIC_EFFECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x166E03D0)
#define CRIWARE_CRIATOMEXMIC_EFFECT_SET_AFXINSTANCE_OFFSET UNITYSDK_OFFSET(0x166E0400)
#define CRIWARE_CRIATOMEXMIC_EFFECT_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x166E03E0)
#define CRIWARE_CRIATOMEXMIC_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x166E0410)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_Effect_TypeDefinitionIndex = 40044;

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
