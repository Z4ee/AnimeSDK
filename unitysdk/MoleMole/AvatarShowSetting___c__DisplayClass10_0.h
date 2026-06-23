#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinOverrideShowSetting; }

#define MOLEMOLE_AVATARSHOWSETTING___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13467FC0)
#define MOLEMOLE_AVATARSHOWSETTING___C__DISPLAYCLASS10_0__GETSKINOVERRIDESETTING_B__0_OFFSET UNITYSDK_OFFSET(0x13467FD0)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting___c__DisplayClass10_0_TypeDefinitionIndex = 65456;

	class AvatarShowSetting___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 skinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkinOverrideSetting_b__0(::MoleMole::SkinOverrideShowSetting* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING___C__DISPLAYCLASS10_0__GETSKINOVERRIDESETTING_B__0_OFFSET))(this, item);
		}
	};
}
