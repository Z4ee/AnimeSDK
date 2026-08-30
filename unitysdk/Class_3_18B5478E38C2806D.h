#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_405;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_18B5478E38C2806D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A76B310)
#define CLASS_3_18B5478E38C2806D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A76B340)
#define CLASS_3_18B5478E38C2806D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A76B300)
#define CLASS_3_18B5478E38C2806D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76B210)

inline static constexpr unsigned int Class_3_18B5478E38C2806D_TypeDefinitionIndex = 50154;

class Class_3_18B5478E38C2806D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_18B5478E38C2806D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_405* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405*))((::PBYTE)hIl2Cpp + CLASS_3_18B5478E38C2806D_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_405* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_405*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_18B5478E38C2806D_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_18B5478E38C2806D_ENDINVOKE_OFFSET))(this, a1);
	}
};
