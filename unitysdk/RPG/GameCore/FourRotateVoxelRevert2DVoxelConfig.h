#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_600A21AF6BD51F0D_OFFSET UNITYSDK_OFFSET(0x1D1178C0)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_632E16632C611DD8_OFFSET UNITYSDK_OFFSET(0x1D117900)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1178F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRevert2DVoxelConfig_TypeDefinitionIndex = 16585;

	class FourRotateVoxelRevert2DVoxelConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRevert2DVoxel; // 0x10
		::System::Boolean IsOnlyRotate; // 0x11
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_600A21AF6BD51F0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_600A21AF6BD51F0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_632E16632C611DD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_METHOD_3_632E16632C611DD8_OFFSET))(a1, a2);
		}
	};
}
