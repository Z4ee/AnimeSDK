#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD4AB70)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS40_0__RELEASENPCFORRANDOMLIB_B__0_OFFSET UNITYSDK_OFFSET(0xCD4AB80)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass40_0_TypeDefinitionIndex = 58954;

	class NPCCrowdAvatarManager___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Int32 avatarParamsID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReleaseNpcForRandomLib_b__0(::FNpcAvatarGenericParams param)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNpcAvatarGenericParams))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS40_0__RELEASENPCFORRANDOMLIB_B__0_OFFSET))(this, param);
		}
	};
}
