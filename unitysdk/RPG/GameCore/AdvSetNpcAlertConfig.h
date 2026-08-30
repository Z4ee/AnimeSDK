#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETNPCALERTCONFIG_METHOD_3_BE9D76154476F829_OFFSET UNITYSDK_OFFSET(0x1CDDAB90)
#define RPG_GAMECORE_ADVSETNPCALERTCONFIG_METHOD_3_E170A8AF3A92C90A_OFFSET UNITYSDK_OFFSET(0x1CDDAAF0)
#define RPG_GAMECORE_ADVSETNPCALERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcAlertConfig_TypeDefinitionIndex = 20106;

	class AdvSetNpcAlertConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AlertSystemEnable; // 0x20
		::System::Single AlertLimitMin; // 0x24
		::System::Single AlertLimitMax; // 0x28
		::System::Single AlertGuardLimitMin; // 0x2C
		::System::Single AlertGuardLimitMax; // 0x30
		::System::Single AlertDeclineSpeed; // 0x34
		::System::Single AlertDeclineProtectTime; // 0x38
		::System::Single AlertUIShowDistance; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E170A8AF3A92C90A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcAlertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcAlertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG_METHOD_3_E170A8AF3A92C90A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE9D76154476F829(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcAlertConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcAlertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCALERTCONFIG_METHOD_3_BE9D76154476F829_OFFSET))(a1, a2);
		}
	};
}
