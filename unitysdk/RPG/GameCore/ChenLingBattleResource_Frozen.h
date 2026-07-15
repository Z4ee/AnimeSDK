#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_METHOD_3_475098BC571E2D3E_OFFSET UNITYSDK_OFFSET(0x1C37DBA0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_METHOD_3_BE6FAE311896E4EA_OFFSET UNITYSDK_OFFSET(0x1C37DC00)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_Frozen_TypeDefinitionIndex = 15171;

	class ChenLingBattleResource_Frozen : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Effects; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* MaxCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_475098BC571E2D3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_Frozen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_Frozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_METHOD_3_475098BC571E2D3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE6FAE311896E4EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_Frozen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_Frozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_FROZEN_METHOD_3_BE6FAE311896E4EA_OFFSET))(a1, a2);
		}
	};
}
