#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_4228814965FA9B91_OFFSET UNITYSDK_OFFSET(0x19CE7F40)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_A388CBC2080234EF_OFFSET UNITYSDK_OFFSET(0x19CE7F10)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_D3508E30CFCFD6C2_OFFSET UNITYSDK_OFFSET(0x19CE7C30)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_DB9DA606FA821004_OFFSET UNITYSDK_OFFSET(0x19CE7BF0)
#define RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE7C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGridFightProperty_TypeDefinitionIndex = 21716;

	class ByCompareGridFightProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::GridFightPropertyType PropertyType; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean BoolParam; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB9DA606FA821004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGridFightProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGridFightProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_DB9DA606FA821004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3508E30CFCFD6C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_D3508E30CFCFD6C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A388CBC2080234EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_A388CBC2080234EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4228814965FA9B91(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRIDFIGHTPROPERTY_METHOD_4_4228814965FA9B91_OFFSET))(a1, a2);
		}
	};
}
