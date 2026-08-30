#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_278B2757D7F93298_OFFSET UNITYSDK_OFFSET(0x1CF0B740)
#define RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_4D8316750F80A731_OFFSET UNITYSDK_OFFSET(0x1CF0B9B0)
#define RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_BAAC6009003B5487_OFFSET UNITYSDK_OFFSET(0x1CF0B9F0)
#define RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_EDF4DBB517773015_OFFSET UNITYSDK_OFFSET(0x1CF0B790)
#define RPG_GAMECORE_BYCOMPAREVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0B780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareValue_TypeDefinitionIndex = 23528;

	class ByCompareValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value1; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Value2; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Boolean ExactlyEqual; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_278B2757D7F93298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_278B2757D7F93298_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDF4DBB517773015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_EDF4DBB517773015_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D8316750F80A731(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_4D8316750F80A731_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAAC6009003B5487(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_METHOD_4_BAAC6009003B5487_OFFSET))(a1, a2);
		}
	};
}
