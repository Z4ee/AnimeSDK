#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_4_METHOD_1_EC2F72D793A53427_OFFSET UNITYSDK_OFFSET(0x1B433A40)
#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B433A30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_172_Class_1_3C51EBE24C75FBDE_4_TypeDefinitionIndex = 65596;

class Class_1_43BD383C98B4C0C5_172_Class_1_3C51EBE24C75FBDE_4 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2F72D793A53427()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_4_METHOD_1_EC2F72D793A53427_OFFSET))(this);
	}
};
