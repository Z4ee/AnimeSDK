#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_METHOD_3_6BC684C0B9337775_OFFSET UNITYSDK_OFFSET(0x1892D150)
#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_METHOD_3_AE691D0393D3BF8C_OFFSET UNITYSDK_OFFSET(0x1892D1C0)
#define RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1892D1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelChestHintConfig_TypeDefinitionIndex = 15886;

	class FourRotateVoxelChestHintConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsChestHint; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* ChestHintBindLevelVarName; // 0x18
		::System::SByte ChestHintLevelVarTargetValue; // 0x20
		::System::String* HintAttachPointName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BC684C0B9337775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelChestHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelChestHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_METHOD_3_6BC684C0B9337775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE691D0393D3BF8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelChestHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelChestHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCHESTHINTCONFIG_METHOD_3_AE691D0393D3BF8C_OFFSET))(a1, a2);
		}
	};
}
