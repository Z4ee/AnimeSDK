#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_METHOD_3_1BA607A2C06C7846_OFFSET UNITYSDK_OFFSET(0x1D06A380)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_METHOD_3_1F31AE816BA500E2_OFFSET UNITYSDK_OFFSET(0x1D06A3D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLuckyThiefConfig_TypeDefinitionIndex = 18621;

	class GridFightModifierLuckyThiefConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BA607A2C06C7846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLuckyThiefConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLuckyThiefConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_METHOD_3_1BA607A2C06C7846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F31AE816BA500E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLuckyThiefConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLuckyThiefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_METHOD_3_1F31AE816BA500E2_OFFSET))(a1, a2);
		}
	};
}
