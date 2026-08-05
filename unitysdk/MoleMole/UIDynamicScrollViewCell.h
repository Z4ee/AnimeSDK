#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUITableScrollV2;

#define MOLEMOLE_UIDYNAMICSCROLLVIEWCELL_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x17D85190)
#define MOLEMOLE_UIDYNAMICSCROLLVIEWCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D85320)

namespace MoleMole
{
	inline static constexpr unsigned int UIDynamicScrollViewCell_TypeDefinitionIndex = 69313;

	class UIDynamicScrollViewCell : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDYNAMICSCROLLVIEWCELL__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDYNAMICSCROLLVIEWCELL_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}
	};
}
