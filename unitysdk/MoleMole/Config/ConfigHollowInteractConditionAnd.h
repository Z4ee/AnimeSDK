#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"

class Class_1_0340E479638D8801;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONAND_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x18F35E00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONAND__CTOR_OFFSET UNITYSDK_OFFSET(0x18F35EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionAnd_TypeDefinitionIndex = 80998;

	class ConfigHollowInteractConditionAnd : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractCondition*>* conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONAND__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONAND_CREATECONDITION_OFFSET))(this);
		}
	};
}
