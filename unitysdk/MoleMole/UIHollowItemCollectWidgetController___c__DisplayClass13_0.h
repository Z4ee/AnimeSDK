#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFEB0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYGRIDCOLLECTIONDATA_G____EFFECTFINISHCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x190EFEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 54634;

	class UIHollowItemCollectWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* localCopy; // 0x10
		::System::Int32 particleCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGridCollectionData_g____effectFinishCallBack_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYGRIDCOLLECTIONDATA_G____EFFECTFINISHCALLBACK_0_OFFSET))(this);
		}
	};
}
