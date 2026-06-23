#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPITEMSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1514AC70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMiniMapItemsContainer_TypeDefinitionIndex = 47280;

	class MonoMiniMapItemsContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPITEMSCONTAINER__CTOR_OFFSET))(this);
		}
	};
}
