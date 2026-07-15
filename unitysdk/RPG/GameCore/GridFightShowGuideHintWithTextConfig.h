#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1551FC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideHintWithTextConfig_TypeDefinitionIndex = 51118;

	class GridFightShowGuideHintWithTextConfig : public ::System::Object
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::System::Boolean IsEnd; // 0x14
		::System::Boolean IsBegin; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
