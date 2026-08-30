#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2332ED9C7ED0E751_OFFSET UNITYSDK_OFFSET(0x1CEC3610)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2CA4D93D0E56D12E_OFFSET UNITYSDK_OFFSET(0x1CEC3400)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_8ED50045A10F8D3B_OFFSET UNITYSDK_OFFSET(0x1CEC33B0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_C6B9BD0056C0141E_OFFSET UNITYSDK_OFFSET(0x1CEC3650)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomFloat_TypeDefinitionIndex = 20454;

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

		static ::System::Void Method_4_8ED50045A10F8D3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_8ED50045A10F8D3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2CA4D93D0E56D12E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2CA4D93D0E56D12E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2332ED9C7ED0E751(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_2332ED9C7ED0E751_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6B9BD0056C0141E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOAT_METHOD_4_C6B9BD0056C0141E_OFFSET))(a1, a2);
		}
	};
}
