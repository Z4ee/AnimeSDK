#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"

class Class_1_0340E479638D8801;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0xE96C8C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE96C9A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionOr_TypeDefinitionIndex = 79850;

	class ConfigHollowInteractConditionOr : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractCondition*>* conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR_CREATECONDITION_OFFSET))(this);
		}
	};
}
