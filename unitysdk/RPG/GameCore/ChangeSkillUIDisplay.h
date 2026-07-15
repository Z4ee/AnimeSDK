#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGESKILLUIDISPLAY_METHOD_3_CA7516A01BF2918F_OFFSET UNITYSDK_OFFSET(0x1B71B170)
#define RPG_GAMECORE_CHANGESKILLUIDISPLAY_METHOD_3_E2E9219D7FB53DD0_OFFSET UNITYSDK_OFFSET(0x1B71B0D0)
#define RPG_GAMECORE_CHANGESKILLUIDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71B130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeSkillUIDisplay_TypeDefinitionIndex = 22831;

	class ChangeSkillUIDisplay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::System::Boolean IsReset; // 0x28
		::RPG::Client::TextID SkillName; // 0x30
		::RPG::Client::TextID SkillTag; // 0x40
		::RPG::Client::TextID SkillTypeDesc; // 0x50
		::System::String* SkillIcon; // 0x60
		::System::String* UltraSkillIcon; // 0x68
		::RPG::Client::TextID SkillDesc; // 0x70
		::RPG::Client::TextID SimpleSkillDesc; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2E9219D7FB53DD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeSkillUIDisplay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeSkillUIDisplay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY_METHOD_3_E2E9219D7FB53DD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA7516A01BF2918F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeSkillUIDisplay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeSkillUIDisplay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGESKILLUIDISPLAY_METHOD_3_CA7516A01BF2918F_OFFSET))(a1, a2);
		}
	};
}
