#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_METHOD_3_257234CAB999F717_OFFSET UNITYSDK_OFFSET(0x1C376620)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_METHOD_3_3C3CB0289058124D_OFFSET UNITYSDK_OFFSET(0x1C37DDA0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37DD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_OnHit_TypeDefinitionIndex = 15172;

	class ChenLingBattleResource_OnHit : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_257234CAB999F717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_OnHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_OnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_METHOD_3_257234CAB999F717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C3CB0289058124D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_OnHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_OnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_ONHIT_METHOD_3_3C3CB0289058124D_OFFSET))(a1, a2);
		}
	};
}
