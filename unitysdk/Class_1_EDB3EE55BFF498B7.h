#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_EDB3EE55BFF498B7_GET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xAAEF930)
#define CLASS_1_EDB3EE55BFF498B7_SET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0xAAEF940)
#define CLASS_1_EDB3EE55BFF498B7__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEF950)

inline static constexpr unsigned int Class_1_EDB3EE55BFF498B7_TypeDefinitionIndex = 48544;

class Class_1_EDB3EE55BFF498B7 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* _PropertyContext_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDB3EE55BFF498B7__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* get_PropertyContext()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EDB3EE55BFF498B7_GET_PROPERTYCONTEXT_OFFSET))(this);
	}

	::System::Void set_PropertyContext(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EDB3EE55BFF498B7_SET_PROPERTYCONTEXT_OFFSET))(this, a1);
	}
};
