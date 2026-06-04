#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_20782F5E87538A62_OFFSET UNITYSDK_OFFSET(0x19BE33B0)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_638305AD71FBE002_OFFSET UNITYSDK_OFFSET(0x19BE3130)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_A789FB7B342CA795_OFFSET UNITYSDK_OFFSET(0x19BE3330)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_AD84FAB3B2D56AEA_OFFSET UNITYSDK_OFFSET(0x19BE3050)
#define RPG_GAMECORE_RTBYSKILLCANUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE30D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBySkillCanUse_TypeDefinitionIndex = 22910;

	class RtBySkillCanUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtSkillConditionMask CheckMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD84FAB3B2D56AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_AD84FAB3B2D56AEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_638305AD71FBE002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_638305AD71FBE002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A789FB7B342CA795(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_A789FB7B342CA795_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20782F5E87538A62(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_20782F5E87538A62_OFFSET))(a1, a2);
		}
	};
}
