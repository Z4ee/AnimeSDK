#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_6346845EF620DF22;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF634180)
#define CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF634220)
#define CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_INVOKE_OFFSET UNITYSDK_OFFSET(0xF633D80)
#define CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF633D60)

inline static constexpr unsigned int Class_3_BE81F70A6CFF24A2_Class_3_6D7A0E0DF1F9852C_1_TypeDefinitionIndex = 73254;

class Class_3_BE81F70A6CFF24A2_Class_3_6D7A0E0DF1F9852C_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_C8DD384065D32AEE Invoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::Class_1_6346845EF620DF22* a3)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_174BD6D3EB04B2EE&, ::Class_1_6346845EF620DF22*))((::PBYTE)hIl2Cpp + CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::Class_1_6346845EF620DF22* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_174BD6D3EB04B2EE&, ::Class_1_6346845EF620DF22*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_C8DD384065D32AEE EndInvoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::IAsyncResult* a3)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_174BD6D3EB04B2EE&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_BE81F70A6CFF24A2_CLASS_3_6D7A0E0DF1F9852C_1_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
