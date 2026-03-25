#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AuthTicketThirdParty.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_WIN_ACCOUNTUTIL_UPDATETHIRDPARTYICON_OFFSET UNITYSDK_OFFSET(0x16048450)
#define MIHOYO_SDK_WIN_ACCOUNTUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16048750)
#define MIHOYO_SDK_WIN_ACCOUNTUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16048740)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountUtil_TypeDefinitionIndex = 7905;

	class AccountUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::AuthTicketThirdParty, ::System::String*>** StaticGet_ThirdPartyIconPaths()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::AuthTicketThirdParty, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AccountUtil_TypeDefinitionIndex)->GetStaticField(0x1A4F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void UpdateThirdPartyIcon(::UnityEngine::UI::Image* icon, ::MiHoYo::SDK::AuthTicketThirdParty thirdParty)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::MiHoYo::SDK::AuthTicketThirdParty))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTUTIL_UPDATETHIRDPARTYICON_OFFSET))(icon, thirdParty);
		}
	};
}
