#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONSHOWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167C4D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController_GridCollectionShowData_TypeDefinitionIndex = 43362;

	class UIHollowItemCollectWidgetController_GridCollectionShowData : public ::System::Object
	{
	public:
		::System::Int32 showDeltaCount; // 0x10
		::System::Int32 deltaCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONSHOWDATA__CTOR_OFFSET))(this);
		}
	};
}
