#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_77889DDB469C151E_OFFSET UNITYSDK_OFFSET(0x18721FE0)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8D391E2E464F2820_OFFSET UNITYSDK_OFFSET(0x187220B0)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x18722060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckDarkTeamDestroy_TypeDefinitionIndex = 22409;

	class ByCheckDarkTeamDestroy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ForWaveEnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_77889DDB469C151E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_77889DDB469C151E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D391E2E464F2820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8D391E2E464F2820_OFFSET))(a1, a2);
		}
	};
}
