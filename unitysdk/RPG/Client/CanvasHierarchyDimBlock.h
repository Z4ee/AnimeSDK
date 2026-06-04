#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_CANVASHIERARCHYDIMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BC830)

namespace RPG::Client
{
	inline static constexpr unsigned int CanvasHierarchyDimBlock_TypeDefinitionIndex = 64473;

	class CanvasHierarchyDimBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CANVASHIERARCHYDIMBLOCK__CTOR_OFFSET))(this);
		}
	};
}
