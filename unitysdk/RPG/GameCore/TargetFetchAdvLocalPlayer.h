#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_1B67FE6930F03A42_OFFSET UNITYSDK_OFFSET(0x19D032E0)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_BA7E332EA7CD365A_OFFSET UNITYSDK_OFFSET(0x19D087F0)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_DCE672916A3BF661_OFFSET UNITYSDK_OFFSET(0x19CF4D80)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_E36A00312068E38B_OFFSET UNITYSDK_OFFSET(0x19D08770)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF4D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLocalPlayer_TypeDefinitionIndex = 22546;

	class TargetFetchAdvLocalPlayer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean IncludeStoryPlayer; // 0x10
		::System::Boolean FetchLatestTeamLeader; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E36A00312068E38B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_E36A00312068E38B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DCE672916A3BF661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_DCE672916A3BF661_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B67FE6930F03A42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_1B67FE6930F03A42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA7E332EA7CD365A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_METHOD_4_BA7E332EA7CD365A_OFFSET))(a1, a2);
		}
	};
}
