#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapMoveType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A4F0FA6F81B0B135_GET_CELLID_OFFSET UNITYSDK_OFFSET(0x19C80D30)
#define CLASS_1_A4F0FA6F81B0B135_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x19C80D50)
#define CLASS_1_A4F0FA6F81B0B135_GET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x19C80D70)
#define CLASS_1_A4F0FA6F81B0B135_SET_CELLID_OFFSET UNITYSDK_OFFSET(0x19C80D40)
#define CLASS_1_A4F0FA6F81B0B135_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x19C80D60)
#define CLASS_1_A4F0FA6F81B0B135_SET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x19C80D80)
#define CLASS_1_A4F0FA6F81B0B135__CTOR_OFFSET UNITYSDK_OFFSET(0x19C80D90)

inline static constexpr unsigned int Class_1_A4F0FA6F81B0B135_TypeDefinitionIndex = 40383;

class Class_1_A4F0FA6F81B0B135 : public ::System::Object
{
public:
	::System::UInt32 _CellID_k__BackingField; // 0x10
	::System::UInt32 _MapID_k__BackingField; // 0x14
	::RPG::GameCore::MonopolyMapMoveType _MoveType_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::MonopolyMapMoveType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MonopolyMapMoveType))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_CellID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_GET_CELLID_OFFSET))(this);
	}

	::System::Void set_CellID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_SET_CELLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_MapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_GET_MAPID_OFFSET))(this);
	}

	::System::Void set_MapID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_SET_MAPID_OFFSET))(this, a1);
	}

	::RPG::GameCore::MonopolyMapMoveType get_MoveType()
	{
		return ((::RPG::GameCore::MonopolyMapMoveType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_GET_MOVETYPE_OFFSET))(this);
	}

	::System::Void set_MoveType(::RPG::GameCore::MonopolyMapMoveType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyMapMoveType))((::PBYTE)hIl2Cpp + CLASS_1_A4F0FA6F81B0B135_SET_MOVETYPE_OFFSET))(this, a1);
	}
};
