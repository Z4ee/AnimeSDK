#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERCHANGEEFFECTDICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x181C9EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDicEntry_TypeDefinitionIndex = 68423;

	class ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERCHANGEEFFECTDICENTRY__CTOR_OFFSET))(this);
		}
	};
}
