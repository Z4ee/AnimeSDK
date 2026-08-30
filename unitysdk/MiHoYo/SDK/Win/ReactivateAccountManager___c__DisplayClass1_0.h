#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DE020)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B8DE200)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__SHOW_B__1_OFFSET UNITYSDK_OFFSET(0x1B8DE230)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccountManager___c__DisplayClass1_0_TypeDefinitionIndex = 9223;

	class ReactivateAccountManager___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* submitAction; // 0x10
		::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* closeAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__SHOW_B__0_OFFSET))(this);
		}

		::System::Void _Show_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNTMANAGER___C__DISPLAYCLASS1_0__SHOW_B__1_OFFSET))(this);
		}
	};
}
