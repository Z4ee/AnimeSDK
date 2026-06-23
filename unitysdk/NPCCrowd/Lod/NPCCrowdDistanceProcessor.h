#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89610)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceProcessor_TypeDefinitionIndex = 46422;

	class NPCCrowdDistanceProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR__CTOR_OFFSET))(this);
		}
	};
}
