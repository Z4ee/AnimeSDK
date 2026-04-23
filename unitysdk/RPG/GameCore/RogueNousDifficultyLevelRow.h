#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueNousDifficultyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D4EC00)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4F340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyLevelRow_TypeDefinitionIndex = 14136;

	class RogueNousDifficultyLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 Sort; // 0x18
		::System::UInt32 DifficultyID; // 0x1C
		::RPG::Client::TextID DifficultyDesc; // 0x20
		::RPG::GameCore::RogueNousDifficultyType DifficultyType; // 0x30
		::System::UInt32 Tag; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDifficultyLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDifficultyLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
