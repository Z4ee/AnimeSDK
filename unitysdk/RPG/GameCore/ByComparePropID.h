#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_1EC20E66F78A0D0E_OFFSET UNITYSDK_OFFSET(0x1CEF2550)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_49F96BA70984DC40_OFFSET UNITYSDK_OFFSET(0x1CEF2520)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_9991AEB26593421D_OFFSET UNITYSDK_OFFSET(0x1CEF2330)
#define RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_AD4111DD0FB5AADC_OFFSET UNITYSDK_OFFSET(0x1CEF2370)
#define RPG_GAMECORE_BYCOMPAREPROPID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropID_TypeDefinitionIndex = 21712;

	class ByComparePropID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 PropID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9991AEB26593421D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_9991AEB26593421D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD4111DD0FB5AADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_AD4111DD0FB5AADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49F96BA70984DC40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_49F96BA70984DC40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1EC20E66F78A0D0E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPID_METHOD_4_1EC20E66F78A0D0E_OFFSET))(a1, a2);
		}
	};
}
