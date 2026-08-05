#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class UIHorizontalLayoutGroup; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19BF6860)
#define MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x19BF6880)
#define MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x19BF6A20)
#define MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF68E0)

namespace MoleMole
{
	inline static constexpr unsigned int HorizontalLayoutGroupAdaptor_TypeDefinitionIndex = 67755;

	class HorizontalLayoutGroupAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::UIHorizontalLayoutGroup* horizontalLayoutGroup; // 0x10

		::System::Void _ctor(::UnityEngine::UI::HorizontalLayoutGroup* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this, layoutElement);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::HorizontalLayoutGroup* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET))(this, layoutElement);
		}
	};
}
