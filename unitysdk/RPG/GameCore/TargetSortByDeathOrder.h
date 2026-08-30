#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_58ED3877714F26E5_OFFSET UNITYSDK_OFFSET(0x1D5B81B0)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_D1BFBC38EC16F879_OFFSET UNITYSDK_OFFSET(0x1D5B8380)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_E88D38283B98E861_OFFSET UNITYSDK_OFFSET(0x1D5B83D0)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_F993ADA5A7248719_OFFSET UNITYSDK_OFFSET(0x1D5B82C0)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B82B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDeathOrder_TypeDefinitionIndex = 23710;

	class TargetSortByDeathOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58ED3877714F26E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_58ED3877714F26E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F993ADA5A7248719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_F993ADA5A7248719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1BFBC38EC16F879(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_D1BFBC38EC16F879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E88D38283B98E861(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_E88D38283B98E861_OFFSET))(a1, a2);
		}
	};
}
