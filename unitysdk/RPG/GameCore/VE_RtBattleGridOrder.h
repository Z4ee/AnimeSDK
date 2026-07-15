#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_1F98DA12DEAB312A_OFFSET UNITYSDK_OFFSET(0x1B88FF00)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_4FEAAC22578428B3_OFFSET UNITYSDK_OFFSET(0x1B8900F0)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_57A78D7058BEAF9D_OFFSET UNITYSDK_OFFSET(0x1B88FF40)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_5BB1B665EA74DBD4_OFFSET UNITYSDK_OFFSET(0x1B8900C0)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88FF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleGridOrder_TypeDefinitionIndex = 23406;

	class VE_RtBattleGridOrder : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F98DA12DEAB312A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleGridOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleGridOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_1F98DA12DEAB312A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57A78D7058BEAF9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_57A78D7058BEAF9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BB1B665EA74DBD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_5BB1B665EA74DBD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FEAAC22578428B3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_4FEAAC22578428B3_OFFSET))(a1, a2);
		}
	};
}
