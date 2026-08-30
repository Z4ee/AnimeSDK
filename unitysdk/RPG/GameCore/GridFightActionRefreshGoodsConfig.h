#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_B5B19DD046443715_OFFSET UNITYSDK_OFFSET(0x1D95FA90)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_D25E25F7EA5C3CF1_OFFSET UNITYSDK_OFFSET(0x1D95FE10)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95FA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshGoodsConfig_TypeDefinitionIndex = 19077;

	class GridFightActionRefreshGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D25E25F7EA5C3CF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_D25E25F7EA5C3CF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B5B19DD046443715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_B5B19DD046443715_OFFSET))(a1, a2);
		}
	};
}
