#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTOBJECTUICACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B442B50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNodeUICache_HEU_InputObjectUICache_TypeDefinitionIndex = 39113;

	class HEU_InputNodeUICache_HEU_InputObjectUICache : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE_HEU_INPUTOBJECTUICACHE__CTOR_OFFSET))(this);
		}
	};
}
