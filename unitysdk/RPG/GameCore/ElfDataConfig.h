#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFDATACONFIG_METHOD_3_937B6BCD668E260A_OFFSET UNITYSDK_OFFSET(0x1889AEA0)
#define RPG_GAMECORE_ELFDATACONFIG_METHOD_3_B5D8A73788BD8BF1_OFFSET UNITYSDK_OFFSET(0x1889AD80)
#define RPG_GAMECORE_ELFDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDataConfig_TypeDefinitionIndex = 17548;

	class ElfDataConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5D8A73788BD8BF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG_METHOD_3_B5D8A73788BD8BF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_937B6BCD668E260A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDataConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDATACONFIG_METHOD_3_937B6BCD668E260A_OFFSET))(a1, a2);
		}
	};
}
