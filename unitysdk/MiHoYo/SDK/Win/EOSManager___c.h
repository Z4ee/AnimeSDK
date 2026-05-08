#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_EOSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C90630)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__CHECKENTITLEMENTS_B__13_0_OFFSET UNITYSDK_OFFSET(0x19C90790)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__CHECKENTITLEMENTS_B__13_1_OFFSET UNITYSDK_OFFSET(0x19C90D20)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C90670)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x19C90680)
#define MIHOYO_SDK_WIN_EOSMANAGER___C__INIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x19C90780)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int EOSManager___c_TypeDefinitionIndex = 19898;

	class EOSManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager___c_TypeDefinitionIndex)->GetStaticField(0xA620);
		}
		static ::System::Action_2<::System::String*, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager___c_TypeDefinitionIndex)->GetStaticField(0xA628);
		}
		static ::MiHoYo::SDK::Win::EOSManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::EOSManager___c**)Il2CppClass::FromTypeDefinitionIndex(EOSManager___c_TypeDefinitionIndex)->GetStaticField(0xA630);
		}
		static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager___c_TypeDefinitionIndex)->GetStaticField(0xA638);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__13_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(EOSManager___c_TypeDefinitionIndex)->GetStaticField(0xA640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__4_0(::System::Int32 ret, ::System::String* epicUserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__INIT_B__4_0_OFFSET))(this, ret, epicUserId);
		}

		::System::Void _Init_b__4_1(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__INIT_B__4_1_OFFSET))(this, result);
		}

		::System::Void _CheckEntitlements_b__13_0(::System::String* accountId, ::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__CHECKENTITLEMENTS_B__13_0_OFFSET))(this, accountId, accessToken);
		}

		::System::Void _CheckEntitlements_b__13_1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_EOSMANAGER___C__CHECKENTITLEMENTS_B__13_1_OFFSET))(this, response);
		}
	};
}
