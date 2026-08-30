#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_88AA6DB648D96BDB_OFFSET UNITYSDK_OFFSET(0x1D68F800)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_B59FC1A98E42E518_OFFSET UNITYSDK_OFFSET(0x1D68F5C0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_C19711F853CD008C_OFFSET UNITYSDK_OFFSET(0x1D68F7D0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_CF7C2E37ADF8008D_OFFSET UNITYSDK_OFFSET(0x1D68F600)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68F5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattlePropertyRatio_TypeDefinitionIndex = 23995;

	class VE_RtBattlePropertyRatio : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B59FC1A98E42E518(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattlePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_B59FC1A98E42E518_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF7C2E37ADF8008D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_CF7C2E37ADF8008D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C19711F853CD008C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_C19711F853CD008C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88AA6DB648D96BDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTYRATIO_METHOD_3_88AA6DB648D96BDB_OFFSET))(a1, a2);
		}
	};
}
