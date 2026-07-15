#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_43BD383C98B4C0C5_158_CLASS_1_3C51EBE24C75FBDE_2_METHOD_1_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x16F88910)
#define CLASS_1_43BD383C98B4C0C5_158_CLASS_1_3C51EBE24C75FBDE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16F88900)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_158_Class_1_3C51EBE24C75FBDE_2_TypeDefinitionIndex = 62609;

class Class_1_43BD383C98B4C0C5_158_Class_1_3C51EBE24C75FBDE_2 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_158_CLASS_1_3C51EBE24C75FBDE_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_158_CLASS_1_3C51EBE24C75FBDE_2_METHOD_1_077465549C9EA81F_OFFSET))(this);
	}
};
