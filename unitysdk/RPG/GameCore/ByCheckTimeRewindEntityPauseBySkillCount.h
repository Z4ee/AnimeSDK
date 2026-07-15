#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_351A8791BDCBCA72_OFFSET UNITYSDK_OFFSET(0x19CCC530)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_51F95F6980ACA480_OFFSET UNITYSDK_OFFSET(0x19CCC350)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_7C662492A0DAE075_OFFSET UNITYSDK_OFFSET(0x19CCC500)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET UNITYSDK_OFFSET(0x19CCC390)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCC380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimeRewindEntityPauseBySkillCount_TypeDefinitionIndex = 19884;

	class ByCheckTimeRewindEntityPauseBySkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_51F95F6980ACA480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_51F95F6980ACA480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E12977EA412CC121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C662492A0DAE075(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_7C662492A0DAE075_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_351A8791BDCBCA72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_351A8791BDCBCA72_OFFSET))(a1, a2);
		}
	};
}
