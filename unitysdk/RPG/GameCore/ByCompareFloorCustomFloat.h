#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_22D3954C35A47829_OFFSET UNITYSDK_OFFSET(0x19512210)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2CA4D93D0E56D12E_OFFSET UNITYSDK_OFFSET(0x19511F80)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_6F059005F6B0F8D8_OFFSET UNITYSDK_OFFSET(0x19512190)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_DF71023972817F51_OFFSET UNITYSDK_OFFSET(0x19511EA0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19511F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomFloat_TypeDefinitionIndex = 19549;

	class ByCompareFloorCustomFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF71023972817F51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_DF71023972817F51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2CA4D93D0E56D12E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2CA4D93D0E56D12E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F059005F6B0F8D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_6F059005F6B0F8D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22D3954C35A47829(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_22D3954C35A47829_OFFSET))(a1, a2);
		}
	};
}
