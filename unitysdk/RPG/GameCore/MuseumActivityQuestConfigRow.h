#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B69580)
#define RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B69730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumActivityQuestConfigRow_TypeDefinitionIndex = 13507;

	class MuseumActivityQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* QuestIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::String* Name; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumActivityQuestConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumActivityQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
