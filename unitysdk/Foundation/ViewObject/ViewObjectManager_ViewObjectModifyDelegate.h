#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15957EA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15957F10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15957AF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15957AD0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ViewObjectModifyDelegate_TypeDefinitionIndex = 73604;

	class ViewObjectManager_ViewObjectModifyDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_INVOKE_OFFSET))(this, viewObject);
		}

		::System::IAsyncResult* BeginInvoke(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_BEGININVOKE_OFFSET))(this, viewObject, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_VIEWOBJECTMODIFYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
