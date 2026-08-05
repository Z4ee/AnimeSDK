#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_WeightedPerformingItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x14864EA0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG_GETRANDOMPERFORMINGKEY_OFFSET UNITYSDK_OFFSET(0x14864F00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14865150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_WeightedPerformingConfig_TypeDefinitionIndex = 59278;

	class ConfigHollowChessboard_WeightedPerformingConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingItem>* PerformingItems; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* accumulate; // 0x18
		::System::Int32 totalWeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingItem CustomAddFunction()
		{
			return ((::MoleMole::Config::ConfigHollowChessboard_WeightedPerformingItem(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG_CUSTOMADDFUNCTION_OFFSET))(this);
		}

		::System::String* GetRandomPerformingKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_WEIGHTEDPERFORMINGCONFIG_GETRANDOMPERFORMINGKEY_OFFSET))(this);
		}
	};
}
