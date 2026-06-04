#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_3B5639C642EB37EF_OFFSET UNITYSDK_OFFSET(0x19541940)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_53AB0F237CAB9586_OFFSET UNITYSDK_OFFSET(0x19541B90)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_CA48AD5BFC6BFFF9_OFFSET UNITYSDK_OFFSET(0x19541A10)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_FCF41D799417E193_OFFSET UNITYSDK_OFFSET(0x19541C10)
#define RPG_GAMECORE_BYCONTAINSREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x195419C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsRedStance_TypeDefinitionIndex = 21398;

	class ByContainsRedStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3B5639C642EB37EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_3B5639C642EB37EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA48AD5BFC6BFFF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_CA48AD5BFC6BFFF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53AB0F237CAB9586(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_53AB0F237CAB9586_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCF41D799417E193(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSREDSTANCE_METHOD_4_FCF41D799417E193_OFFSET))(a1, a2);
		}
	};
}
