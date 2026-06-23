#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAA7110)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA7150)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__TRYONSETSERVERID_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BAA7160)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_NativeNotice___c_TypeDefinitionIndex = 21144;

	class NoticeManager_NativeNotice___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__9_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_NativeNotice___c_TypeDefinitionIndex)->GetStaticField(0xA780);
		}
		static ::MiHoYo::SDK::Win::NoticeManager_NativeNotice___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::NoticeManager_NativeNotice___c**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_NativeNotice___c_TypeDefinitionIndex)->GetStaticField(0xA788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryOnSetServerID_b__9_0(::System::String* strConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__TRYONSETSERVERID_B__9_0_OFFSET))(this, strConfig);
		}
	};
}
