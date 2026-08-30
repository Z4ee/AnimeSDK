#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93A520)
#define RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93A750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicDifficultyCompRow_TypeDefinitionIndex = 14701;

	class RogueMagicDifficultyCompRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID DifficultyDesc; // 0x18
		::System::UInt32 UnlockID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::UInt32 DifficultyCompID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicDifficultyCompRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicDifficultyCompRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICDIFFICULTYCOMPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
