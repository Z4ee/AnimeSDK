#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingMoodState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E157200)
#define RPG_GAMECORE_SWORDTRAININGMOODROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E157570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingMoodRow_TypeDefinitionIndex = 12361;

	class SwordTrainingMoodRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::System::String* MoodIcon; // 0x18
		::System::UInt32 MinimumValue; // 0x20
		::System::UInt32 MoodLevel; // 0x24
		::System::UInt32 MaximumValue; // 0x28
		::RPG::GameCore::SwordTrainingMoodState MoodStatus; // 0x2C
		::RPG::Client::TextID EffectDesc; // 0x30
		::RPG::Client::TextID EffectNumDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingMoodRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingMoodRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
