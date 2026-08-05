#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class MonoUILayoutElement; }
namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_LAYOUTELEMENTADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19BF6D20)
#define MOLEMOLE_LAYOUTELEMENTADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19BF6D40)
#define MOLEMOLE_LAYOUTELEMENTADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x19BF6DF0)
#define MOLEMOLE_LAYOUTELEMENTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6DA0)

namespace MoleMole
{
	inline static constexpr unsigned int LayoutElementAdaptor_TypeDefinitionIndex = 89061;

	class LayoutElementAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::MonoUILayoutElement* AdaptorLayoutElement; // 0x10

		::System::Void _ctor(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTELEMENTADAPTOR__CTOR_OFFSET))(this, layoutElement);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTELEMENTADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTELEMENTADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAYOUTELEMENTADAPTOR_UPDATEPARAMS_OFFSET))(this, layoutElement);
		}
	};
}
