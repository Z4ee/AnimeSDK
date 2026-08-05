#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class TapTapManager_OnLoginDelegate; }
namespace MiHoYo::SDK::Win { class TapTapToken; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_TAPTAPMANAGER_GETACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1CED6410)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_GETSHOWNAME_OFFSET UNITYSDK_OFFSET(0x1CED6420)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CED63A0)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1CED63B0)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED6470)
#define MIHOYO_SDK_WIN_TAPTAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6460)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapManager_TypeDefinitionIndex = 21465;

	class TapTapManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::TapTapManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::TapTapManager**)Il2CppClass::FromTypeDefinitionIndex(TapTapManager_TypeDefinitionIndex)->GetStaticField(0x9F10);
		}
		::MiHoYo::SDK::Win::TapTapManager_OnLoginDelegate* OnTapTapLogin; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Login()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_LOGIN_OFFSET))(this);
		}

		::MiHoYo::SDK::Win::TapTapToken* GetAccessToken()
		{
			return ((::MiHoYo::SDK::Win::TapTapToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_GETACCESSTOKEN_OFFSET))(this);
		}

		::System::String* GetShowName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPMANAGER_GETSHOWNAME_OFFSET))(this);
		}
	};
}
