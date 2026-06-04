#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_0E42A601CEB56B2B_OFFSET UNITYSDK_OFFSET(0x1976B5B0)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_F149CA3D1F4E85C2_OFFSET UNITYSDK_OFFSET(0x1976B540)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976B590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRevert2DVoxelConfig_TypeDefinitionIndex = 15930;

	class FourRotateVoxelRevert2DVoxelConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRevert2DVoxel; // 0x10
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F149CA3D1F4E85C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_F149CA3D1F4E85C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E42A601CEB56B2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_0E42A601CEB56B2B_OFFSET))(a1, a2);
		}
	};
}
