#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49DEDB08A05AC4C4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_BUFFLISTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18034BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuffListItemRowWidgetController_BuffListItemData_TypeDefinitionIndex = 61636;

	class UIBuffListItemRowWidgetController_BuffListItemData : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* RefreshNewAction; // 0x10
		::System::String* Desc; // 0x18
		::System::Action_1<::System::Int32>* clickAction; // 0x20
		::System::String* Name; // 0x28
		::System::Int32 dataid; // 0x30
		::Enum_3_49DEDB08A05AC4C4 itemType; // 0x34
		::System::Boolean isLock; // 0x38
		::System::Boolean isUp; // 0x39
		::System::Boolean isSelect; // 0x3A
		::System::Boolean isSuggest; // 0x3B
		::System::Boolean isEquip; // 0x3C
		::System::Boolean isEquipLocked; // 0x3D
		::System::Boolean isNew; // 0x3E
		::System::Boolean isMask; // 0x3F
		::System::Int32 itemid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER_BUFFLISTITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
