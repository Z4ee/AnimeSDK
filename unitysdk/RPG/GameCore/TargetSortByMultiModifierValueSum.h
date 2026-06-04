#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_1D916C1BAC442397_OFFSET UNITYSDK_OFFSET(0x19D1E6C0)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_5177D4C27D495544_OFFSET UNITYSDK_OFFSET(0x19D2DFA0)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_9B9C6F0753EDA71A_OFFSET UNITYSDK_OFFSET(0x19D2C060)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_A634E894CA995086_OFFSET UNITYSDK_OFFSET(0x19D2E010)
#define RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1E6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByMultiModifierValueSum_TypeDefinitionIndex = 22671;

	class TargetSortByMultiModifierValueSum : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag BehaviorFlag; // 0x10
		::RPG::GameCore::ModifierValueType ValueType; // 0x14
		::System::Boolean HighestFirst; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5177D4C27D495544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_5177D4C27D495544_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D916C1BAC442397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_1D916C1BAC442397_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B9C6F0753EDA71A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_9B9C6F0753EDA71A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A634E894CA995086(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMULTIMODIFIERVALUESUM_METHOD_3_A634E894CA995086_OFFSET))(a1, a2);
		}
	};
}
