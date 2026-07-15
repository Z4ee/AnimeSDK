#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET UNITYSDK_OFFSET(0x14F13300)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x14F13390)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x14F13410)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x14F133D0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14F13450)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleFailAnchor_TypeDefinitionIndex = 74785;

	class PadsPuzzleFailAnchor : public ::RPG::Client::Prop::PadsPuzzlePadBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET))(this);
		}
	};
}
