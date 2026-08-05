#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x3C9DB0)
#define FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x351C10)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int BackStageEntityLoadingTask_TypeDefinitionIndex = 82146;

	struct alignas(8) BackStageEntityLoadingTask
	{
		::Foundation::ViewObject::ViewObjectHandle Handle; // 0x10
		::System::String* _Description_k__BackingField; // 0x20

		::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle handle, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK__CTOR_OFFSET))(this, handle, desc);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_BACKSTAGEENTITYLOADINGTASK_SET_DESCRIPTION_OFFSET))(this, value);
		}
	};
}
