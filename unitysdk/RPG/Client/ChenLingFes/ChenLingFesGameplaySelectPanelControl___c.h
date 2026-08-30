#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB597D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB59810)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex = 79997;

	class ChenLingFesGameplaySelectPanelControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x377F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
