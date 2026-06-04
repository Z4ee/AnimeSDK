#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SKILLUICONFIG_METHOD_2_D52F09C200044CCD_OFFSET UNITYSDK_OFFSET(0x19C8D890)
#define RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8F110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillUIConfig_TypeDefinitionIndex = 17291;

	class SkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillUISpecialButtonType SpecialButtonType; // 0x10
		::System::String* CustomSkillButtonPrefabPath; // 0x18
		::System::Boolean ForbidEnhanceEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D52F09C200044CCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG_METHOD_2_D52F09C200044CCD_OFFSET))(a1, a2);
		}
	};
}
