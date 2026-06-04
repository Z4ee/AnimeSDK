#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_BB6BB428FECD2D85_OFFSET UNITYSDK_OFFSET(0x19884BD0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_DA0546E2F04BDA32_OFFSET UNITYSDK_OFFSET(0x19885520)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19884BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionMechaWarehouseInfo_TypeDefinitionIndex = 16453;

	class LevelPedestrianV2IntersectionMechaWarehouseInfo : public ::RPG::GameCore::LevelPedestrianV2IntersectionInfo
	{
	public:
		::System::String* BindFloorSignName; // 0x50
		::System::String* BindFenceSignName; // 0x58
		::System::String* MechaWarehouseBlockAlias; // 0x60
		::System::String* MechaWarehousePrefabAlias; // 0x68
		::System::String* FollowAttachPointName; // 0x70
		::System::Boolean IsInbound; // 0x78
		::System::Int32 MechaWarehouseRoadIndex; // 0x7C
		::System::Int32 EmitSpeed; // 0x80
		::System::String* DynamicEmitSpeedBindFSVName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA0546E2F04BDA32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_DA0546E2F04BDA32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB6BB428FECD2D85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_BB6BB428FECD2D85_OFFSET))(a1, a2);
		}
	};
}
