#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x192BA1B0)
#define RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x192BA220)
#define RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET UNITYSDK_OFFSET(0x192BA1A0)
#define RPG_CUSTOMRP_CAPTURECB__CTOR_OFFSET UNITYSDK_OFFSET(0x192BA130)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureCb_TypeDefinitionIndex = 36925;

	class CaptureCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Unity::Collections::NativeArray_1<::System::Byte>& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Unity::Collections::NativeArray_1<::System::Byte>& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::Unity::Collections::NativeArray_1<::System::Byte>& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
