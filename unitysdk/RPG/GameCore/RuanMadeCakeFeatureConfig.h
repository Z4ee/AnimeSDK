#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_METHOD_2_2414FB732CD7BF9D_1_OFFSET UNITYSDK_OFFSET(0x18DDCBE0)
#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_METHOD_2_2414FB732CD7BF9D_OFFSET UNITYSDK_OFFSET(0x18DDBF10)
#define RPG_GAMECORE_RUANMADECAKEFEATURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDCC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeatureConfig_TypeDefinitionIndex = 16571;

	class RuanMadeCakeFeatureConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SpaceZooChannelType ChannelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2414FB732CD7BF9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeatureConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeatureConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_METHOD_2_2414FB732CD7BF9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2414FB732CD7BF9D_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeatureConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeatureConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURECONFIG_METHOD_2_2414FB732CD7BF9D_1_OFFSET))(a1, a2);
		}
	};
}
