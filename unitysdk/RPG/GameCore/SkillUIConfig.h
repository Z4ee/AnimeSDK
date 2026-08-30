#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistSkillUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLUICONFIG_METHOD_2_22C6E7F91ABF035A_OFFSET UNITYSDK_OFFSET(0x1D0A4870)
#define RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A6090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillUIConfig_TypeDefinitionIndex = 17979;

	class SkillUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillUISpecialButtonType SpecialButtonType; // 0x10
		::System::String* CustomSkillButtonPrefabPath; // 0x18
		::System::Boolean ForbidEnhanceEffect; // 0x20
		::RPG::GameCore::AssistSkillUIConfig* AssistSkillUIConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_22C6E7F91ABF035A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLUICONFIG_METHOD_2_22C6E7F91ABF035A_OFFSET))(a1, a2);
		}
	};
}
