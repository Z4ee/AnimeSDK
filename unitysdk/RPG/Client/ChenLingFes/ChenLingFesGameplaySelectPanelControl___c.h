#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4C5680)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C56C0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex = 76363;

	class ChenLingFesGameplaySelectPanelControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x66980);
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
