#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class GoalPathTypeConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGOALPATH_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144DFDE0)
#define MOLEMOLE_CONFIG_CONFIGGOALPATH_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144DFC10)
#define MOLEMOLE_CONFIG_CONFIGGOALPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x144E0070)
#define MOLEMOLE_CONFIG_CONFIGGOALPATH___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144E01D0)
#define MOLEMOLE_CONFIG_CONFIGGOALPATH___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x144E01E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGoalPath_TypeDefinitionIndex = 78401;

	class ConfigGoalPath : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_F27E25827C684939, ::MoleMole::Config::GoalPathTypeConfig*>* Mappings; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::GoalPathTypeConfig*>* SerializedData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGOALPATH__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGOALPATH_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGOALPATH_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGOALPATH___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGOALPATH___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
