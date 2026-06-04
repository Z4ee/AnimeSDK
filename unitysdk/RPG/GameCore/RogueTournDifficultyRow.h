#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC6190)
#define RPG_GAMECORE_ROGUETOURNDIFFICULTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC62D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDifficultyRow_TypeDefinitionIndex = 14221;

	class RogueTournDifficultyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelList; // 0x10
		::System::UInt32 DifficultyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIFFICULTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournDifficultyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournDifficultyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIFFICULTYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
