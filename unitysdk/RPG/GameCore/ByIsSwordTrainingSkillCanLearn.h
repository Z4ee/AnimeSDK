#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_2594D75DC6293C3C_OFFSET UNITYSDK_OFFSET(0x1B2A6AB0)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_971BF76B4BA70A59_OFFSET UNITYSDK_OFFSET(0x1B2A6C60)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_9FCFB3B4CBD95376_OFFSET UNITYSDK_OFFSET(0x1B2A6C90)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F98B182E430A7E75_OFFSET UNITYSDK_OFFSET(0x1B2A6AF0)
#define RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSwordTrainingSkillCanLearn_TypeDefinitionIndex = 23507;

	class ByIsSwordTrainingSkillCanLearn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SkillID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2594D75DC6293C3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_2594D75DC6293C3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F98B182E430A7E75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_F98B182E430A7E75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_971BF76B4BA70A59(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_971BF76B4BA70A59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FCFB3B4CBD95376(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSWORDTRAININGSKILLCANLEARN_METHOD_4_9FCFB3B4CBD95376_OFFSET))(a1, a2);
		}
	};
}
