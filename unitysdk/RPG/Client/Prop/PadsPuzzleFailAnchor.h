#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET UNITYSDK_OFFSET(0x16619800)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x16619890)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x16619910)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x166198D0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16619950)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleFailAnchor_TypeDefinitionIndex = 78270;

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
