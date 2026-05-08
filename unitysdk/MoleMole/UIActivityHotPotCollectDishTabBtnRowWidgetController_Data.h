#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTCOLLECTDISHTABBTNROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x152D1040)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCollectDishTabBtnRowWidgetController_Data_TypeDefinitionIndex = 49517;

	class UIActivityHotPotCollectDishTabBtnRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* Action; // 0x10
		::System::String* Text; // 0x18
		::System::String* LockParam; // 0x20
		::System::Action* LockAction; // 0x28
		::System::Int32 ID; // 0x30
		::System::Boolean IsUnlock; // 0x34
		::System::Boolean ShowNew; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOLLECTDISHTABBTNROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
