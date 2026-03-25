#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_026FAA47DA032512_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x118F37B0)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_026FAA47DA032512__CTOR_OFFSET UNITYSDK_OFFSET(0x118F37A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_026FAA47DA032512_TypeDefinitionIndex = 53212;

class Class_1_43BD383C98B4C0C5_138_Class_1_026FAA47DA032512 : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Field_1_1; // 0x10
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_026FAA47DA032512__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_026FAA47DA032512_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}
};
