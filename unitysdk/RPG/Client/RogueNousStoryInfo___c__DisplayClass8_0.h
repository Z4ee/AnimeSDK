#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueNousMainMissionDataItem; }
namespace RPG::Client { class RogueNousStoryInfo; }

#define RPG_CLIENT_ROGUENOUSSTORYINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC7DB120)
#define RPG_CLIENT_ROGUENOUSSTORYINFO___C__DISPLAYCLASS8_0__GETMAINSTORYBYLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xC7DB860)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousStoryInfo___c__DisplayClass8_0_TypeDefinitionIndex = 63120;

	class RogueNousStoryInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueNousStoryInfo* __4__this; // 0x10
		::System::UInt32 layerValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMainStoryByLayer_b__0(::RPG::Client::RogueNousMainMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO___C__DISPLAYCLASS8_0__GETMAINSTORYBYLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
