#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/AnimationSelectByEnumConfig_1.h"
#include "unitysdk/MoleMole/Photo/SlotState.h"

#define MOLEMOLE_PHOTO_ANIMATIONSELECTBYSLOTSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1264F940)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationSelectBySlotStateConfig_TypeDefinitionIndex = 84636;

	class AnimationSelectBySlotStateConfig : public ::MoleMole::Photo::AnimationSelectByEnumConfig_1<::MoleMole::Photo::SlotState>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSELECTBYSLOTSTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
