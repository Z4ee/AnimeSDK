#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_124FE954DD384D04_OFFSET UNITYSDK_OFFSET(0x19500DC0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_823555678567D9B3_OFFSET UNITYSDK_OFFSET(0x19500B00)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_9FB623C4932AFB84_OFFSET UNITYSDK_OFFSET(0x19500D40)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET UNITYSDK_OFFSET(0x19500BD0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19500B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimeRewindEntityPauseBySkillCount_TypeDefinitionIndex = 19526;

	class ByCheckTimeRewindEntityPauseBySkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_823555678567D9B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_823555678567D9B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E12977EA412CC121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FB623C4932AFB84(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_9FB623C4932AFB84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_124FE954DD384D04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_124FE954DD384D04_OFFSET))(a1, a2);
		}
	};
}
