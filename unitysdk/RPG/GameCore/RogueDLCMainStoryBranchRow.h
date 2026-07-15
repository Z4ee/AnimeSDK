#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4BF660)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BF7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryBranchRow_TypeDefinitionIndex = 14208;

	class RogueDLCMainStoryBranchRow : public ::System::Object
	{
	public:
		::System::UInt32 MainStoryBranchID; // 0x10
		::System::UInt32 AeonID; // 0x14
		::System::UInt32 RogueNPCID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCMainStoryBranchRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMainStoryBranchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYBRANCHROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
