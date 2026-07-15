#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17500060)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItem_TypeDefinitionIndex = 45982;

	class IRIMeshClusterItem : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET))(this);
		}
	};
}
