#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWDATAITEM_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B694BC0)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B694C10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameScorePreviewDataItem_TypeDefinitionIndex = 67392;

	class RogueMagicGameScorePreviewDataItem : public ::System::Object
	{
	public:
		::System::UInt32 Value; // 0x10
		::System::Boolean IsReachLimit; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWDATAITEM_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
