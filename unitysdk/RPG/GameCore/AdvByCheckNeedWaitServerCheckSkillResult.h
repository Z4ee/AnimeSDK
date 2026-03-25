#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_2EA159F312C36BBB_OFFSET UNITYSDK_OFFSET(0x16F24AF0)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_CF961F1182F6AC91_OFFSET UNITYSDK_OFFSET(0x16F24BC0)
#define RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckNeedWaitServerCheckSkillResult_TypeDefinitionIndex = 18499;

	class AdvByCheckNeedWaitServerCheckSkillResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2EA159F312C36BBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_2EA159F312C36BBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF961F1182F6AC91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKNEEDWAITSERVERCHECKSKILLRESULT_METHOD_4_CF961F1182F6AC91_OFFSET))(a1, a2);
		}
	};
}
