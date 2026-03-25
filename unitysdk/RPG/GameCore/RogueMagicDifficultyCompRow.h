#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17613140)
#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17613380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicDifficultyCompRow_TypeDefinitionIndex = 13597;

	class RogueMagicDifficultyCompRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 DifficultyCompID; // 0x1C
		::RPG::Client::TextID DifficultyDesc; // 0x20
		::System::UInt32 Level; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicDifficultyCompRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicDifficultyCompRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
