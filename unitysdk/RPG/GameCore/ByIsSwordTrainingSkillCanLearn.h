#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_4D180175C9DC4EA7_OFFSET UNITYSDK_OFFSET(0x1956F180)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_7EBDD0C76BF628B8_OFFSET UNITYSDK_OFFSET(0x1956F440)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F4FBC387EC486E30_OFFSET UNITYSDK_OFFSET(0x1956F3C0)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F98B182E430A7E75_OFFSET UNITYSDK_OFFSET(0x1956F250)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN__CTOR_OFFSET UNITYSDK_OFFSET(0x1956F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSwordTrainingSkillCanLearn_TypeDefinitionIndex = 23040;

	class ByIsSwordTrainingSkillCanLearn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SkillID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D180175C9DC4EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_4D180175C9DC4EA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F98B182E430A7E75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F98B182E430A7E75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4FBC387EC486E30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F4FBC387EC486E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EBDD0C76BF628B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_7EBDD0C76BF628B8_OFFSET))(a1, a2);
		}
	};
}
