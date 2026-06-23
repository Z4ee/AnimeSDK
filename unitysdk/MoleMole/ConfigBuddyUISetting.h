#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigActivePropsBuddySetting; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGBUDDYUISETTING_GETACTIVEPROPSBUDDYSETTING_OFFSET UNITYSDK_OFFSET(0x17E3B830)
#define MOLEMOLE_CONFIGBUDDYUISETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3BA00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyUISetting_TypeDefinitionIndex = 78606;

	class ConfigBuddyUISetting : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigActivePropsBuddySetting*>* ActivePropsSetting; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYUISETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigActivePropsBuddySetting* GetActivePropsBuddySetting(::System::Int32 buddyID)
		{
			return ((::MoleMole::ConfigActivePropsBuddySetting*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYUISETTING_GETACTIVEPROPSBUDDYSETTING_OFFSET))(this, buddyID);
		}
	};
}
