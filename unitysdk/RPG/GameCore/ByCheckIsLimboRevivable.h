#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_5DE0B9709C7EA61F_OFFSET UNITYSDK_OFFSET(0x18722AD0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_DB97F421CBDA4575_OFFSET UNITYSDK_OFFSET(0x18722BA0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18722B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckIsLimboRevivable_TypeDefinitionIndex = 21959;

	class ByCheckIsLimboRevivable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5DE0B9709C7EA61F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_5DE0B9709C7EA61F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB97F421CBDA4575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_DB97F421CBDA4575_OFFSET))(a1, a2);
		}
	};
}
