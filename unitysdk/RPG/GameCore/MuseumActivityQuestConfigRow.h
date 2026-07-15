#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1D4AE0)
#define RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D4C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumActivityQuestConfigRow_TypeDefinitionIndex = 13726;

	class MuseumActivityQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* QuestIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* QuestList; // 0x20
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumActivityQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumActivityQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
