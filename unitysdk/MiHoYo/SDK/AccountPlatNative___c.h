#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1AF2A0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1AF2D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__36_0_OFFSET UNITYSDK_OFFSET(0xB1AF2F0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET UNITYSDK_OFFSET(0xB1AF2E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c_TypeDefinitionIndex = 46542;

	class AccountPlatNative___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatNative___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::AccountPlatNative___c**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x3FEC0);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x3FEC8);
		}
		static ::System::Action** StaticGet___9__36_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative___c_TypeDefinitionIndex)->GetStaticField(0x3FED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Instance_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__INSTANCE_B__12_0_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalPluginUICallback_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__HOYOSDKINTERNALPLUGINUICALLBACK_B__36_0_OFFSET))(this);
		}
	};
}
