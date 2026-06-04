#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5F4F20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F4F60)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayExitConfirmWindow___c_TypeDefinitionIndex = 73967;

	class ChenLingFesGameplayExitConfirmWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayExitConfirmWindow___c_TypeDefinitionIndex)->GetStaticField(0x61320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
