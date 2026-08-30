#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_2_METHOD_1_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x1B434070)
#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B434060)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_172_Class_1_3C51EBE24C75FBDE_2_TypeDefinitionIndex = 65594;

class Class_1_43BD383C98B4C0C5_172_Class_1_3C51EBE24C75FBDE_2 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_3C51EBE24C75FBDE_2_METHOD_1_077465549C9EA81F_OFFSET))(this);
	}
};
