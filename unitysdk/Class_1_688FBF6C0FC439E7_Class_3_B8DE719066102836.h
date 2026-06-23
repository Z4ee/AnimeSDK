#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_688FBF6C0FC439E7_Class_3_175AF0958DDCD3E4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18782D90)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18782DC0)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_INVOKE_OFFSET UNITYSDK_OFFSET(0x18782850)
#define CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836__CTOR_OFFSET UNITYSDK_OFFSET(0x18782830)

inline static constexpr unsigned int Class_1_688FBF6C0FC439E7_Class_3_B8DE719066102836_TypeDefinitionIndex = 76607;

class Class_1_688FBF6C0FC439E7_Class_3_B8DE719066102836 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_1_688FBF6C0FC439E7_Class_3_175AF0958DDCD3E4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_688FBF6C0FC439E7_Class_3_175AF0958DDCD3E4*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_688FBF6C0FC439E7_Class_3_175AF0958DDCD3E4* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_688FBF6C0FC439E7_Class_3_175AF0958DDCD3E4*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_688FBF6C0FC439E7_CLASS_3_B8DE719066102836_ENDINVOKE_OFFSET))(this, a1);
	}
};
