#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define CLASS_1_E5AFDEFF2A150A82_GET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x883C770)
#define CLASS_1_E5AFDEFF2A150A82_SET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x883C780)
#define CLASS_1_E5AFDEFF2A150A82__CTOR_OFFSET UNITYSDK_OFFSET(0x883C790)

inline static constexpr unsigned int Class_1_E5AFDEFF2A150A82_TypeDefinitionIndex = 41960;

class Class_1_E5AFDEFF2A150A82 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* _PropertyContext_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFDEFF2A150A82__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* get_PropertyContext()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFDEFF2A150A82_GET_PROPERTYCONTEXT_OFFSET))(this);
	}

	::System::Void set_PropertyContext(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFDEFF2A150A82_SET_PROPERTYCONTEXT_OFFSET))(this, value);
	}
};
