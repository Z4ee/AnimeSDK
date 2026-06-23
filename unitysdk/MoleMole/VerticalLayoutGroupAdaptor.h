#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class UIVerticalLayoutGroup; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }

#define MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0xF9675D0)
#define MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0xF9675F0)
#define MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0xF967790)
#define MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF967650)

namespace MoleMole
{
	inline static constexpr unsigned int VerticalLayoutGroupAdaptor_TypeDefinitionIndex = 84114;

	class VerticalLayoutGroupAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::UIVerticalLayoutGroup* verticalLayoutGroup; // 0x10

		::System::Void _ctor(::UnityEngine::UI::VerticalLayoutGroup* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this, layoutElement);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::VerticalLayoutGroup* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VerticalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_VERTICALLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET))(this, layoutElement);
		}
	};
}
