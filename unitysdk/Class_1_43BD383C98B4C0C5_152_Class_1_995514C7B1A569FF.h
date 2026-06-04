#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_995514C7B1A569FF_METHOD_1_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x13AF76E0)
#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_995514C7B1A569FF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF76D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_152_Class_1_995514C7B1A569FF_TypeDefinitionIndex = 61270;

class Class_1_43BD383C98B4C0C5_152_Class_1_995514C7B1A569FF : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10
	::RPG::Client::EquipmentItemData* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_995514C7B1A569FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_995514C7B1A569FF_METHOD_1_3E6AC14EE28F55D4_OFFSET))(this);
	}
};
