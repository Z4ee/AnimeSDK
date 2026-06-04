#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelMinimapVolume; }

#define RPG_GAMECORE_LEVELNAVMAPAREA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987F600)
#define RPG_GAMECORE_LEVELNAVMAPAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1987FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavmapArea_TypeDefinitionIndex = 16374;

	class LevelNavmapArea : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::MinimapAreaType AreaType; // 0x14
		::RPG::MVector2 PositionInCanvas; // 0x18
		::System::Single ScaleInCanvas; // 0x20
		::System::Boolean IsHidden; // 0x24
		::RPG::GameCore::LevelMinimapVolume* MinimapVolume; // 0x28
		::System::UInt32 AnotherAreaID; // 0x30
		::System::UInt32 AnotherFloorID; // 0x34
		::System::UInt32 SortingID; // 0x38
		::Il2CppArray<::System::UInt32>* RegionIDList; // 0x40
		::Il2CppArray<::System::UInt32>* MapLayerList; // 0x48
		::System::Single SubmapUIScaleLowerRatio; // 0x50
		::System::Single SubmapUIScaleUpperRatio; // 0x54
		::RPG::MVector2 SubmapUIDefaultCenter; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavmapArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavmapArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPAREA_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
