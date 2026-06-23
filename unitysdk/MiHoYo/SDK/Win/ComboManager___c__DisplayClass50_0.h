#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1B9F7A80)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x1B9F83C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0x1B9F8480)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F7A70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass50_0_TypeDefinitionIndex = 21178;

	class ComboManager___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__2; // 0x10
		::System::Action_1<::System::String*>* __9__1; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeforeVerify_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__0_OFFSET))(this, response);
		}

		::System::Void _BeforeVerify_b__1(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__1_OFFSET))(this, url);
		}

		::System::Void _BeforeVerify_b__2(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS50_0__BEFOREVERIFY_B__2_OFFSET))(this, url);
		}
	};
}
