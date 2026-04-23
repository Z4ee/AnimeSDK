#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECTTIER_METHOD_2_413F3CF43D5EB852_OFFSET UNITYSDK_OFFSET(0x187E1F40)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECTTIER__CTOR_OFFSET UNITYSDK_OFFSET(0x187E20C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffectTier_TypeDefinitionIndex = 14868;

	class ChenLingBattleEffectTier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TierLevel; // 0x10
		::System::String* EffectPath; // 0x18
		::RPG::MVector3 Scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECTTIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_413F3CF43D5EB852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffectTier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffectTier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECTTIER_METHOD_2_413F3CF43D5EB852_OFFSET))(a1, a2);
		}
	};
}
