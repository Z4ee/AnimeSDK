#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace MoleMole { class ConfigOutlineObjectRenderer_Global; }
namespace MoleMole { class ConfigOutlineObjectRenderer_Local; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE96B0C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowerShopActivityScriptableObject_TypeDefinitionIndex = 53100;

	class ConfigFlowerShopActivityScriptableObject : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::EFinishJudge, ::System::String*>* SuccessEffectDic; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::System::String*>* ChangeEffectDic; // 0x60
		::Foundation::AssetPath SelectAnimPath; // 0x68
		::System::String* SelectAnimName; // 0x78
		::Foundation::AssetPath SelectAnimPath_Base; // 0x80
		::System::String* SelectAnimName_Base; // 0x90
		::MoleMole::ConfigOutlineObjectRenderer_Local* ConfigOutlineParam_Local; // 0x98
		::MoleMole::ConfigOutlineObjectRenderer_Global* ConfigOutlineParam_Global; // 0xA0
		::System::Single Submit2TimelineDelay; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWERSHOPACTIVITYSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
