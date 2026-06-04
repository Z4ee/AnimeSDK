#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_18DD318B16D96621_OFFSET UNITYSDK_OFFSET(0x19D2BC10)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_5829C4C6959E77E2_OFFSET UNITYSDK_OFFSET(0x19D2D3F0)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET UNITYSDK_OFFSET(0x19D1DB90)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_BCD9335AFE3A0AA5_OFFSET UNITYSDK_OFFSET(0x19D2D460)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1DB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByElationPriority_TypeDefinitionIndex = 22679;

	class TargetSortByElationPriority : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterByElationTimeTag; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5829C4C6959E77E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_5829C4C6959E77E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7769C90CF6BFB3F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_7769C90CF6BFB3F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18DD318B16D96621(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_18DD318B16D96621_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCD9335AFE3A0AA5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_METHOD_3_BCD9335AFE3A0AA5_OFFSET))(a1, a2);
		}
	};
}
