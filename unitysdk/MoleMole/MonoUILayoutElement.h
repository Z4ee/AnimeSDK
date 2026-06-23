#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_MONOUILAYOUTELEMENT_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x160DAD80)
#define MOLEMOLE_MONOUILAYOUTELEMENT_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x160DADA0)
#define MOLEMOLE_MONOUILAYOUTELEMENT_REINITFROMLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x160DAA70)
#define MOLEMOLE_MONOUILAYOUTELEMENT_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x160DAD90)
#define MOLEMOLE_MONOUILAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x160DAA60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutElement_TypeDefinitionIndex = 65583;

	class MonoUILayoutElement : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x10
		::System::Single flexibleWidth; // 0x18
		::System::Single preferredWidth; // 0x1C
		::System::Boolean isMinWidth; // 0x20
		::System::Boolean _valueChanged_k__BackingField; // 0x21
		::System::Boolean isPreFerredHeight; // 0x22
		::System::Boolean isPreferredWidth; // 0x23
		::System::Boolean ignoreLayout; // 0x24
		::System::Boolean isFlexibleHeight; // 0x25
		::System::Boolean isMinHeight; // 0x26
		::System::Boolean isFlexibleWidth; // 0x27
		::System::Single minHeight; // 0x28
		::System::Single flexibleHeight; // 0x2C
		::System::Single minWidth; // 0x30
		::System::Single preferredHeight; // 0x34
		::System::Int32 layoutPriority; // 0x38

		::System::Void _ctor(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT__CTOR_OFFSET))(this, layoutElement);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromLayoutElement(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_REINITFROMLAYOUTELEMENT_OFFSET))(this, layoutElement);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
