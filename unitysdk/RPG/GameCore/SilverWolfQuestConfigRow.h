#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E6C180)
#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6C370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfQuestConfigRow_TypeDefinitionIndex = 11679;

	class SilverWolfQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 HardLevel; // 0x20
		::System::UInt32 RaidID; // 0x24
		::System::UInt32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SilverWolfQuestConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
