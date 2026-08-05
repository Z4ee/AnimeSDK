#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define MOLEMOLE_EMPTYLAYOUTGROUP_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x1B82AFA0)
#define MOLEMOLE_EMPTYLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B82AF20)
#define MOLEMOLE_EMPTYLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B82AF60)
#define MOLEMOLE_EMPTYLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82AFF0)

namespace MoleMole
{
	inline static constexpr unsigned int EmptyLayoutGroup_TypeDefinitionIndex = 68038;

	class EmptyLayoutGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetColRow()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EMPTYLAYOUTGROUP_GETCOLROW_OFFSET))(this);
		}
	};
}
