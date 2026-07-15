#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarSourceConfigRow; }

#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7D170)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__0_OFFSET UNITYSDK_OFFSET(0x16A7D2D0)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__1_OFFSET UNITYSDK_OFFSET(0x16A7D350)

inline static constexpr unsigned int Class_1_CE43C07341147131___c__DisplayClass4_0_TypeDefinitionIndex = 76263;

class Class_1_CE43C07341147131___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAvatarBySourceAvatarID_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _GetAvatarBySourceAvatarID_b__1(::RPG::GameCore::AvatarSourceConfigRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSourceConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS4_0__GETAVATARBYSOURCEAVATARID_B__1_OFFSET))(this, a1);
	}
};
