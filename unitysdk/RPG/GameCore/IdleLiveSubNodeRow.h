#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESUBNODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A4650)
#define RPG_GAMECORE_IDLELIVESUBNODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A4800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSubNodeRow_TypeDefinitionIndex = 11676;

	class IdleLiveSubNodeRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 EquipOrbDrop; // 0x14
		::System::UInt32 SubNodeID; // 0x18
		::System::UInt32 StageID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUBNODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSubNodeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSubNodeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUBNODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
