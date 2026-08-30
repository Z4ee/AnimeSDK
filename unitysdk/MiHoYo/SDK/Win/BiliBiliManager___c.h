#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET UNITYSDK_OFFSET(0x15CE2210)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CE2070)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE20B0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET UNITYSDK_OFFSET(0x15CE2130)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET UNITYSDK_OFFSET(0x15CE20C0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET UNITYSDK_OFFSET(0x15CE21A0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x15CE22E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET UNITYSDK_OFFSET(0x15CE2270)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c_TypeDefinitionIndex = 9265;

	class BiliBiliManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26400);
		}
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26408);
		}
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26410);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26418);
		}
		static ::MiHoYo::SDK::Win::BiliBiliManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BiliBiliManager___c**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26420);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26428);
		}
		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x26430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitResultCallback_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET))(this);
		}

		::System::Void _InitResultCallback_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET))(this);
		}

		::System::Void _LoginResultCallback_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET))(this);
		}

		::System::Void _AntiAddictionCallback_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET))(this);
		}

		::System::Void _PayCallback_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET))(this);
		}

		::System::Void _PayCallback_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET))(this);
		}
	};
}
