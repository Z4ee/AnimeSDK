#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class Class_1_8459E51EACDDD3EF;
template <typename T> class Class_1_3DF236F531F5694C;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1341ABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Collect_TypeDefinitionIndex = 67225;

	class UIUrbanMapRightStreetInfoContext_Collect : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::Class_1_3DF236F531F5694C<::Class_1_8459E51EACDDD3EF*>* CollectDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET))(this);
		}
	};
}
