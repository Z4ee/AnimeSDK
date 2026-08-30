#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationGroupConfig; }

#define RPG_GAMECORE_ROTATABLEREGIONPOSE_METHOD_2_10BDA180E3CB90D3_OFFSET UNITYSDK_OFFSET(0x1CCD1630)
#define RPG_GAMECORE_ROTATABLEREGIONPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD1930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RotatableRegionPose_TypeDefinitionIndex = 16828;

	class RotatableRegionPose : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RotationAxis; // 0x10
		::System::Single RotationAngle; // 0x1C
		::Il2CppArray<::System::UInt32>* PosePermanentGroups; // 0x20
		::Il2CppArray<::System::UInt32>* PoseGroups; // 0x28
		::Il2CppArray<::RPG::GameCore::MapRotationGroupConfig*>* PoseGroupConfigs; // 0x30
		::System::Boolean UseCustomInitTransform; // 0x38
		::RPG::MVector3 CustomInitPosition; // 0x3C
		::RPG::MVector3 CustomInitRotation; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10BDA180E3CB90D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RotatableRegionPose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RotatableRegionPose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATABLEREGIONPOSE_METHOD_2_10BDA180E3CB90D3_OFFSET))(a1, a2);
		}
	};
}
