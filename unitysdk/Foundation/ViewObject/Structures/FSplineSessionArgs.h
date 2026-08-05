#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_GET_VIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x41E6C0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_SET_ENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x783270)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_SET_VIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x7831A0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_WITHENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x7832C0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_WITHVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x783290)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FSplineSessionArgs_TypeDefinitionIndex = 91293;

	struct alignas(8) FSplineSessionArgs
	{
		::MoleMole::Config::EntityType EntityType; // 0x10
		::Foundation::ViewObject::ViewObjectHandle _ViewObjectHandle; // 0x18
		::System::String* SplineName; // 0x28
		::MoleMole::Config::Spline_WayPoint WayPoint; // 0x30

		::Foundation::ViewObject::ViewObjectHandle get_ViewObjectHandle()
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_GET_VIEWOBJECTHANDLE_OFFSET))(this);
		}

		::System::Void set_ViewObjectHandle(::Foundation::ViewObject::ViewObjectHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_SET_VIEWOBJECTHANDLE_OFFSET))(this, value);
		}

		/*
		::System::Void set_EntityHandle(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_SET_ENTITYHANDLE_OFFSET))(this, value);
		}
		*/

		::Foundation::ViewObject::Structures::FSplineSessionArgs WithViewObjectHandle(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::Foundation::ViewObject::Structures::FSplineSessionArgs(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_WITHVIEWOBJECTHANDLE_OFFSET))(this, viewObjectHandle);
		}

		/*
		::Foundation::ViewObject::Structures::FSplineSessionArgs WithEntityHandle(::MoleMole::EntityHandle entityHandle)
		{
			return ((::Foundation::ViewObject::Structures::FSplineSessionArgs(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FSPLINESESSIONARGS_WITHENTITYHANDLE_OFFSET))(this, entityHandle);
		}
		*/
	};
}
