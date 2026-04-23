#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/LoginPattern.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class LoginDataModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177377A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1774D6D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__10_OFFSET UNITYSDK_OFFSET(0x1774E8E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__11_OFFSET UNITYSDK_OFFSET(0x1774E9C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__12_OFFSET UNITYSDK_OFFSET(0x1774C9C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__13_OFFSET UNITYSDK_OFFSET(0x1774CD60)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__14_OFFSET UNITYSDK_OFFSET(0x1774D030)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__15_OFFSET UNITYSDK_OFFSET(0x1774D970)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__16_OFFSET UNITYSDK_OFFSET(0x1774D9B0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__17_OFFSET UNITYSDK_OFFSET(0x1774E160)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__19_OFFSET UNITYSDK_OFFSET(0x1774E1D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x1774D7F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__21_OFFSET UNITYSDK_OFFSET(0x1774DE50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__22_OFFSET UNITYSDK_OFFSET(0x1774DEC0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__23_OFFSET UNITYSDK_OFFSET(0x1774DF50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__24_OFFSET UNITYSDK_OFFSET(0x1774DF90)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__25_OFFSET UNITYSDK_OFFSET(0x1774E000)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__26_OFFSET UNITYSDK_OFFSET(0x1774E090)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__27_OFFSET UNITYSDK_OFFSET(0x1774E0D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0x1774D910)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__3_OFFSET UNITYSDK_OFFSET(0x1774E260)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__4_OFFSET UNITYSDK_OFFSET(0x1774E380)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__5_OFFSET UNITYSDK_OFFSET(0x1774E3C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__6_OFFSET UNITYSDK_OFFSET(0x1774E4E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__7_OFFSET UNITYSDK_OFFSET(0x1774E740)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__8_OFFSET UNITYSDK_OFFSET(0x1774E860)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__9_OFFSET UNITYSDK_OFFSET(0x1774E8A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass87_0_TypeDefinitionIndex = 8207;

	class LoginManager___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::Action* __9__21; // 0x18
		::System::Action* __9__22; // 0x20
		::System::Action* __9__25; // 0x28
		::MiHoYo::SDK::JSONNode* model; // 0x30
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* __9__14; // 0x38
		::System::Action* __9__23; // 0x40
		::System::Action* __9__26; // 0x48
		::System::Action* __9__24; // 0x50
		::System::Action_1<::System::String*>* __9__27; // 0x58
		::System::Int32 index; // 0x60
		::MiHoYo::SDK::LoginPattern pattern; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__12(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__12_OFFSET))(this, strArgs, callback);
		}

		::System::Void _OnCheckAccount_b__13(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__13_OFFSET))(this, strArgs, callback);
		}

		::System::Void _OnCheckAccount_b__14(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__14_OFFSET))(this, response);
		}

		::System::Void _OnCheckAccount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__0_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__1_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__2(::MiHoYo::SDK::AccountModel* grantUserModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__2_OFFSET))(this, grantUserModel);
		}

		::System::Void _OnCheckAccount_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__15_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__16_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__21()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__21_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__22_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__23_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__24()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__24_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__25()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__25_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__26()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__26_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__27(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__27_OFFSET))(this, ticket);
		}

		::System::Void _OnCheckAccount_b__17()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__17_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__19()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__19_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__3_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__4(::MiHoYo::SDK::AccountModel* accountModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__4_OFFSET))(this, accountModel);
		}

		::System::Void _OnCheckAccount_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__5_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__6(::System::String* name, ::System::String* idcard, ::System::String* operation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__6_OFFSET))(this, name, idcard, operation);
		}

		::System::Void _OnCheckAccount_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__7_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__8_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__9_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__10(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__10_OFFSET))(this, message);
		}

		::System::Void _OnCheckAccount_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_0__ONCHECKACCOUNT_B__11_OFFSET))(this);
		}
	};
}
