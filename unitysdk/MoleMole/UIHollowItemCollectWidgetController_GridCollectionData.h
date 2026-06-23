#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemCollectWidgetController_GridCollectionShowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x177AD6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController_GridCollectionData_TypeDefinitionIndex = 43358;

	class UIHollowItemCollectWidgetController_GridCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowItemCollectWidgetController_GridCollectionShowData*>* ItemCollectInputDic; // 0x10
		::MoleMole::HollowChessboard::HollowCell Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GRIDCOLLECTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
