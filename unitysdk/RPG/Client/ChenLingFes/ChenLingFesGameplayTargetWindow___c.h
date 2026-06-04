#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6165F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB616630)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetWindow___c_TypeDefinitionIndex = 73988;

	class ChenLingFesGameplayTargetWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplayTargetWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplayTargetWindow___c_TypeDefinitionIndex)->GetStaticField(0x619F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
