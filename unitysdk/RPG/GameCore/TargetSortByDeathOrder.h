#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_40854B8CE02E2A76_OFFSET UNITYSDK_OFFSET(0x19D2CF50)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_D44CF768ACE644B0_OFFSET UNITYSDK_OFFSET(0x19D2BA90)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_F993ADA5A7248719_OFFSET UNITYSDK_OFFSET(0x19D1D850)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_FE7DC16953C5E5E9_OFFSET UNITYSDK_OFFSET(0x19D2D090)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDeathOrder_TypeDefinitionIndex = 22667;

	class TargetSortByDeathOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40854B8CE02E2A76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_40854B8CE02E2A76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F993ADA5A7248719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_F993ADA5A7248719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D44CF768ACE644B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_D44CF768ACE644B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE7DC16953C5E5E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_METHOD_3_FE7DC16953C5E5E9_OFFSET))(a1, a2);
		}
	};
}
