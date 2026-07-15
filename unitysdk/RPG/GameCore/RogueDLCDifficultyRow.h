#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4BD1C0)
#define RPG_GAMECORE_ROGUEDLCDIFFICULTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCDifficultyRow_TypeDefinitionIndex = 14181;

	class RogueDLCDifficultyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DifficultyCutList; // 0x10
		::Il2CppArray<::System::UInt32>* LevelList; // 0x18
		::System::UInt32 DifficultyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDIFFICULTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCDifficultyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCDifficultyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCDIFFICULTYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
