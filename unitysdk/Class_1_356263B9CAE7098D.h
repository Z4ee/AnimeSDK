#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_356263B9CAE7098D_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0x1365AA20)
#define CLASS_1_356263B9CAE7098D__CTOR_OFFSET UNITYSDK_OFFSET(0x1365A960)

inline static constexpr unsigned int Class_1_356263B9CAE7098D_TypeDefinitionIndex = 69999;

class Class_1_356263B9CAE7098D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_398* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_356263B9CAE7098D__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_356263B9CAE7098D_CALCULATEVALUE_OFFSET))(this, a1);
	}
};
