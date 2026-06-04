#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagQueryType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_110930F991D36156_OFFSET UNITYSDK_OFFSET(0x19AA2ED0)
#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_4576181A1136B13A_OFFSET UNITYSDK_OFFSET(0x19AA2E00)
#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_C194799AACF04E80_OFFSET UNITYSDK_OFFSET(0x19AA3170)
#define RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_DEF5E2323DB2011B_OFFSET UNITYSDK_OFFSET(0x19AA30F0)
#define RPG_GAMECORE_QUERYHOYOTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA2E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QueryHoyoTag_TypeDefinitionIndex = 19601;

	class QueryHoyoTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::HoyoTagQueryType QueryType; // 0x28
		::Il2CppArray<::System::String*>* QuertInput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4576181A1136B13A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_4576181A1136B13A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_110930F991D36156(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_110930F991D36156_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DEF5E2323DB2011B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_DEF5E2323DB2011B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C194799AACF04E80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUERYHOYOTAG_METHOD_4_C194799AACF04E80_OFFSET))(a1, a2);
		}
	};
}
