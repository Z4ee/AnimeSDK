#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7F4F3EA24347D9DD.h"
#include "unitysdk/Struct_2_CAB3EC81D84469DF.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_0A976FBB3E6CCAE3;
class Class_2_785FDC7D0DA58280;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_456566C611CB9BE8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4C53C0)
#define CLASS_3_456566C611CB9BE8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4C54A0)
#define CLASS_3_456566C611CB9BE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4C4A90)
#define CLASS_3_456566C611CB9BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C4A70)

inline static constexpr unsigned int Class_3_456566C611CB9BE8_TypeDefinitionIndex = 28850;

class Class_3_456566C611CB9BE8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_456566C611CB9BE8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_2_785FDC7D0DA58280* a1, ::Struct_2_7F4F3EA24347D9DD a2, ::Struct_2_CAB3EC81D84469DF a3, ::Class_2_0A976FBB3E6CCAE3* a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::Struct_2_7F4F3EA24347D9DD, ::Struct_2_CAB3EC81D84469DF, ::Class_2_0A976FBB3E6CCAE3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_456566C611CB9BE8_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::IAsyncResult* BeginInvoke(::Class_2_785FDC7D0DA58280* a1, ::Struct_2_7F4F3EA24347D9DD a2, ::Struct_2_CAB3EC81D84469DF a3, ::Class_2_0A976FBB3E6CCAE3* a4, ::System::Boolean a5, ::System::AsyncCallback* a6, ::System::Object* a7)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_785FDC7D0DA58280*, ::Struct_2_7F4F3EA24347D9DD, ::Struct_2_CAB3EC81D84469DF, ::Class_2_0A976FBB3E6CCAE3*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_456566C611CB9BE8_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_456566C611CB9BE8_ENDINVOKE_OFFSET))(this, a1);
	}
};
