#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFC1BD0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC2150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraGroupRow_TypeDefinitionIndex = 11125;

	class ChimeraDuelChimeraGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraIDList; // 0x10
		::System::UInt32 ChimeraGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
