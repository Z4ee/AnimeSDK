#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB479A0)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS3_0__GETAVATARBYACTIVITYAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0xBB47FF0)

inline static constexpr unsigned int Class_1_CE43C07341147131___c__DisplayClass3_0_TypeDefinitionIndex = 79896;

class Class_1_CE43C07341147131___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAvatarByActivityAvatarID_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS3_0__GETAVATARBYACTIVITYAVATARID_B__0_OFFSET))(this, a1);
	}
};
