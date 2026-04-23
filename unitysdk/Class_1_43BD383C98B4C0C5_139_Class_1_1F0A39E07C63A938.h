#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_1F0A39E07C63A938_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x926D8E0)
#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_1F0A39E07C63A938__CTOR_OFFSET UNITYSDK_OFFSET(0x926D8D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_Class_1_1F0A39E07C63A938_TypeDefinitionIndex = 60335;

class Class_1_43BD383C98B4C0C5_139_Class_1_1F0A39E07C63A938 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10
	::RPG::Client::EquipmentItemData* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_1F0A39E07C63A938__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_1F0A39E07C63A938_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}
};
