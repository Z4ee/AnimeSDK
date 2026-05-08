#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x12E8EEB0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8F090)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ProductTypeFilter_TypeDefinitionIndex = 44798;

	class UISuibianTempleManageInfoWidgetController_ProductTypeFilter : public ::System::Object
	{
	public:
		::System::Int32 ProductType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::Class_2_1E89A1A01EA84819* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1E89A1A01EA84819*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_PRODUCTTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
