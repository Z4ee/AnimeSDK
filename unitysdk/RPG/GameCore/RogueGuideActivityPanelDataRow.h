#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFAEF60)
#define RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAF510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGuideActivityPanelDataRow_TypeDefinitionIndex = 14137;

	class RogueGuideActivityPanelDataRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityID; // 0x10
		::System::UInt32 RogueAreaID; // 0x14
		::System::UInt32 AvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGuideActivityPanelDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGuideActivityPanelDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGUIDEACTIVITYPANELDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
