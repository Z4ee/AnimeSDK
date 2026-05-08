#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IObject; }
namespace System { class Action; }

#define FOUNDATION_FUNCTIONALOBJECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1B381B30)
#define FOUNDATION_FUNCTIONALOBJECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B381B40)
#define FOUNDATION_FUNCTIONALOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B380620)

namespace Foundation
{
	inline static constexpr unsigned int FunctionalObject_TypeDefinitionIndex = 8916;

	class FunctionalObject : public ::System::Object
	{
	public:
		::System::Action* _object; // 0x10
		::Foundation::ObjectHandle _handle; // 0x18

		::System::Void _ctor(::System::Action* obj, ::Foundation::IObject* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::Foundation::IObject*))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTIONALOBJECT__CTOR_OFFSET))(this, obj, parent);
		}

		::Foundation::ObjectHandle get_Handle()
		{
			return ((::Foundation::ObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTIONALOBJECT_GET_HANDLE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FUNCTIONALOBJECT_RELEASE_OFFSET))(this);
		}
	};
}
