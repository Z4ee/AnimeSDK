#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleTriggerPad.h"

#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET UNITYSDK_OFFSET(0x14F13470)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x14F134D0)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x14F13570)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x14F13520)
#define RPG_CLIENT_PROP_PADSPUZZLENORMALPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F135C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzleNormalPad_TypeDefinitionIndex = 74788;

	class PadsPuzzleNormalPad : public ::RPG::Client::Prop::PadsPuzzleTriggerPad
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLENORMALPAD_PUZZLERESET_OFFSET))(this);
		}
	};
}
