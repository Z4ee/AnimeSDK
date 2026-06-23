#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS16_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9AC30)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS16_2__ONMDKORAUTHTICKETLOGIN_B__5_OFFSET UNITYSDK_OFFSET(0x1BA9AC40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass16_2_TypeDefinitionIndex = 21161;

	class ComboManager___c__DisplayClass16_2 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* OnMDKLogin; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS16_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnMDKOrAuthTicketLogin_b__5(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS16_2__ONMDKORAUTHTICKETLOGIN_B__5_OFFSET))(this, ret, msg, account);
		}
	};
}
