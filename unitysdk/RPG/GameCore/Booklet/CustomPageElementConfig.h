#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_METHOD_3_5916A55B97407DD1_OFFSET UNITYSDK_OFFSET(0x194E2AD0)
#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_METHOD_3_DA5E9554984A2DB1_OFFSET UNITYSDK_OFFSET(0x194E2A70)
#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194E2AC0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int CustomPageElementConfig_TypeDefinitionIndex = 23605;

	class CustomPageElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA5E9554984A2DB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::CustomPageElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::CustomPageElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_METHOD_3_DA5E9554984A2DB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5916A55B97407DD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::CustomPageElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::CustomPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_METHOD_3_5916A55B97407DD1_OFFSET))(a1, a2);
		}
	};
}
