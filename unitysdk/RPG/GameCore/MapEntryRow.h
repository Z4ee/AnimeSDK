#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapEntryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPENTRYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDF2D0)
#define RPG_GAMECORE_MAPENTRYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCE09E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryRow_TypeDefinitionIndex = 13534;

	class MapEntryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishMainMissionList; // 0x10
		::Il2CppArray<::System::UInt32>* BeginMainMissionList; // 0x18
		::Il2CppArray<::System::UInt32>* FinishSubMissionList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 FloorID; // 0x2C
		::System::UInt32 StartAnchorID; // 0x30
		::System::UInt32 StartGroupID; // 0x34
		::System::UInt32 PlaneID; // 0x38
		::RPG::GameCore::MapEntryType EntranceType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapEntryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapEntryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPENTRYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
