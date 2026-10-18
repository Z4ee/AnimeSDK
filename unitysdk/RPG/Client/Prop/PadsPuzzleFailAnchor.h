#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzlePadBase.h"

#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_INITSTATE_OFFSET UNITYSDK_OFFSET(0xDD62A10)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xDD62AA0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDD62B20)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDD62AE0)
#define RPG_CLIENT_PROP_PADSPUZZLEFAILANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDD62B60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleFailAnchor_TypeDefinitionIndex = 78742;

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
