#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_METHOD_2_52D0F5AF2E0E7E89_OFFSET UNITYSDK_OFFSET(0x1B97AEC0)
#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRevertConfig_TypeDefinitionIndex = 16086;

	class FourRotateVoxelRevertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RevertAll2DDuration; // 0x10
		::System::Single RevertSingle2DDuration; // 0x14
		::System::Single RevertSingle2DRotateConst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_52D0F5AF2E0E7E89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_METHOD_2_52D0F5AF2E0E7E89_OFFSET))(a1, a2);
		}
	};
}
