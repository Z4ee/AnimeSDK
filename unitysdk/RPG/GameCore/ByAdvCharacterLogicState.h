#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_3D93273F0628E22C_OFFSET UNITYSDK_OFFSET(0x1C2EEEF0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_617FEEEDED33F674_OFFSET UNITYSDK_OFFSET(0x1C2EECC0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_8BA3757B826582E1_OFFSET UNITYSDK_OFFSET(0x1C2EEE90)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_C89E1765CAC471ED_OFFSET UNITYSDK_OFFSET(0x1C2EEC20)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EEC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAdvCharacterLogicState_TypeDefinitionIndex = 19956;

	class ByAdvCharacterLogicState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AdventureAnimStateType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C89E1765CAC471ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_C89E1765CAC471ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_617FEEEDED33F674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_617FEEEDED33F674_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8BA3757B826582E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_8BA3757B826582E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3D93273F0628E22C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_METHOD_4_3D93273F0628E22C_OFFSET))(a1, a2);
		}
	};
}
