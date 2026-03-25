#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17600560)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176006D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryBranchRow_TypeDefinitionIndex = 13523;

	class RogueDLCMainStoryBranchRow : public ::System::Object
	{
	public:
		::System::UInt32 AeonID; // 0x10
		::System::UInt32 RogueNPCID; // 0x14
		::System::UInt32 MainStoryBranchID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCMainStoryBranchRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMainStoryBranchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
