#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA9A5B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BA9A760)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__20_1_OFFSET UNITYSDK_OFFSET(0x1BA9A8C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9A5F0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__ONHANDHELDCHANNELLOGIN_B__17_2_OFFSET UNITYSDK_OFFSET(0x1BA9A6B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__ONMDKORAUTHTICKETLOGIN_B__16_6_OFFSET UNITYSDK_OFFSET(0x1BA9A600)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__ONREQUESTCOMBOLOGIN_B__25_3_OFFSET UNITYSDK_OFFSET(0x1BA9A940)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__REQUESTREDPOINT_B__42_0_OFFSET UNITYSDK_OFFSET(0x1BA9A9F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 21162;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__17_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x96E0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__42_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x96E8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__16_6()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x96F0);
		}
		static ::MiHoYo::SDK::Win::ComboManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::ComboManager___c**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x96F8);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__25_3()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x9700);
		}
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__20_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x9708);
		}
		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__20_1()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0x9710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__16_6(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__ONMDKORAUTHTICKETLOGIN_B__16_6_OFFSET))(this, msg);
		}

		::System::Void _OnHandheldChannelLogin_b__17_2(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__ONHANDHELDCHANNELLOGIN_B__17_2_OFFSET))(this, msg);
		}

		::System::Void _CheckAccountPlatformAndLogin_b__20_0(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__20_0_OFFSET))(this, strParams);
		}

		::System::Void _CheckAccountPlatformAndLogin_b__20_1(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__CHECKACCOUNTPLATFORMANDLOGIN_B__20_1_OFFSET))(this, strParams);
		}

		::System::Void _OnRequestComboLogin_b__25_3(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__ONREQUESTCOMBOLOGIN_B__25_3_OFFSET))(this, msg);
		}

		::System::Void _RequestRedPoint_b__42_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__REQUESTREDPOINT_B__42_0_OFFSET))(this, response);
		}
	};
}
