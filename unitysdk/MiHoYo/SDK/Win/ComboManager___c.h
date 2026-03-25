#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16089230)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__19_0_OFFSET UNITYSDK_OFFSET(0x160892E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__19_1_OFFSET UNITYSDK_OFFSET(0x16089440)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16089270)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__ONMDKORAUTHTICKETLOGIN_B__16_5_OFFSET UNITYSDK_OFFSET(0x16089280)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__ONREQUESTCOMBOLOGIN_B__24_3_OFFSET UNITYSDK_OFFSET(0x160894A0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__REQUESTREDPOINT_B__38_0_OFFSET UNITYSDK_OFFSET(0x16089500)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 8022;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__19_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139B0);
		}
		static ::MiHoYo::SDK::Win::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139B8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__24_3()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139C0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__38_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139C8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__16_5()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139D0);
		}
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__19_1()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x139D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__16_5(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__ONMDKORAUTHTICKETLOGIN_B__16_5_OFFSET))(this, msg);
		}

		::System::Void _CheckAccountPlatformAndLogin_b__19_0(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__19_0_OFFSET))(this, strParams);
		}

		::System::Void _CheckAccountPlatformAndLogin_b__19_1(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__19_1_OFFSET))(this, strParams);
		}

		::System::Void _OnRequestComboLogin_b__24_3(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__ONREQUESTCOMBOLOGIN_B__24_3_OFFSET))(this, msg);
		}

		::System::Void _RequestRedPoint_b__38_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__REQUESTREDPOINT_B__38_0_OFFSET))(this, response);
		}
	};
}
