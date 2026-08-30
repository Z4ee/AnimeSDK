#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65D60)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItem_TypeDefinitionIndex = 48206;

	class IRIMeshClusterItem : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET))(this);
		}
	};
}
