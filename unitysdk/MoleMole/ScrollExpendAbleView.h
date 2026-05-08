#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_SCROLLEXPENDABLEVIEW_GET_EXPENDSTATE_OFFSET UNITYSDK_OFFSET(0x1703F6E0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1703F600)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW_SET_EXPENDSTATE_OFFSET UNITYSDK_OFFSET(0x1703F6F0)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1703F700)
#define MOLEMOLE_SCROLLEXPENDABLEVIEW___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1703F710)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollExpendAbleView_TypeDefinitionIndex = 68611;

	class ScrollExpendAbleView : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Boolean _ExpendState_k__BackingField; // 0x2E8

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
