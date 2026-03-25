#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175E0E90)
#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175E15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonStoryConfigRow_TypeDefinitionIndex = 13578;

	class RogueAeonStoryConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AeonStory_Name; // 0x10
		::System::UInt32 ActivityModuleID; // 0x20
		::System::UInt32 RogueAeonID; // 0x24
		::RPG::Client::TextID AeonStory; // 0x28
		::System::UInt32 AeonStoryID; // 0x38
		::System::UInt32 UnlockID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueAeonStoryConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonStoryConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
