#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET UNITYSDK_OFFSET(0x176B6B50)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176B69E0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176B6A20)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET UNITYSDK_OFFSET(0x176B6A90)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET UNITYSDK_OFFSET(0x176B6A30)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET UNITYSDK_OFFSET(0x176B6AF0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x176B6C10)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET UNITYSDK_OFFSET(0x176B6BB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c_TypeDefinitionIndex = 8080;

	class BiliBiliManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273D0);
		}
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273D8);
		}
		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273E0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273E8);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273F0);
		}
		static ::MiHoYo::SDK::Win::BiliBiliManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::BiliBiliManager___c**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x273F8);
		}
		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliManager___c_TypeDefinitionIndex)->GetStaticField(0x27400);
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
