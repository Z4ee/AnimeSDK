#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET UNITYSDK_OFFSET(0x18721280)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6E02F0B058B0306A_OFFSET UNITYSDK_OFFSET(0x187211B0)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18721230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckBloodLinkDead_TypeDefinitionIndex = 21958;

	class ByCheckBloodLinkDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6E02F0B058B0306A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6E02F0B058B0306A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63C4D12E597B5410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET))(a1, a2);
		}
	};
}
