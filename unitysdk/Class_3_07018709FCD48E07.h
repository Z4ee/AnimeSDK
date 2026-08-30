#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_F3C45F1FC7349B6E;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_07018709FCD48E07_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19D26660)
#define CLASS_3_07018709FCD48E07_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19D26690)
#define CLASS_3_07018709FCD48E07_INVOKE_OFFSET UNITYSDK_OFFSET(0x19D26650)
#define CLASS_3_07018709FCD48E07__CTOR_OFFSET UNITYSDK_OFFSET(0x19D26560)

inline static constexpr unsigned int Class_3_07018709FCD48E07_TypeDefinitionIndex = 36594;

class Class_3_07018709FCD48E07 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_07018709FCD48E07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_07018709FCD48E07_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_2_F3C45F1FC7349B6E* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_07018709FCD48E07_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_07018709FCD48E07_ENDINVOKE_OFFSET))(this, a1);
	}
};
