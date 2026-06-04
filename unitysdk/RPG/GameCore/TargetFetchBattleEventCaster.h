#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_2AE10272BA10F86C_OFFSET UNITYSDK_OFFSET(0x19D04900)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_2EE6A407800CC36C_OFFSET UNITYSDK_OFFSET(0x19D0B880)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_79823351C2DB1EFE_OFFSET UNITYSDK_OFFSET(0x19D0B7C0)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_7E7992C0C1CCC1FC_OFFSET UNITYSDK_OFFSET(0x19CF7990)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBattleEventCaster_TypeDefinitionIndex = 22610;

	class TargetFetchBattleEventCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_79823351C2DB1EFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_79823351C2DB1EFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E7992C0C1CCC1FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_7E7992C0C1CCC1FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AE10272BA10F86C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_2AE10272BA10F86C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EE6A407800CC36C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTCASTER_METHOD_4_2EE6A407800CC36C_OFFSET))(a1, a2);
		}
	};
}
