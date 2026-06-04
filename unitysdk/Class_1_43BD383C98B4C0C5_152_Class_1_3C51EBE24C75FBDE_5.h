#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_3C51EBE24C75FBDE_5_METHOD_1_EC2F72D793A53427_OFFSET UNITYSDK_OFFSET(0x13AF6DC0)
#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_3C51EBE24C75FBDE_5__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF6DB0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_152_Class_1_3C51EBE24C75FBDE_5_TypeDefinitionIndex = 61273;

class Class_1_43BD383C98B4C0C5_152_Class_1_3C51EBE24C75FBDE_5 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_3C51EBE24C75FBDE_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2F72D793A53427()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_3C51EBE24C75FBDE_5_METHOD_1_EC2F72D793A53427_OFFSET))(this);
	}
};
