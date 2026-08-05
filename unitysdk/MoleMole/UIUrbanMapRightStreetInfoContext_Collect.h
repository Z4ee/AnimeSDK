#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class Class_1_2BF8C713045E78D9;
template <typename T> class Class_1_BBE667D4A3124D9B;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD300)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Collect_TypeDefinitionIndex = 84918;

	class UIUrbanMapRightStreetInfoContext_Collect : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::Class_1_BBE667D4A3124D9B<::Class_1_2BF8C713045E78D9*>* CollectDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET))(this);
		}
	};
}
