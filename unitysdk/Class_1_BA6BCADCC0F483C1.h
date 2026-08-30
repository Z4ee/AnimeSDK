#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_EDB3EE55BFF498B7;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define CLASS_1_BA6BCADCC0F483C1_METHOD_1_B8F901A904E67971_OFFSET UNITYSDK_OFFSET(0x17851DB0)
#define CLASS_1_BA6BCADCC0F483C1__CTOR_OFFSET UNITYSDK_OFFSET(0x17851E60)

inline static constexpr unsigned int Class_1_BA6BCADCC0F483C1_TypeDefinitionIndex = 62700;

class Class_1_BA6BCADCC0F483C1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA6BCADCC0F483C1__CTOR_OFFSET))(this);
	}

	::Class_1_EDB3EE55BFF498B7* Method_1_B8F901A904E67971(::Il2CppArray<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*>* a1)
	{
		return ((::Class_1_EDB3EE55BFF498B7*(*)(::PVOID, ::Il2CppArray<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + CLASS_1_BA6BCADCC0F483C1_METHOD_1_B8F901A904E67971_OFFSET))(this, a1);
	}
};
