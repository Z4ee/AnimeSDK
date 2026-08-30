#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_6_6E4BF7CC736976D4_OFFSET UNITYSDK_OFFSET(0x1D3CBDF0)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_6_8A98424426B42CD0_OFFSET UNITYSDK_OFFSET(0x1D3CBE40)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CBE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPickAvatarConfig_TypeDefinitionIndex = 19572;

	class RogueCondPickAvatarConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6E4BF7CC736976D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPickAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPickAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_6_6E4BF7CC736976D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8A98424426B42CD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPickAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPickAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_6_8A98424426B42CD0_OFFSET))(a1, a2);
		}
	};
}
