#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPedestrianV2IntersectionInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_61348C7677D16331_OFFSET UNITYSDK_OFFSET(0x17348D40)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_CE5DD60A688C1087_OFFSET UNITYSDK_OFFSET(0x173483C0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173483B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2IntersectionMechaWarehouseInfo_TypeDefinitionIndex = 15893;

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

		static ::System::Void Method_3_61348C7677D16331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_61348C7677D16331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE5DD60A688C1087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2IntersectionMechaWarehouseInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2INTERSECTIONMECHAWAREHOUSEINFO_METHOD_3_CE5DD60A688C1087_OFFSET))(a1, a2);
		}
	};
}
