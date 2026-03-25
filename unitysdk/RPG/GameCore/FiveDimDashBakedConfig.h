#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMDASHBAKEDCONFIG_METHOD_2_EB807DFA71D3C6BB_OFFSET UNITYSDK_OFFSET(0x171EEBC0)
#define RPG_GAMECORE_FIVEDIMDASHBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171EEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDashBakedConfig_TypeDefinitionIndex = 15258;

	class FiveDimDashBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DashInitSpeed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EB807DFA71D3C6BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDashBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDashBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBAKEDCONFIG_METHOD_2_EB807DFA71D3C6BB_OFFSET))(a1, a2);
		}
	};
}
