#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B723740)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYEXITCONFIRMWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B723780)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayExitConfirmWindow___c_TypeDefinitionIndex = 79982;

	class ChenLingFesGameplayExitConfirmWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayExitConfirmWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayExitConfirmWindow___c_TypeDefinitionIndex)->GetStaticField(0x3C180);
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
