#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTASSETUICACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1CB20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNodeUICache_HEU_InputAssetUICache_TypeDefinitionIndex = 37447;

	class HEU_InputNodeUICache_HEU_InputAssetUICache : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTASSETUICACHE__CTOR_OFFSET))(this);
		}
	};
}
