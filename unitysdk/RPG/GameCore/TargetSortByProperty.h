#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_09CD14711E267BC5_OFFSET UNITYSDK_OFFSET(0x1E1C3B20)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_1EC32C2A5300E557_OFFSET UNITYSDK_OFFSET(0x1E1C3960)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_948F53D2102900C0_OFFSET UNITYSDK_OFFSET(0x1E1C3920)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_D59E7B144A4447FB_OFFSET UNITYSDK_OFFSET(0x1E1C3AF0)
#define RPG_GAMECORE_TARGETSORTBYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C3950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByProperty_TypeDefinitionIndex = 23707;

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

		static ::System::Void Method_3_948F53D2102900C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_948F53D2102900C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EC32C2A5300E557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_1EC32C2A5300E557_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D59E7B144A4447FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_D59E7B144A4447FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09CD14711E267BC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTY_METHOD_3_09CD14711E267BC5_OFFSET))(a1, a2);
		}
	};
}
