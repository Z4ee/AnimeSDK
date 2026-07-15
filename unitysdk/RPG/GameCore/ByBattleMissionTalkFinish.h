#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_10CC84AACEEA6FC6_OFFSET UNITYSDK_OFFSET(0x19CBE310)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_26B844E6F6CB7485_OFFSET UNITYSDK_OFFSET(0x19CBE350)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_9755B532997B7E62_OFFSET UNITYSDK_OFFSET(0x19CBE4C0)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_A3490BF69679BE4F_OFFSET UNITYSDK_OFFSET(0x19CBE490)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19CBE340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleMissionTalkFinish_TypeDefinitionIndex = 22957;

	class ByBattleMissionTalkFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_10CC84AACEEA6FC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_10CC84AACEEA6FC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26B844E6F6CB7485(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_26B844E6F6CB7485_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3490BF69679BE4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_A3490BF69679BE4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9755B532997B7E62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_METHOD_4_9755B532997B7E62_OFFSET))(a1, a2);
		}
	};
}
