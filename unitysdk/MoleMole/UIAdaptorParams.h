#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class UIAdataporRectTransform; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIADAPTORPARAMS_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x192EA390)
#define MOLEMOLE_UIADAPTORPARAMS_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x192EA3B0)
#define MOLEMOLE_UIADAPTORPARAMS_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x192EA4A0)
#define MOLEMOLE_UIADAPTORPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x192EA410)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptorParams_TypeDefinitionIndex = 47052;

	class UIAdaptorParams : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::UIAdataporRectTransform* adaptorRectTransform; // 0x10
		::System::Boolean Inactive; // 0x18
		::System::Boolean CloseActiveControl; // 0x19

		::System::Void _ctor(::UnityEngine::RectTransform* rectTransform, ::System::Boolean inactive, ::System::Boolean closeActiveControl)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS__CTOR_OFFSET))(this, rectTransform, inactive, closeActiveControl);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::RectTransform* rectTransform, ::System::Boolean inactive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_UPDATEPARAMS_OFFSET))(this, rectTransform, inactive);
		}
	};
}
