#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B72AEE0)
#define MIHOYO_SDK_ACCOUNTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72AF20)
#define MIHOYO_SDK_ACCOUNTMANAGER___C__SENDNOTICEEMAIL_B__61_0_OFFSET UNITYSDK_OFFSET(0x1B72AF30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountManager___c_TypeDefinitionIndex = 7909;

	class AccountManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::AccountManager___c**)Il2CppClass::FromTypeDefinitionIndex(AccountManager___c_TypeDefinitionIndex)->GetStaticField(0x2F70);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__61_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(AccountManager___c_TypeDefinitionIndex)->GetStaticField(0x2F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendNoticeEmail_b__61_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER___C__SENDNOTICEEMAIL_B__61_0_OFFSET))(this, a1);
		}
	};
}
