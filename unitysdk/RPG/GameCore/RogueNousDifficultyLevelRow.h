#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueNousDifficultyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA21D00)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA22460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyLevelRow_TypeDefinitionIndex = 14930;

	class RogueNousDifficultyLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 Tag; // 0x18
		::System::UInt32 DifficultyID; // 0x1C
		::RPG::GameCore::RogueNousDifficultyType DifficultyType; // 0x20
		::System::UInt32 Sort; // 0x24
		::RPG::Client::TextID DifficultyDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousDifficultyLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDifficultyLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
