#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGRAGEMODECONFIG_METHOD_2_DD176627956ED3B5_OFFSET UNITYSDK_OFFSET(0x1707F280)
#define RPG_GAMECORE_CHENLINGRAGEMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170888A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingRageModeConfig_TypeDefinitionIndex = 14380;

	class ChenLingRageModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint WaitEnterTime; // 0x10
		::System::String* EffectSkillConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGRAGEMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DD176627956ED3B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingRageModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingRageModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGRAGEMODECONFIG_METHOD_2_DD176627956ED3B5_OFFSET))(a1, a2);
		}
	};
}
