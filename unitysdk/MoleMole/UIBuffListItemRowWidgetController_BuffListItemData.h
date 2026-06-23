#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49DEDB08A05AC4C4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_BUFFLISTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9A0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuffListItemRowWidgetController_BuffListItemData_TypeDefinitionIndex = 62818;

	class UIBuffListItemRowWidgetController_BuffListItemData : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::Action_1<::System::Int32>* clickAction; // 0x18
		::System::String* Name; // 0x20
		::System::Func_1<::System::Boolean>* RefreshNewAction; // 0x28
		::System::Boolean isUp; // 0x30
		::System::Boolean isEquip; // 0x31
		::System::Boolean isMask; // 0x32
		::System::Boolean isLock; // 0x33
		::System::Boolean isNew; // 0x34
		::System::Boolean isEquipLocked; // 0x35
		::System::Boolean isSuggest; // 0x36
		::System::Boolean isSelect; // 0x37
		::System::Int32 dataid; // 0x38
		::Enum_3_49DEDB08A05AC4C4 itemType; // 0x3C
		::System::Int32 itemid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_BUFFLISTITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
