#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_1EC32C2A5300E557_OFFSET UNITYSDK_OFFSET(0x19D1EA40)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_28F6BB0435E81EB3_OFFSET UNITYSDK_OFFSET(0x19D2E400)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_950FF984DE5B23B3_OFFSET UNITYSDK_OFFSET(0x19D2E3B0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_A613F39D01FAA3CB_OFFSET UNITYSDK_OFFSET(0x19D2C1F0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1EA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByProperty_TypeDefinitionIndex = 22664;

	class TargetSortByProperty : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AbilityProperty PropertyType; // 0x10
		::System::Boolean HighestFirst; // 0x14
		::System::Boolean AliveOnly; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_950FF984DE5B23B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_950FF984DE5B23B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EC32C2A5300E557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_1EC32C2A5300E557_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A613F39D01FAA3CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_A613F39D01FAA3CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28F6BB0435E81EB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_28F6BB0435E81EB3_OFFSET))(a1, a2);
		}
	};
}
