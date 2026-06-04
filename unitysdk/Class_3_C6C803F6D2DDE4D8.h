#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_C6C803F6D2DDE4D8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAC2D980)
#define CLASS_3_C6C803F6D2DDE4D8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAC2D9B0)
#define CLASS_3_C6C803F6D2DDE4D8_INVOKE_OFFSET UNITYSDK_OFFSET(0xAC2D970)
#define CLASS_3_C6C803F6D2DDE4D8__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2D880)

inline static constexpr unsigned int Class_3_C6C803F6D2DDE4D8_TypeDefinitionIndex = 72554;

class Class_3_C6C803F6D2DDE4D8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_C6C803F6D2DDE4D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C6C803F6D2DDE4D8_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C6C803F6D2DDE4D8_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_C6C803F6D2DDE4D8_ENDINVOKE_OFFSET))(this, a1);
	}
};
