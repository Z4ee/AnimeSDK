#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationGroupConfig; }

#define RPG_GAMECORE_ROTATABLEREGIONPOSE_METHOD_2_B5222EEE78360181_OFFSET UNITYSDK_OFFSET(0x18D82010)
#define RPG_GAMECORE_ROTATABLEREGIONPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D82260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotatableRegionPose_TypeDefinitionIndex = 16106;

	class RotatableRegionPose : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RotationAxis; // 0x10
		::System::Single RotationAngle; // 0x1C
		::Il2CppArray<::System::UInt32>* PosePermanentGroups; // 0x20
		::Il2CppArray<::System::UInt32>* PoseGroups; // 0x28
		::Il2CppArray<::RPG::GameCore::MapRotationGroupConfig*>* PoseGroupConfigs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5222EEE78360181(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotatableRegionPose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotatableRegionPose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE_METHOD_2_B5222EEE78360181_OFFSET))(a1, a2);
		}
	};
}
