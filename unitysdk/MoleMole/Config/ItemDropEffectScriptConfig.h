#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ITEMDROPEFFECTSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA4530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ItemDropEffectScriptConfig_TypeDefinitionIndex = 45864;

	class ItemDropEffectScriptConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ItemDropEffectSetting* DefaultItemDropEffectSetting; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>* OverrideItemDropEffectSettingDict; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* DisableDropItemBornIdleEffectItems; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMDROPEFFECTSCRIPTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
