#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_617FEEEDED33F674_OFFSET UNITYSDK_OFFSET(0x194EFAC0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_90CDE5DDD73740B9_OFFSET UNITYSDK_OFFSET(0x194EFD30)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_96462FB8E7D3EE3A_OFFSET UNITYSDK_OFFSET(0x194EFC90)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_EB72CF09F9EC135B_OFFSET UNITYSDK_OFFSET(0x194EF9A0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x194EFA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAdvCharacterLogicState_TypeDefinitionIndex = 19058;

	class ByAdvCharacterLogicState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AdventureAnimStateType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB72CF09F9EC135B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_EB72CF09F9EC135B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_617FEEEDED33F674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_617FEEEDED33F674_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96462FB8E7D3EE3A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_96462FB8E7D3EE3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90CDE5DDD73740B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_90CDE5DDD73740B9_OFFSET))(a1, a2);
		}
	};
}
