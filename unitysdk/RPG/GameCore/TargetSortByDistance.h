#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0D1C3BCFD4BF3F75_OFFSET UNITYSDK_OFFSET(0x19D1D980)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_1EA76C67B15B23E9_OFFSET UNITYSDK_OFFSET(0x19D2BB50)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_59562AADDFF69120_OFFSET UNITYSDK_OFFSET(0x19D2D1A0)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_D0C60F1A2B56EDB9_OFFSET UNITYSDK_OFFSET(0x19D2D150)
#define RPG_GAMECORE_TARGETSORTBYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDistance_TypeDefinitionIndex = 22674;

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

		static ::System::Void Method_3_D0C60F1A2B56EDB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_D0C60F1A2B56EDB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D1C3BCFD4BF3F75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_0D1C3BCFD4BF3F75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EA76C67B15B23E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_1EA76C67B15B23E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_59562AADDFF69120(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDISTANCE_METHOD_3_59562AADDFF69120_OFFSET))(a1, a2);
		}
	};
}
