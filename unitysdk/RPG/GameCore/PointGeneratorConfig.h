#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_POINTGENERATORCONFIG_METHOD_2_59FD0CF28B7492D4_OFFSET UNITYSDK_OFFSET(0x1D7B4310)
#define RPG_GAMECORE_POINTGENERATORCONFIG_METHOD_2_70F563C723732728_OFFSET UNITYSDK_OFFSET(0x1D7B4580)
#define RPG_GAMECORE_POINTGENERATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B4570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorConfig_TypeDefinitionIndex = 15452;

	class PointGeneratorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_59FD0CF28B7492D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG_METHOD_2_59FD0CF28B7492D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_70F563C723732728(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG_METHOD_2_70F563C723732728_OFFSET))(a1, a2);
		}
	};
}
