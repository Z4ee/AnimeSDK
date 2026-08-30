#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_3A3101F92F181664_OFFSET UNITYSDK_OFFSET(0x1D49C490)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_4D665BBC9E89CD94_OFFSET UNITYSDK_OFFSET(0x1D49C310)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_7F474753D4DD78E0_OFFSET UNITYSDK_OFFSET(0x1D49C3F0)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_F476536F0D7ED746_OFFSET UNITYSDK_OFFSET(0x1D49C4E0)
#define RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49C3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTargetFetchGridByTag_TypeDefinitionIndex = 23970;

	class RtBattleTargetFetchGridByTag : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Tag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D665BBC9E89CD94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_4D665BBC9E89CD94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F474753D4DD78E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_7F474753D4DD78E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A3101F92F181664(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_3A3101F92F181664_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F476536F0D7ED746(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETARGETFETCHGRIDBYTAG_METHOD_4_F476536F0D7ED746_OFFSET))(a1, a2);
		}
	};
}
