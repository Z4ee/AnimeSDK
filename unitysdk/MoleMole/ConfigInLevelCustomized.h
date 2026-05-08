#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class InLevelCustomizedData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGINLEVELCUSTOMIZED__AUTOSYNC_OFFSET UNITYSDK_OFFSET(0x1243FA40)
#define MOLEMOLE_CONFIGINLEVELCUSTOMIZED__CTOR_OFFSET UNITYSDK_OFFSET(0x1243FC00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigInLevelCustomized_TypeDefinitionIndex = 73632;

	class ConfigInLevelCustomized : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::InLevelCustomizedData*>* CustomizedUIData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGINLEVELCUSTOMIZED__CTOR_OFFSET))(this);
		}

		::System::Void _AutoSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGINLEVELCUSTOMIZED__AUTOSYNC_OFFSET))(this);
		}
	};
}
