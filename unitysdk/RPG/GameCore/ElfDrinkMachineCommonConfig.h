#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_METHOD_2_E367CC55E758B12D_OFFSET UNITYSDK_OFFSET(0x1BB36200)
#define RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB36320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDrinkMachineCommonConfig_TypeDefinitionIndex = 17740;

	class ElfDrinkMachineCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxDrinkCount; // 0x10
		::System::UInt32 MakeDrinkCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E367CC55E758B12D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDrinkMachineCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDrinkMachineCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDRINKMACHINECOMMONCONFIG_METHOD_2_E367CC55E758B12D_OFFSET))(a1, a2);
		}
	};
}
