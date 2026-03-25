#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET UNITYSDK_OFFSET(0x170273C0)
#define RPG_GAMECORE_BYHEROGENDER_METHOD_4_EBC702719B577E3E_OFFSET UNITYSDK_OFFSET(0x170272F0)
#define RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17027370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHeroGender_TypeDefinitionIndex = 22032;

	class ByHeroGender : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EBC702719B577E3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_EBC702719B577E3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9279A63839C02240(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHEROGENDER_METHOD_4_9279A63839C02240_OFFSET))(a1, a2);
		}
	};
}
