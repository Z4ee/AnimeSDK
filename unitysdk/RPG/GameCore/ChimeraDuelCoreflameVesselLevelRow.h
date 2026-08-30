#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E330740)
#define RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E330890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCoreflameVesselLevelRow_TypeDefinitionIndex = 11101;

	class ChimeraDuelCoreflameVesselLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::UInt32 ChimeraID; // 0x18
		::System::UInt32 Level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
