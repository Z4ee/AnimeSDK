#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD89A040)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS39_0__RELEASENPCFORRANDOMLIB_B__0_OFFSET UNITYSDK_OFFSET(0xD89A050)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass39_0_TypeDefinitionIndex = 60733;

	class NPCCrowdAvatarManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Int32 avatarParamsID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReleaseNpcForRandomLib_b__0(::FNpcAvatarGenericParams param)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS39_0__RELEASENPCFORRANDOMLIB_B__0_OFFSET))(this, param);
		}
	};
}
