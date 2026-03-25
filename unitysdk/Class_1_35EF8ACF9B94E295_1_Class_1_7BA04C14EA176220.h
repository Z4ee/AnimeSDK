#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_35EF8ACF9B94E295_1_CLASS_1_7BA04C14EA176220__CTOR_OFFSET UNITYSDK_OFFSET(0x1138F210)

inline static constexpr unsigned int Class_1_35EF8ACF9B94E295_1_Class_1_7BA04C14EA176220_TypeDefinitionIndex = 51022;

class Class_1_35EF8ACF9B94E295_1_Class_1_7BA04C14EA176220 : public ::System::Object
{
public:
	::Class_1_06CDCC6A0A66BA0A* Field_1_3; // 0x10
	::RPG::AvatarSystem::Avatar* Field_1_2; // 0x18
	::RPG::AvatarSystem::IAvatar* Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35EF8ACF9B94E295_1_CLASS_1_7BA04C14EA176220__CTOR_OFFSET))(this);
	}
};
