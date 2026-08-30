#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_5452A5AA1A24CE2E_OFFSET UNITYSDK_OFFSET(0x1D5A4100)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_94EE3D875163987A_OFFSET UNITYSDK_OFFSET(0x1D5A3F50)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_B682CCB2ACDD8A3B_OFFSET UNITYSDK_OFFSET(0x1D5A40D0)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_DCE672916A3BF661_OFFSET UNITYSDK_OFFSET(0x1D5A3F90)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLocalPlayer_TypeDefinitionIndex = 23589;

	class TargetFetchAdvLocalPlayer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean IncludeStoryPlayer; // 0x10
		::System::Boolean FetchLatestTeamLeader; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94EE3D875163987A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_94EE3D875163987A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCE672916A3BF661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_DCE672916A3BF661_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B682CCB2ACDD8A3B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_B682CCB2ACDD8A3B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5452A5AA1A24CE2E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_5452A5AA1A24CE2E_OFFSET))(a1, a2);
		}
	};
}
