#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184C1970)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184C19B0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET UNITYSDK_OFFSET(0x184C19C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer___c_TypeDefinitionIndex = 8972;

	class GoogleOAuthServer___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GoogleOAuthServer___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GoogleOAuthServer___c**)Il2CppClass::FromTypeDefinitionIndex(GoogleOAuthServer___c_TypeDefinitionIndex)->GetStaticField(0x28320);
		}
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GoogleOAuthServer___c_TypeDefinitionIndex)->GetStaticField(0x28328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RedirectResultUrl_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET))(this);
		}
	};
}
