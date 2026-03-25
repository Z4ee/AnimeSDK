#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17098060)
#define RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170982F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraPresetRow_TypeDefinitionIndex = 10417;

	class ChimeraDuelChimeraPresetRow : public ::System::Object
	{
	public:
		::System::Int32 DeltaAttack; // 0x10
		::System::UInt32 ExpGained; // 0x14
		::System::UInt32 SpecialParam; // 0x18
		::System::UInt32 EquipmentID; // 0x1C
		::System::UInt32 ChimeraPresetID; // 0x20
		::System::Int32 DeltaHP; // 0x24
		::System::UInt32 ChimeraID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAPRESETROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
