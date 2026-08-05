#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_SCROLLEXPENDABLEVIEW_GET_EXPENDSTATE_OFFSET UNITYSDK_OFFSET(0x145070D0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14506FF0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW_SET_EXPENDSTATE_OFFSET UNITYSDK_OFFSET(0x145070E0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x145070F0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14507100)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollExpendAbleView_TypeDefinitionIndex = 51072;

	class ScrollExpendAbleView : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Boolean _ExpendState_k__BackingField; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLEXPENDABLEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLEXPENDABLEVIEW_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean get_ExpendState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLEXPENDABLEVIEW_GET_EXPENDSTATE_OFFSET))(this);
		}

		::System::Void set_ExpendState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLEXPENDABLEVIEW_SET_EXPENDSTATE_OFFSET))(this, value);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLEXPENDABLEVIEW___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
