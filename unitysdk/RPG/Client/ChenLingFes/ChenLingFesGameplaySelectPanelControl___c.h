#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B73C4F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73C530)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex = 79996;

	class ChenLingFesGameplaySelectPanelControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameplaySelectPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x3DCE0);
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
