#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_EEF63ED175874E15_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xC46C2F0)
#define CLASS_1_EEF63ED175874E15__CTOR_OFFSET UNITYSDK_OFFSET(0xC46C190)

inline static constexpr unsigned int Class_1_EEF63ED175874E15_TypeDefinitionIndex = 69998;

class Class_1_EEF63ED175874E15 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_398* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_398* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::IdleLiveAvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_EEF63ED175874E15__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_EEF63ED175874E15_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
