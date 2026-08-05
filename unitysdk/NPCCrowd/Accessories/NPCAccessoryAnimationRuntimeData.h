#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10298E40)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimationRuntimeData_TypeDefinitionIndex = 52116;

	class NPCAccessoryAnimationRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 AnimationID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATIONRUNTIMEDATA__CTOR_OFFSET))(this);
		}
	};
}
