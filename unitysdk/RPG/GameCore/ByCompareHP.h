#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_315FEC21E4E22B4C_OFFSET UNITYSDK_OFFSET(0x19517400)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_701EC235070E3423_OFFSET UNITYSDK_OFFSET(0x195176B0)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_A27542BA48CC33FC_OFFSET UNITYSDK_OFFSET(0x19517630)
#define RPG_GAMECORE_BYCOMPAREHP_METHOD_4_FFA654C1BDA11D82_OFFSET UNITYSDK_OFFSET(0x19517330)
#define RPG_GAMECORE_BYCOMPAREHP__CTOR_OFFSET UNITYSDK_OFFSET(0x195173B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHP_TypeDefinitionIndex = 21740;

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

		static ::System::Void Method_4_FFA654C1BDA11D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_FFA654C1BDA11D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_315FEC21E4E22B4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_315FEC21E4E22B4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A27542BA48CC33FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_A27542BA48CC33FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_701EC235070E3423(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHP_METHOD_4_701EC235070E3423_OFFSET))(a1, a2);
		}
	};
}
