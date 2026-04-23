#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_GET_MUTEBUTTRIGGERBLOCKRESULT_OFFSET UNITYSDK_OFFSET(0x1884E0A0)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_METHOD_2_4EB8D065532CCC58_OFFSET UNITYSDK_OFFSET(0x1884DD70)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_METHOD_2_C5EDEED341352265_OFFSET UNITYSDK_OFFSET(0x1884E0F0)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1884E090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageBehaviorTemplate_TypeDefinitionIndex = 14811;

	class DamageBehaviorTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::System::Boolean MuteDamageBlockExcludeDot; // 0x18
		::System::Boolean TriggerBlockDamageExcludeDot; // 0x19
		::System::Boolean MuteShield; // 0x1A
		::System::Boolean MuteSplitHp; // 0x1B
		::System::Boolean OnlyIsIndirectAttack; // 0x1C
		::System::Boolean OnlyIsNotHit; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4EB8D065532CCC58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageBehaviorTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageBehaviorTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_METHOD_2_4EB8D065532CCC58_OFFSET))(a1, a2);
		}

		::System::Boolean get_MuteButTriggerBlockResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_GET_MUTEBUTTRIGGERBLOCKRESULT_OFFSET))(this);
		}

		::System::Boolean Method_2_C5EDEED341352265(::RPG::GameCore::DamageBlockType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DamageBlockType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_METHOD_2_C5EDEED341352265_OFFSET))(this, a1);
		}
	};
}
