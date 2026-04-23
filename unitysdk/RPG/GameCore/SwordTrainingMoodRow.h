#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingMoodState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC3CB0)
#define RPG_GAMECORE_SWORDTRAININGMOODROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC4020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingMoodRow_TypeDefinitionIndex = 11775;

	class SwordTrainingMoodRow : public ::System::Object
	{
	public:
		::System::String* MoodIcon; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::RPG::Client::TextID EffectDesc; // 0x20
		::RPG::Client::TextID EffectNumDesc; // 0x30
		::System::UInt32 MoodLevel; // 0x40
		::RPG::GameCore::SwordTrainingMoodState MoodStatus; // 0x44
		::System::UInt32 MaximumValue; // 0x48
		::System::UInt32 MinimumValue; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingMoodRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingMoodRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
