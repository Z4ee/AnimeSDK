#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomVisibilityConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_4_6825F38EC1C8DBF1_OFFSET UNITYSDK_OFFSET(0x1D6B7700)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_4_7510DA44485B8971_OFFSET UNITYSDK_OFFSET(0x1D6B7660)
#define RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B76C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCustomVisibilityConfig_TypeDefinitionIndex = 18609;

	class FiveDimCustomVisibilityConfig : public ::RPG::GameCore::LittleGameCustomVisibilityConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7510DA44485B8971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_4_7510DA44485B8971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6825F38EC1C8DBF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCustomVisibilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMVISIBILITYCONFIG_METHOD_4_6825F38EC1C8DBF1_OFFSET))(a1, a2);
		}
	};
}
