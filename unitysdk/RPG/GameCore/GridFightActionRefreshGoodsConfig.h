#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_9307746B20685A16_OFFSET UNITYSDK_OFFSET(0x189A04D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_B5B19DD046443715_OFFSET UNITYSDK_OFFSET(0x1899FA10)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899F970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshGoodsConfig_TypeDefinitionIndex = 18343;

	class GridFightActionRefreshGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9307746B20685A16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_9307746B20685A16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B5B19DD046443715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_6_B5B19DD046443715_OFFSET))(a1, a2);
		}
	};
}
