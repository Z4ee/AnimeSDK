#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"

namespace MoleMole::Config { class ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDicEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERSUCCESSEFFECTDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA502A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDic_TypeDefinitionIndex = 53103;

	class ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*, ::MoleMole::Config::ConfigFlowerShopActivityScriptableObject_FlowerSuccessEffectDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT_FLOWERSUCCESSEFFECTDIC__CTOR_OFFSET))(this);
		}
	};
}
