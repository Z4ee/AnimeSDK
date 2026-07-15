#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_12C840EF41BBCCC5_OFFSET UNITYSDK_OFFSET(0x1B88E4D0)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_3975ADFDB634B4AC_OFFSET UNITYSDK_OFFSET(0x1B88D9E0)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_AA985068CBF1EE13_OFFSET UNITYSDK_OFFSET(0x1B88E500)
#define RPG_GAMECORE_VE_PREDICATE_METHOD_3_CB20DFA7C15E2D81_OFFSET UNITYSDK_OFFSET(0x1B88DA20)
#define RPG_GAMECORE_VE_PREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88DA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Predicate_TypeDefinitionIndex = 23188;

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

		static ::System::Void Method_3_AA985068CBF1EE13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_METHOD_3_AA985068CBF1EE13_OFFSET))(a1, a2);
		}
	};
}
