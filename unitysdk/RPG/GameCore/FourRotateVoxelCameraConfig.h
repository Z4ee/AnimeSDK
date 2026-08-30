#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_METHOD_2_78CD1F0AA49FDD0A_OFFSET UNITYSDK_OFFSET(0x1D113690)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D113770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelCameraConfig_TypeDefinitionIndex = 16562;

	class FourRotateVoxelCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimCameraLensConfig* Lens; // 0x10
		::RPG::GameCore::FiveDimCameraFollowConfig* Follow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_78CD1F0AA49FDD0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_METHOD_2_78CD1F0AA49FDD0A_OFFSET))(a1, a2);
		}
	};
}
