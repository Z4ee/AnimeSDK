#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_053AA0E7E25A7E27_OFFSET UNITYSDK_OFFSET(0x1D4A2D70)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_5408383C8603C3DF_OFFSET UNITYSDK_OFFSET(0x1D4A3000)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_638305AD71FBE002_OFFSET UNITYSDK_OFFSET(0x1D4A2DC0)
#define RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_FB61B2F5376730D9_OFFSET UNITYSDK_OFFSET(0x1D4A2FC0)
#define RPG_GAMECORE_RTBYSKILLCANUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBySkillCanUse_TypeDefinitionIndex = 23957;

	class RtBySkillCanUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtSkillConditionMask CheckMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_053AA0E7E25A7E27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_053AA0E7E25A7E27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_638305AD71FBE002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_638305AD71FBE002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FB61B2F5376730D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_FB61B2F5376730D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5408383C8603C3DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYSKILLCANUSE_METHOD_4_5408383C8603C3DF_OFFSET))(a1, a2);
		}
	};
}
