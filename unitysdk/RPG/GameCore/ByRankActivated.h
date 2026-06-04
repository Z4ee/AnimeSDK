#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET UNITYSDK_OFFSET(0x195D4A60)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_98636A5184255F76_OFFSET UNITYSDK_OFFSET(0x195D4990)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_A0B944D33001882D_OFFSET UNITYSDK_OFFSET(0x195D4CD0)
#define RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_DD5FD5E079FFC80E_OFFSET UNITYSDK_OFFSET(0x195D4C50)
#define RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x195D4A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivated_TypeDefinitionIndex = 21806;

	class ByRankActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash TriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_98636A5184255F76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_98636A5184255F76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36BE7F36C2957562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_36BE7F36C2957562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD5FD5E079FFC80E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_DD5FD5E079FFC80E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0B944D33001882D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATED_METHOD_4_A0B944D33001882D_OFFSET))(a1, a2);
		}
	};
}
