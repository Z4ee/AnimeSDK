#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

namespace MoleMole { class UIGridLayoutGroup; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1417E920)
#define MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1417E940)
#define MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x1417EA10)
#define MOLEMOLE_GRIDLAYOUTGROUPADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1417E9A0)

namespace MoleMole
{
	inline static constexpr unsigned int GridLayoutGroupAdaptor_TypeDefinitionIndex = 43066;

	class GridLayoutGroupAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::MoleMole::UIGridLayoutGroup* AdaptorGridLayoutGroup; // 0x10

		::System::Void _ctor(::UnityEngine::UI::GridLayoutGroup* gridLayoutGroup)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRIDLAYOUTGROUPADAPTOR__CTOR_OFFSET))(this, gridLayoutGroup);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::GridLayoutGroup* gridLayoutGroup)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::GridLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRIDLAYOUTGROUPADAPTOR_UPDATEPARAMS_OFFSET))(this, gridLayoutGroup);
		}
	};
}
