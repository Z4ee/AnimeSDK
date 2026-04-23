#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187F6F20)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187F7490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraGroupRow_TypeDefinitionIndex = 10644;

	class ChimeraDuelChimeraGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraIDList; // 0x10
		::System::UInt32 ChimeraGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
