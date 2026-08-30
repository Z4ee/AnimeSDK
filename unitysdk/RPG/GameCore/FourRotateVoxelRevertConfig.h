#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_METHOD_2_2AA63B7BCD470CC0_OFFSET UNITYSDK_OFFSET(0x1DCB6010)
#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB8E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRevertConfig_TypeDefinitionIndex = 16564;

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

		static ::System::Void Method_2_2AA63B7BCD470CC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelRevertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelRevertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_METHOD_2_2AA63B7BCD470CC0_OFFSET))(a1, a2);
		}
	};
}
