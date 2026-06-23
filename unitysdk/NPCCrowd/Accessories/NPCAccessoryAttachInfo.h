#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/FTransformConfig.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYATTACHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1029B780)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAttachInfo_TypeDefinitionIndex = 59729;

	class NPCAccessoryAttachInfo : public ::System::Object
	{
	public:
		::System::Boolean bUseRootOffset; // 0x10
		::NPCCrowd::Accessories::FTransformConfig rootOffset; // 0x14
		::System::Boolean bFollowPosition; // 0x40
		::System::Boolean bFollowRotation; // 0x41
		::System::Boolean bFollowScale; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYATTACHINFO__CTOR_OFFSET))(this);
		}
	};
}
