#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class FootPrintConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x11711C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfigs_TypeDefinitionIndex = 81282;

	class FootPrintConfigs : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* FootAttachPoints; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* FootEffectPatterns; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
