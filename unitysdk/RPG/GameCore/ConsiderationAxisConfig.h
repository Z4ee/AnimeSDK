#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG_METHOD_2_6742F877DA5782D6_OFFSET UNITYSDK_OFFSET(0x188356C0)
#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG_METHOD_2_D2527DCD7B60DF3B_OFFSET UNITYSDK_OFFSET(0x18834FA0)
#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18828910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsiderationAxisConfig_TypeDefinitionIndex = 14668;

	class ConsiderationAxisConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D2527DCD7B60DF3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsiderationAxisConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsiderationAxisConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG_METHOD_2_D2527DCD7B60DF3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6742F877DA5782D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsiderationAxisConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsiderationAxisConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG_METHOD_2_6742F877DA5782D6_OFFSET))(a1, a2);
		}
	};
}
