#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Axis.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_UIGRIDLAYOUTGROUP_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1880FE90)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1880FEB0)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_REINITFROMGRIDLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1880FCA0)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1880FEA0)
#define MOLEMOLE_UIGRIDLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1880FC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGridLayoutGroup_TypeDefinitionIndex = 73737;

	class UIGridLayoutGroup : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 spacing; // 0x10
		::UnityEngine::Vector2 cellSize; // 0x18
		::System::Int32 padding_left; // 0x20
		::UnityEngine::TextAnchor childAlignment; // 0x24
		::System::Boolean _valueChanged_k__BackingField; // 0x28
		::System::Int32 padding_bottom; // 0x2C
		::UnityEngine::UI::GridLayoutGroup_Constraint constraint; // 0x30
		::UnityEngine::UI::GridLayoutGroup_Corner startCorner; // 0x34
		::UnityEngine::UI::GridLayoutGroup_Axis startAxis; // 0x38
		::System::Int32 padding_top; // 0x3C
		::System::Int32 padding_right; // 0x40

		::System::Void _ctor(::UnityEngine::UI::GridLayoutGroup* gridLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUP__CTOR_OFFSET))(this, gridLayout);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUP_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUP_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromGridLayoutGroup(::UnityEngine::UI::GridLayoutGroup* gridLayoutGroup)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUP_REINITFROMGRIDLAYOUTGROUP_OFFSET))(this, gridLayoutGroup);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRIDLAYOUTGROUP_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
