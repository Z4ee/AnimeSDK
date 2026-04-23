#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYTEXTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA7710)
#define RPG_GAMECORE_STORYTEXTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA7890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryTextConfigRow_TypeDefinitionIndex = 11988;

	class StoryTextConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 StoryID; // 0x10
		::RPG::Client::TextID StoryName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYTEXTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StoryTextConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryTextConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYTEXTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
