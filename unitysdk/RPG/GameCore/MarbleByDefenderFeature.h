#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_2460F7B9D74CDE8A_OFFSET UNITYSDK_OFFSET(0x18A98C90)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_B2EEA8F4C79316CF_OFFSET UNITYSDK_OFFSET(0x18A98BB0)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A98C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFeature_TypeDefinitionIndex = 15973;

	class MarbleByDefenderFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2EEA8F4C79316CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_B2EEA8F4C79316CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2460F7B9D74CDE8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_2460F7B9D74CDE8A_OFFSET))(a1, a2);
		}
	};
}
