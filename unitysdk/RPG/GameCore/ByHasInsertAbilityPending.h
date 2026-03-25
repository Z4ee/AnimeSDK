#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_606916E40CB3357A_OFFSET UNITYSDK_OFFSET(0x17023C00)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9CEB163A7F796DA0_OFFSET UNITYSDK_OFFSET(0x17023CD0)
#define RPG_GAMECORE_BYHASINSERTABILITYPENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x17023C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertAbilityPending_TypeDefinitionIndex = 21763;

	class ByHasInsertAbilityPending : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_606916E40CB3357A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityPending*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityPending*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_606916E40CB3357A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CEB163A7F796DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTABILITYPENDING_METHOD_4_9CEB163A7F796DA0_OFFSET))(a1, a2);
		}
	};
}
