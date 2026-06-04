#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_045B01F1DD41A8CE_OFFSET UNITYSDK_OFFSET(0x194F0920)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_0748633B6443EEFB_OFFSET UNITYSDK_OFFSET(0x194F09A0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_775863C1C6B28947_OFFSET UNITYSDK_OFFSET(0x194F06D0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_BCBF13F6C7A5D7D1_OFFSET UNITYSDK_OFFSET(0x194F07A0)
#define RPG_GAMECORE_BYALLOWINSTANTKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x194F0750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAllowInstantKill_TypeDefinitionIndex = 19116;

	class ByAllowInstantKill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_775863C1C6B28947(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_775863C1C6B28947_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BCBF13F6C7A5D7D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_BCBF13F6C7A5D7D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_045B01F1DD41A8CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_045B01F1DD41A8CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0748633B6443EEFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALLOWINSTANTKILL_METHOD_4_0748633B6443EEFB_OFFSET))(a1, a2);
		}
	};
}
