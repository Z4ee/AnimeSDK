#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0BEF7B0D6B938E55_OFFSET UNITYSDK_OFFSET(0x1D0C7030)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0D1C3BCFD4BF3F75_OFFSET UNITYSDK_OFFSET(0x1D0C6EB0)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_C6B5E5357FB9FF1A_OFFSET UNITYSDK_OFFSET(0x1D0C7060)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_EFD703D4B69AD242_OFFSET UNITYSDK_OFFSET(0x1D0C6E70)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDistance_TypeDefinitionIndex = 23137;

	class TargetSortByDistance : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* CenterTarget; // 0x10
		::System::Boolean HighestFirst; // 0x18
		::System::Boolean IgnoreYDistance; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFD703D4B69AD242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_EFD703D4B69AD242_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D1C3BCFD4BF3F75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0D1C3BCFD4BF3F75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BEF7B0D6B938E55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0BEF7B0D6B938E55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6B5E5357FB9FF1A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_C6B5E5357FB9FF1A_OFFSET))(a1, a2);
		}
	};
}
