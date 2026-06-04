#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_B5E232A3916FB9B8_METHOD_1_4F309F2793CC7BA3_OFFSET UNITYSDK_OFFSET(0x13AF7560)
#define CLASS_1_43BD383C98B4C0C5_152_CLASS_1_B5E232A3916FB9B8__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF7550)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_152_Class_1_B5E232A3916FB9B8_TypeDefinitionIndex = 61274;

class Class_1_43BD383C98B4C0C5_152_Class_1_B5E232A3916FB9B8 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_B5E232A3916FB9B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F309F2793CC7BA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_152_CLASS_1_B5E232A3916FB9B8_METHOD_1_4F309F2793CC7BA3_OFFSET))(this);
	}
};
