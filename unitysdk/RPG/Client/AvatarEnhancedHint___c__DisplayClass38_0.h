#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }

#define RPG_CLIENT_AVATARENHANCEDHINT___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB365440)
#define RPG_CLIENT_AVATARENHANCEDHINT___C__DISPLAYCLASS38_0__GETSKILLTREECHANGES_B__0_OFFSET UNITYSDK_OFFSET(0xB366780)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhancedHint___c__DisplayClass38_0_TypeDefinitionIndex = 58458;

	class AvatarEnhancedHint___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarSkillTreeRow* afterPoint; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillTreeChanges_b__0(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT___C__DISPLAYCLASS38_0__GETSKILLTREECHANGES_B__0_OFFSET))(this, a1);
		}
	};
}
