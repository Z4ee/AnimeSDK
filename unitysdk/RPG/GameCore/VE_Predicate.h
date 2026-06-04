#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_12C840EF41BBCCC5_OFFSET UNITYSDK_OFFSET(0x19E41070)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_3975ADFDB634B4AC_OFFSET UNITYSDK_OFFSET(0x19E40580)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_611D5D867604EC5C_OFFSET UNITYSDK_OFFSET(0x19E410A0)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_CB20DFA7C15E2D81_OFFSET UNITYSDK_OFFSET(0x19E405C0)
#define RPG_GAMECORE_VE_PREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E405B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Predicate_TypeDefinitionIndex = 22721;

	class VE_Predicate : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* TrueValue; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* FalseValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3975ADFDB634B4AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Predicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Predicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_3975ADFDB634B4AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB20DFA7C15E2D81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_CB20DFA7C15E2D81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C840EF41BBCCC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_12C840EF41BBCCC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_611D5D867604EC5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_611D5D867604EC5C_OFFSET))(a1, a2);
		}
	};
}
