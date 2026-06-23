#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA63D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemData_TypeDefinitionIndex = 51407;

	class ConfigSurfGameItemData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameItemDataEntry>* settings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::SurfGameTriggerDataEntry>* triggerSettings; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
