#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_1A9620254B567FF7_OFFSET UNITYSDK_OFFSET(0x18737DE0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_C2B5ED2957453D91_OFFSET UNITYSDK_OFFSET(0x18737EB0)
#define RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x18737E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropStateNumber_TypeDefinitionIndex = 20537;

	class ByComparePropStateNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PropIDList; // 0x28
		::RPG::GameCore::PropState State; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x34
		::System::UInt32 CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1A9620254B567FF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropStateNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropStateNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_1A9620254B567FF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2B5ED2957453D91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPSTATENUMBER_METHOD_4_C2B5ED2957453D91_OFFSET))(a1, a2);
		}
	};
}
