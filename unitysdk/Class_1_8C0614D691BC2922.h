#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_8C0614D691BC2922_APPLY_OFFSET UNITYSDK_OFFSET(0x143CCAB0)
#define CLASS_1_8C0614D691BC2922_COMBINE_OFFSET UNITYSDK_OFFSET(0x143CCC60)
#define CLASS_1_8C0614D691BC2922_RESET_OFFSET UNITYSDK_OFFSET(0x143CCE00)
#define CLASS_1_8C0614D691BC2922__CTOR_OFFSET UNITYSDK_OFFSET(0x143CCAA0)

inline static constexpr unsigned int Class_1_8C0614D691BC2922_TypeDefinitionIndex = 69988;

class Class_1_8C0614D691BC2922 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_8C0614D691BC2922__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Apply(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_8C0614D691BC2922_APPLY_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Combine(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_8C0614D691BC2922_COMBINE_OFFSET))(this, a1);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C0614D691BC2922_RESET_OFFSET))(this);
	}
};
