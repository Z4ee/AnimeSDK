#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

namespace MoleMole { class UIHorizontalLayoutGroup_UIAdaptorRectOffset; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE87390)
#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1AE873B0)
#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_REINITFROMLAYOUTGROUP_OFFSET UNITYSDK_OFFSET(0x1AE87280)
#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AE873A0)
#define MOLEMOLE_UIHORIZONTALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE87140)

namespace MoleMole
{
	inline static constexpr unsigned int UIHorizontalLayoutGroup_TypeDefinitionIndex = 61876;

	class UIHorizontalLayoutGroup : public ::System::Object
	{
	public:
		::System::Boolean _valueChanged_k__BackingField; // 0x10
		::MoleMole::UIHorizontalLayoutGroup_UIAdaptorRectOffset* padding; // 0x18
		::System::Single spacing; // 0x20
		::UnityEngine::TextAnchor childAlignment; // 0x24
		::System::Boolean SizeWidth; // 0x28
		::System::Boolean SizeHeight; // 0x29
		::System::Boolean PosX; // 0x2A
		::System::Boolean PosY; // 0x2B
		::System::Boolean ScaleWidth; // 0x2C
		::System::Boolean ScaleHeight; // 0x2D
		::System::Boolean ForceExpandWidth; // 0x2E
		::System::Boolean ForceExpandHeight; // 0x2F

		::System::Void _ctor(::UnityEngine::UI::HorizontalLayoutGroup* horizontalLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP__CTOR_OFFSET))(this, horizontalLayout);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_MARKVALUECHANGE_OFFSET))(this);
		}

		::System::Void ReInitFromLayoutGroup(::UnityEngine::UI::HorizontalLayoutGroup* horizontalLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALLAYOUTGROUP_REINITFROMLAYOUTGROUP_OFFSET))(this, horizontalLayout);
		}
	};
}
