#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Axis.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Constraint.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_UIGRIDLAYOUTGROUP_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19F09430)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x19F09450)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_REINITFROMGRIDLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x19F09230)
#define MOLEMOLE_UIGRIDLAYOUTGROUP_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19F09440)
#define MOLEMOLE_UIGRIDLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F09220)

namespace MoleMole
{
	inline static constexpr unsigned int UIGridLayoutGroup_TypeDefinitionIndex = 49070;

	class UIGridLayoutGroup : public ::System::Object
	{
	public:
		::UnityEngine::UI::GridLayoutGroup_Constraint constraint; // 0x10
		::UnityEngine::TextAnchor childAlignment; // 0x14
		::UnityEngine::Vector2 spacing; // 0x18
		::System::Int32 padding_bottom; // 0x20
		::UnityEngine::UI::GridLayoutGroup_Axis startAxis; // 0x24
		::System::Int32 padding_right; // 0x28
		::System::Boolean _valueChanged_k__BackingField; // 0x2C
		::System::Int32 padding_top; // 0x30
		::UnityEngine::Vector2 cellSize; // 0x34
		::System::Int32 padding_left; // 0x3C
		::UnityEngine::UI::GridLayoutGroup_Corner startCorner; // 0x40

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
