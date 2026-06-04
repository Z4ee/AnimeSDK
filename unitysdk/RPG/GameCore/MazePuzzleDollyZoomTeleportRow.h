#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19904860)
#define RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19904C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleDollyZoomTeleportRow_TypeDefinitionIndex = 13415;

	class MazePuzzleDollyZoomTeleportRow : public ::System::Object
	{
	public:
		::System::String* PuzzlePrefab; // 0x10
		::System::UInt32 OverrideTargetPosA; // 0x18
		::System::UInt32 InstanceIDB; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 OverrideTargetPosB; // 0x28
		::System::UInt32 OverridePosA; // 0x2C
		::System::UInt32 DefaultComplete; // 0x30
		::System::UInt32 InstanceIDA; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Single OverrideInitFOV; // 0x3C
		::System::UInt32 OverridePosB; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleDollyZoomTeleportRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEDOLLYZOOMTELEPORTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
