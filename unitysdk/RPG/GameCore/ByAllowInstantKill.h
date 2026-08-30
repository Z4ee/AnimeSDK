#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_527F622E67A2D194_OFFSET UNITYSDK_OFFSET(0x1CE99020)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_B01CF882783D7D6B_OFFSET UNITYSDK_OFFSET(0x1CE991E0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_BCBF13F6C7A5D7D1_OFFSET UNITYSDK_OFFSET(0x1CE99060)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_E574C0D36760948D_OFFSET UNITYSDK_OFFSET(0x1CE99210)
#define RPG_GAMECORE_BYALLOWINSTANTKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE99050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAllowInstantKill_TypeDefinitionIndex = 20016;

	class ByAllowInstantKill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_527F622E67A2D194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_527F622E67A2D194_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BCBF13F6C7A5D7D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_BCBF13F6C7A5D7D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B01CF882783D7D6B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_B01CF882783D7D6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E574C0D36760948D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_E574C0D36760948D_OFFSET))(a1, a2);
		}
	};
}
