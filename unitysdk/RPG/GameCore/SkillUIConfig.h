#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SKILLUICONFIG_METHOD_2_D7B88FDB4A0C9F01_OFFSET UNITYSDK_OFFSET(0x18E71C20)
#define RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E73470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillUIConfig_TypeDefinitionIndex = 17286;

	class SkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillUISpecialButtonType SpecialButtonType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D7B88FDB4A0C9F01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG_METHOD_2_D7B88FDB4A0C9F01_OFFSET))(a1, a2);
		}
	};
}
