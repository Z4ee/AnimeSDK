#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156890F0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15689130)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET UNITYSDK_OFFSET(0x15689140)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer___c_TypeDefinitionIndex = 8984;

	class GoogleOAuthServer___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GoogleOAuthServer___c_TypeDefinitionIndex)->GetStaticField(0x2BC00);
		}
		static ::MiHoYo::SDK::Win::GoogleOAuthServer___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GoogleOAuthServer___c**)Il2CppClass::FromTypeDefinitionIndex(GoogleOAuthServer___c_TypeDefinitionIndex)->GetStaticField(0x2BC08);
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
