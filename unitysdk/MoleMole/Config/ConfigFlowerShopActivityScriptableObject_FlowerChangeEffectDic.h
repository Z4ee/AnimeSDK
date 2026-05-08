#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDicEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERCHANGEEFFECTDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1424B520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDic_TypeDefinitionIndex = 68426;

	class ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject_FlowerChangeEffectDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERCHANGEEFFECTDIC__CTOR_OFFSET))(this);
		}
	};
}
