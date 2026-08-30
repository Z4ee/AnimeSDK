#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueExhibitionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4191E0)
#define RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D419400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentExhibitionRow_TypeDefinitionIndex = 14870;

	class RogueTournContentExhibitionRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* SlotIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 ProgramGroupID; // 0x28
		::System::UInt32 ExhibitionID; // 0x2C
		::RPG::GameCore::RogueExhibitionType ExhibitionType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournContentExhibitionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentExhibitionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTEXHIBITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
