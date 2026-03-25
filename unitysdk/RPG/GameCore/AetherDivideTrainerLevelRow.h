#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F6B1B0)
#define RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTrainerLevelRow_TypeDefinitionIndex = 10242;

	class AetherDivideTrainerLevelRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 RareMonsterNumID; // 0x38
		::System::UInt32 QuestID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideTrainerLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTrainerLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
