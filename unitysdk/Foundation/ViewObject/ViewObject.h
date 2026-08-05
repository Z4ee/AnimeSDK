#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectBase_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1199FD10)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObject_TypeDefinitionIndex = 46473;

	class ViewObject : public ::Foundation::ViewObject::ViewObjectBase_1<::Foundation::ViewObject::ViewObjectHandle>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECT__CTOR_OFFSET))(this);
		}
	};
}
