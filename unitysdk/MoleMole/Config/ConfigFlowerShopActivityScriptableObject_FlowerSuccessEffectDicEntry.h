#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERSUCCESSEFFECTDICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3BE10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDicEntry_TypeDefinitionIndex = 53102;

	class ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERSUCCESSEFFECTDICENTRY__CTOR_OFFSET))(this);
		}
	};
}
