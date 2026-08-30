#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_B5E232A3916FB9B8_METHOD_1_5C2158E850B02732_OFFSET UNITYSDK_OFFSET(0x1592A8F0)
#define CLASS_1_43BD383C98B4C0C5_172_CLASS_1_B5E232A3916FB9B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1592A8E0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_172_Class_1_B5E232A3916FB9B8_TypeDefinitionIndex = 65601;

class Class_1_43BD383C98B4C0C5_172_Class_1_B5E232A3916FB9B8 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* OIJOBDPINJM; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_B5E232A3916FB9B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5C2158E850B02732()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_172_CLASS_1_B5E232A3916FB9B8_METHOD_1_5C2158E850B02732_OFFSET))(this);
	}
};
