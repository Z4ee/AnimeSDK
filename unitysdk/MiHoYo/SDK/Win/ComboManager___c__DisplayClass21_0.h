#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B81A670)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1B82CDD0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__10_OFFSET UNITYSDK_OFFSET(0x1B82FAC0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__11_OFFSET UNITYSDK_OFFSET(0x1B8301E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__15_OFFSET UNITYSDK_OFFSET(0x1B8320F0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__16_OFFSET UNITYSDK_OFFSET(0x1B8323B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__17_OFFSET UNITYSDK_OFFSET(0x1B8323E0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1B82D820)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__4_OFFSET UNITYSDK_OFFSET(0x1B82E640)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__5_OFFSET UNITYSDK_OFFSET(0x1B82E6B0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__6_OFFSET UNITYSDK_OFFSET(0x1B82ECA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass21_0_TypeDefinitionIndex = 9359;

	class ComboManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__11; // 0x10
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* __9__16; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__6; // 0x20
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* __9__17; // 0x28
		::System::Action* __9__4; // 0x30
		::System::Action_1<::System::String*>* callback; // 0x38
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x40
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _Login_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__1_OFFSET))(this, a1);
		}

		::System::Void _Login_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__4_OFFSET))(this);
		}

		::System::Void _Login_b__5(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__5_OFFSET))(this, a1);
		}

		::System::Void _Login_b__6(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__6_OFFSET))(this, a1);
		}

		::System::Void _Login_b__10(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__10_OFFSET))(this, a1);
		}

		::System::Void _Login_b__11(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__11_OFFSET))(this, a1);
		}

		::System::Void _Login_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__15_OFFSET))(this);
		}

		::System::Void _Login_b__16(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__16_OFFSET))(this, a1);
		}

		::System::Void _Login_b__17(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__LOGIN_B__17_OFFSET))(this, a1, a2, a3);
		}
	};
}
