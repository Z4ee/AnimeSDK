#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_315FEC21E4E22B4C_OFFSET UNITYSDK_OFFSET(0x1C321780)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_46A5CF1A013E0542_OFFSET UNITYSDK_OFFSET(0x1C3219E0)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_CFC578177C10651D_OFFSET UNITYSDK_OFFSET(0x1C321740)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_D70F30CBEF4A8E24_OFFSET UNITYSDK_OFFSET(0x1C3219B0)
#define RPG_GAMECORE_BYCOMPAREHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C321770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHP_TypeDefinitionIndex = 22735;

	class ByCompareHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFC578177C10651D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_CFC578177C10651D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_315FEC21E4E22B4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_315FEC21E4E22B4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D70F30CBEF4A8E24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_D70F30CBEF4A8E24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46A5CF1A013E0542(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_46A5CF1A013E0542_OFFSET))(a1, a2);
		}
	};
}
