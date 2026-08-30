#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_02E07A4A8DFCFA18_OFFSET UNITYSDK_OFFSET(0x1E1C2670)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_0E04A6A8AF4376A3_OFFSET UNITYSDK_OFFSET(0x1E1C24E0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_BCDC1D7350EDD011_OFFSET UNITYSDK_OFFSET(0x1E1C2640)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_DDE2CB29F81543E0_OFFSET UNITYSDK_OFFSET(0x1E1C2520)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C2510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByModifierStatusCount_TypeDefinitionIndex = 23711;

	class TargetSortByModifierStatusCount : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::EnumStatusType BuffStatus; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E04A6A8AF4376A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_0E04A6A8AF4376A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE2CB29F81543E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_DDE2CB29F81543E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCDC1D7350EDD011(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_BCDC1D7350EDD011_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02E07A4A8DFCFA18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_02E07A4A8DFCFA18_OFFSET))(a1, a2);
		}
	};
}
