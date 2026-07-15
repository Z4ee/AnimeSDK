#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;

#define RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET UNITYSDK_OFFSET(0x1801B740)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionCheckItemFactory_TypeDefinitionIndex = 57233;

	class ConditionCheckItemFactory : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_627* CreateConditionCheckItem(::RPG::GameCore::ConditionType a1, ::System::Object* a2)
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::RPG::GameCore::ConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKITEMFACTORY_CREATECONDITIONCHECKITEM_OFFSET))(a1, a2);
		}
	};
}
