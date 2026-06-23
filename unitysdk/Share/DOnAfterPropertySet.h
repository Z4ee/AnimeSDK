#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SHARE_DONAFTERPROPERTYSET_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BEB0B60)
#define SHARE_DONAFTERPROPERTYSET_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BEB0C10)
#define SHARE_DONAFTERPROPERTYSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BEB07D0)
#define SHARE_DONAFTERPROPERTYSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB07B0)

namespace Share
{
	inline static constexpr unsigned int DOnAfterPropertySet_TypeDefinitionIndex = 16403;

	class DOnAfterPropertySet : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SHARE_DONAFTERPROPERTYSET__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Share::EPropertyType wPropertyType, ::System::Int32 dwPrevValue, ::System::Int32 dwCurValue)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_DONAFTERPROPERTYSET_INVOKE_OFFSET))(this, wPropertyType, dwPrevValue, dwCurValue);
		}

		::System::IAsyncResult* BeginInvoke(::Share::EPropertyType wPropertyType, ::System::Int32 dwPrevValue, ::System::Int32 dwCurValue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SHARE_DONAFTERPROPERTYSET_BEGININVOKE_OFFSET))(this, wPropertyType, dwPrevValue, dwCurValue, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SHARE_DONAFTERPROPERTYSET_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
