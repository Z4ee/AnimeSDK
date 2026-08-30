#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18446CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideHintWithTextConfig_TypeDefinitionIndex = 53802;

	class GridFightShowGuideHintWithTextConfig : public ::System::Object
	{
	public:
		::System::Boolean IsBegin; // 0x10
		::System::Boolean IsEnd; // 0x11
		::System::UInt32 TalkID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDEHINTWITHTEXTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
