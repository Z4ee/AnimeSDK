#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_DC227F05CDD11C50_OFFSET UNITYSDK_OFFSET(0x178E6970)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET UNITYSDK_OFFSET(0x178E5A40)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET UNITYSDK_OFFSET(0x178E59F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateC_TypeDefinitionIndex = 21593;

	class UniversalHotFixPredicateC : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DC227F05CDD11C50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_DC227F05CDD11C50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EFCB24E4A3C9E61B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_METHOD_5_EFCB24E4A3C9E61B_OFFSET))(a1, a2);
		}
	};
}
