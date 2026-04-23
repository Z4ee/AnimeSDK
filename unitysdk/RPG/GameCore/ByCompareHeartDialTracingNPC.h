#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_1EFB68D2C6838912_OFFSET UNITYSDK_OFFSET(0x1872FF70)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET UNITYSDK_OFFSET(0x18730040)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1872FFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialTracingNPC_TypeDefinitionIndex = 20749;

	class ByCompareHeartDialTracingNPC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1EFB68D2C6838912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_1EFB68D2C6838912_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0510934E8C4FBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET))(a1, a2);
		}
	};
}
