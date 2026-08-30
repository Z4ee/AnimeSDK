#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionUnitConfig.h"
#include "unitysdk/RPG/GameCore/DSEType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConsiderationAxisConfig; }

#define RPG_GAMECORE_AIDECISIONBASECONFIG_METHOD_3_317B8487F57CE9A8_OFFSET UNITYSDK_OFFSET(0x1CD658F0)
#define RPG_GAMECORE_AIDECISIONBASECONFIG_METHOD_3_DE285A7BDE43B1BC_OFFSET UNITYSDK_OFFSET(0x1CD64F80)
#define RPG_GAMECORE_AIDECISIONBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD65A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionBaseConfig_TypeDefinitionIndex = 15310;

	class AIDecisionBaseConfig : public ::RPG::GameCore::AIDecisionUnitConfig
	{
	public:
		::RPG::GameCore::DSEType ScoreEvaluatorType; // 0x10
		::RPG::GameCore::FixPoint Weight; // 0x18
		::Il2CppArray<::RPG::GameCore::ConsiderationAxisConfig*>* ConsiderAxisList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE285A7BDE43B1BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG_METHOD_3_DE285A7BDE43B1BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_317B8487F57CE9A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIDecisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIDecisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONBASECONFIG_METHOD_3_317B8487F57CE9A8_OFFSET))(a1, a2);
		}
	};
}
