#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfigAndroid.h"
#include "unitysdk/CriWare/CriAtomExAsrRack_PlatformConfigPS5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_GETCURRENTUSERID_PS5_OFFSET UNITYSDK_OFFSET(0x164BEE50)
#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_ISUSERIDSETTABLE_PS5_OFFSET UNITYSDK_OFFSET(0x164BEE10)
#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETDEFAULTCONFIG_ANDROID_MACRO_OFFSET UNITYSDK_OFFSET(0x164BEDD0)
#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETDEFAULTCONFIG_PS5_MACRO_OFFSET UNITYSDK_OFFSET(0x164BEDF0)
#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETUSERID_PS5_OFFSET UNITYSDK_OFFSET(0x164BEE30)
#define CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x164C1100)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_NativeMethods_TypeDefinitionIndex = 38618;

	class CriAtomExAsrRack_NativeMethods : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS__CTOR_OFFSET))(this);
		}

		static ::System::Void criAtomExAsrRack_SetDefaultConfig_ANDROID_Macro(::CriWare::CriAtomExAsrRack_PlatformConfigAndroid& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_PlatformConfigAndroid&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETDEFAULTCONFIG_ANDROID_MACRO_OFFSET))(a1);
		}

		static ::System::Void criAtomExAsrRack_SetDefaultConfig_PS5_Macro(::CriWare::CriAtomExAsrRack_PlatformConfigPS5& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExAsrRack_PlatformConfigPS5&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETDEFAULTCONFIG_PS5_MACRO_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAsrRack_IsUserIdSettable_PS5(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_ISUSERIDSETTABLE_PS5_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAsrRack_SetUserId_PS5(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_SETUSERID_PS5_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAsrRack_GetCurrentUserId_PS5(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASRRACK_NATIVEMETHODS_CRIATOMEXASRRACK_GETCURRENTUSERID_PS5_OFFSET))(a1, a2);
		}
	};
}
