#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

namespace MoleMole { class UIHorizontalLayoutGroup_UIAdaptorRectOffset; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_UIVERTICALLAYOUTGROUP_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE487180)
#define MOLEMOLE_UIVERTICALLAYOUTGROUP_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xE4871A0)
#define MOLEMOLE_UIVERTICALLAYOUTGROUP_REINITFROMLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0xE487040)
#define MOLEMOLE_UIVERTICALLAYOUTGROUP_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xE487190)
#define MOLEMOLE_UIVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xE486F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIVerticalLayoutGroup_TypeDefinitionIndex = 45129;

	class UIVerticalLayoutGroup : public ::System::Object
	{
	public:
		::MoleMole::UIHorizontalLayoutGroup_UIAdaptorRectOffset* padding; // 0x10
		::System::Boolean ScaleHeight; // 0x18
		::System::Boolean SizeWidth; // 0x19
		::System::Boolean ForceExpandHeight; // 0x1A
		::System::Boolean ScaleWidth; // 0x1B
		::System::Boolean PosY; // 0x1C
		::System::Boolean _valueChanged_k__BackingField; // 0x1D
		::UnityEngine::TextAnchor childAlignment; // 0x20
		::System::Boolean ForceExpandWidth; // 0x24
		::System::Boolean PosX; // 0x25
		::System::Boolean SizeHeight; // 0x26
		::System::Single spacing; // 0x28

		::System::Void _ctor(::UnityEngine::UI::VerticalLayoutGroup* verticalLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVERTICALLAYOUTGROUP__CTOR_OFFSET))(this, verticalLayout);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVERTICALLAYOUTGROUP_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVERTICALLAYOUTGROUP_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVERTICALLAYOUTGROUP_MARKVALUECHANGE_OFFSET))(this);
		}

		::System::Void ReInitFromLayoutGroup(::UnityEngine::UI::VerticalLayoutGroup* verticalLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVERTICALLAYOUTGROUP_REINITFROMLAYOUTGROUP_OFFSET))(this, verticalLayout);
		}
	};
}
