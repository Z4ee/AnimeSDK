#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5FA9CCDDD9957726;
namespace Foundation::ViewObject { class EntityBuildContext_TempEcsComponentContainer; }
namespace Foundation::ViewObject { class ITraitEntityBuild; }

#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x140803C0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x779B00)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYTRAIT_OFFSET UNITYSDK_OFFSET(0x779A90)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYVIEWOBJECTCONFIG_OFFSET UNITYSDK_OFFSET(0x779AA0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATEENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x779A70)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GET_OUTER_OFFSET UNITYSDK_OFFSET(0x779A50)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SETTYPE_OFFSET UNITYSDK_OFFSET(0x779AB0)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SET_OUTER_OFFSET UNITYSDK_OFFSET(0x779A60)
#define FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x779B10)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EntityBuildContext_TypeDefinitionIndex = 73386;

	struct alignas(8) EntityBuildContext
	{
		::Foundation::ViewObject::EntityBuildContext_TempEcsComponentContainer* componentContainer; // 0x10
		::Nap::NapECS::ComponentMask RequireMask; // 0x18
		::Nap::NapECS::ComponentMask ExitsMask; // 0x58
		::MoleMole::Config::EntityType EntityType; // 0x98
		::Foundation::ViewObject::ViewObjectHandle _Outer_k__BackingField; // 0xA0

		::Foundation::ViewObject::ViewObjectHandle get_Outer()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GET_OUTER_OFFSET))(this);
		}

		::System::Void set_Outer(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SET_OUTER_OFFSET))(this, value);
		}

		/*
		::MoleMole::EntityHandle GenerateEntityHandle()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATEENTITYHANDLE_OFFSET))(this);
		}
		*/

		::System::Void GenerateComponentByTrait(::Foundation::ViewObject::ITraitEntityBuild* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ITraitEntityBuild*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYTRAIT_OFFSET))(this, trait);
		}

		::System::Void GenerateComponentByViewObjectConfig(::Class_1_5FA9CCDDD9957726* configViewObject)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_GENERATECOMPONENTBYVIEWOBJECTCONFIG_OFFSET))(this, configViewObject);
		}

		::System::Void SetType(::MoleMole::Config::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_SETTYPE_OFFSET))(this, entityType);
		}

		static ::Foundation::ViewObject::EntityBuildContext Create(::Foundation::ViewObject::ViewObjectHandle outer)
		{
			return ((::Foundation::ViewObject::EntityBuildContext(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_CREATE_OFFSET))(outer);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Validate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_ENTITYBUILDCONTEXT_VALIDATE_OFFSET))(this);
		}
	};
}
