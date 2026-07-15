#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_43BD383C98B4C0C5_158_CLASS_1_C675FC0112C2250E_METHOD_1_EB4B7D497A198F4C_OFFSET UNITYSDK_OFFSET(0x16F87B70)
#define CLASS_1_43BD383C98B4C0C5_158_CLASS_1_C675FC0112C2250E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F87B60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_158_Class_1_C675FC0112C2250E_TypeDefinitionIndex = 62614;

class Class_1_43BD383C98B4C0C5_158_Class_1_C675FC0112C2250E : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_158_CLASS_1_C675FC0112C2250E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB4B7D497A198F4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_158_CLASS_1_C675FC0112C2250E_METHOD_1_EB4B7D497A198F4C_OFFSET))(this);
	}
};
