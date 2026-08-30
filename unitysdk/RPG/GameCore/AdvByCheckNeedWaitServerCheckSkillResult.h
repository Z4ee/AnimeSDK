#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_4E0444C255B89D6A_OFFSET UNITYSDK_OFFSET(0x1D6A86D0)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_CF961F1182F6AC91_OFFSET UNITYSDK_OFFSET(0x1D6A8710)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_EC530074A1F250CB_OFFSET UNITYSDK_OFFSET(0x1D6A8850)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_F3C56C6417421CBE_OFFSET UNITYSDK_OFFSET(0x1D6A8880)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckNeedWaitServerCheckSkillResult_TypeDefinitionIndex = 19978;

	class AdvByCheckNeedWaitServerCheckSkillResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E0444C255B89D6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_4E0444C255B89D6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF961F1182F6AC91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_CF961F1182F6AC91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC530074A1F250CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_EC530074A1F250CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3C56C6417421CBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_F3C56C6417421CBE_OFFSET))(a1, a2);
		}
	};
}
