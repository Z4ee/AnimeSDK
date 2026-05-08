#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivitBGAnimationSequence; }

#define MOLEMOLE_ACTIVITYANIMSETSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xFEFA8E0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityAnimSetSetting_TypeDefinitionIndex = 69401;

	class ActivityAnimSetSetting : public ::System::Object
	{
	public:
		::MoleMole::ActivitBGAnimationSequence* animationSequence; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYANIMSETSETTING__CTOR_OFFSET))(this);
		}
	};
}
