#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSAccountInfoDialog; }
namespace MiHoYo::SDK::PS { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5D0B0)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BA5F6E0)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__1_OFFSET UNITYSDK_OFFSET(0x1BA5F880)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__2_OFFSET UNITYSDK_OFFSET(0x1BA5F8D0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountInfoDialog___c__DisplayClass27_0_TypeDefinitionIndex = 8875;

	class PSAccountInfoDialog___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* currentZone; // 0x10
		::System::Predicate_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* __9__2; // 0x18
		::System::String* hoyoAccountName; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* userGameInfoList; // 0x28
		::System::Predicate_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* __9__1; // 0x30
		::System::String* psnAccountName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PS::PSAccountInfoDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSAccountInfoDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _Show_b__1(::MiHoYo::SDK::PS::UserGameServerInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PS::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _Show_b__2(::MiHoYo::SDK::PS::UserGameServerInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PS::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG___C__DISPLAYCLASS27_0__SHOW_B__2_OFFSET))(this, a1);
		}
	};
}
