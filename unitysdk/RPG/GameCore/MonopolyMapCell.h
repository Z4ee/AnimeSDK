#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyCellDirection.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyMapBarrierLayer; }
namespace RPG::GameCore { class MonopolyMapCellUnit; }
namespace RPG::GameCore { class MonopolyMapGroundLayer; }

#define RPG_GAMECORE_MONOPOLYMAPCELL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19961EB0)
#define RPG_GAMECORE_MONOPOLYMAPCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x199622B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCell_TypeDefinitionIndex = 15430;

	class MonopolyMapCell : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CellID; // 0x10
		::RPG::GameCore::MonopolyMapCellType CellType; // 0x14
		::Il2CppArray<::System::UInt32>* NextCellIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::MonopolyMapCellUnit*>* NextCellUnitList; // 0x20
		::Il2CppArray<::System::Single>* NextCellRotateAngle; // 0x28
		::Il2CppArray<::RPG::GameCore::MonopolyCellDirection>* NextCellDirection; // 0x30
		::RPG::GameCore::MonopolyMapGroundLayer* GroundLayer; // 0x38
		::RPG::GameCore::MonopolyMapBarrierLayer* BarrierLayer; // 0x40
		::RPG::MVector3 OffsetPosition; // 0x48
		::RPG::MVector3 Rotation; // 0x54
		::RPG::MVector2 CellSize; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELL_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
