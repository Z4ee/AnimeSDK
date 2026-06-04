#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleResource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_METHOD_3_0FF52939EB6512B8_OFFSET UNITYSDK_OFFSET(0x196235C0)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_METHOD_3_CAE4C9D9903B1652_OFFSET UNITYSDK_OFFSET(0x19623560)
#define RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x196235B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleResource_Shield_TypeDefinitionIndex = 15006;

	class ChenLingBattleResource_Shield : public ::RPG::GameCore::BaseChenLingBattleResource
	{
	public:
		::RPG::GameCore::ChenLingBattleEffectConfig* EffectConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CAE4C9D9903B1652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_Shield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_Shield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_METHOD_3_CAE4C9D9903B1652_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FF52939EB6512B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleResource_Shield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleResource_Shield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLERESOURCE_SHIELD_METHOD_3_0FF52939EB6512B8_OFFSET))(a1, a2);
		}
	};
}
