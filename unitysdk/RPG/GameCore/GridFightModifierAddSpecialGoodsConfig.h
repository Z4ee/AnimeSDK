#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG_METHOD_3_CD5DC0FBE7B6B89C_OFFSET UNITYSDK_OFFSET(0x1D1583E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG_METHOD_3_D98A1EF08E1F07D8_OFFSET UNITYSDK_OFFSET(0x1D158430)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddSpecialGoodsConfig_TypeDefinitionIndex = 19180;

	class GridFightModifierAddSpecialGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD5DC0FBE7B6B89C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSpecialGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSpecialGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG_METHOD_3_CD5DC0FBE7B6B89C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D98A1EF08E1F07D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSpecialGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSpecialGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSPECIALGOODSCONFIG_METHOD_3_D98A1EF08E1F07D8_OFFSET))(a1, a2);
		}
	};
}
