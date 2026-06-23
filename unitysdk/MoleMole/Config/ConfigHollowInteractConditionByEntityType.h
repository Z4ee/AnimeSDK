#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"

class Class_1_0340E479638D8801;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x18AD5290)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionByEntityType_TypeDefinitionIndex = 39701;

	class ConfigHollowInteractConditionByEntityType : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* TemplateIDs; // 0x10
		::System::Boolean SetInteractEntity; // 0x18
		::ProtoScript::HollowEntityType EntityType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE__CTOR_OFFSET))(this);
		}

		::Class_1_0340E479638D8801* CreateCondition()
		{
			return ((::Class_1_0340E479638D8801*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE_CREATECONDITION_OFFSET))(this);
		}
	};
}
