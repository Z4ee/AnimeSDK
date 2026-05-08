#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPPOINTGROUPWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x137B4E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointGroupWidgetContext_TypeDefinitionIndex = 80249;

	class UIUrbanMapPointGroupWidgetContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* PointList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTGROUPWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
