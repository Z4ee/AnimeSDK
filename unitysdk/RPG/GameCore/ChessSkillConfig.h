#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHESSSKILLCONFIG_METHOD_2_A3F0AF54CDFE7BAF_OFFSET UNITYSDK_OFFSET(0x1708DFA0)
#define RPG_GAMECORE_CHESSSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708E1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessSkillConfig_TypeDefinitionIndex = 16183;

	class ChessSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* EntryAbility; // 0x18
		::System::Boolean BindAttackSpeed; // 0x20
		::RPG::GameCore::FixPoint DefaultDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A3F0AF54CDFE7BAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSSKILLCONFIG_METHOD_2_A3F0AF54CDFE7BAF_OFFSET))(a1, a2);
		}
	};
}
