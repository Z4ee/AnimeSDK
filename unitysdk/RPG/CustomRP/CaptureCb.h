#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A7BF70)
#define RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A7BFE0)
#define RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A7BC20)
#define RPG_CUSTOMRP_CAPTURECB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7B290)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureCb_TypeDefinitionIndex = 29231;

	class CaptureCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Unity::Collections::NativeArray_1<::System::Byte>& data)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Unity::Collections::NativeArray_1<::System::Byte>& data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::Unity::Collections::NativeArray_1<::System::Byte>& data, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET))(this, data, result);
		}
	};
}
