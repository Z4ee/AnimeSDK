#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_METHOD_3_0B7BCED490A62815_OFFSET UNITYSDK_OFFSET(0x17269240)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_METHOD_3_8875B986F7B4253C_OFFSET UNITYSDK_OFFSET(0x1726BFC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172691F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetForgeAwardResultConfig_TypeDefinitionIndex = 17848;

	class GridFightModifierSetForgeAwardResultConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8875B986F7B4253C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_METHOD_3_8875B986F7B4253C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B7BCED490A62815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetForgeAwardResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETFORGEAWARDRESULTCONFIG_METHOD_3_0B7BCED490A62815_OFFSET))(a1, a2);
		}
	};
}
