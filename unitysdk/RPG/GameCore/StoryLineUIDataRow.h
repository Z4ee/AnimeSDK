#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYLINEUIDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D572770)
#define RPG_GAMECORE_STORYLINEUIDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D573340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineUIDataRow_TypeDefinitionIndex = 15031;

	class StoryLineUIDataRow : public ::System::Object
	{
	public:
		::System::String* MediumImgPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* Color; // 0x20
		::System::String* FigurePath; // 0x28
		::System::String* ChronicleIconPath; // 0x30
		::System::String* LargeImgPath; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 StoryLineID; // 0x50
		::RPG::GameCore::GenderType Gender; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineUIDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineUIDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
