#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MainCityObjectLoopStateCondition;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAINCITYOBJECTSTATEGRAPHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x150D41B0)

inline static constexpr unsigned int MainCityObjectStateGraphItem_TypeDefinitionIndex = 86747;

class MainCityObjectStateGraphItem : public ::System::Object
{
public:
	::System::Int32 WidgetID; // 0x10
	::System::Collections::Generic::List_1<::MainCityObjectLoopStateCondition*>* States; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINCITYOBJECTSTATEGRAPHITEM__CTOR_OFFSET))(this);
	}
};
