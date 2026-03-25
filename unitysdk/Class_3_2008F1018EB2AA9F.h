#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_2008F1018EB2AA9F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16632A60)
#define CLASS_3_2008F1018EB2AA9F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16632AE0)
#define CLASS_3_2008F1018EB2AA9F_INVOKE_OFFSET UNITYSDK_OFFSET(0x166326D0)
#define CLASS_3_2008F1018EB2AA9F__CTOR_OFFSET UNITYSDK_OFFSET(0x166326B0)

inline static constexpr unsigned int Class_3_2008F1018EB2AA9F_TypeDefinitionIndex = 28381;

class Class_3_2008F1018EB2AA9F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_2008F1018EB2AA9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::Boolean a2, ::Class_1_0E117AC86D8E5BCA* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_3_2008F1018EB2AA9F_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Boolean a2, ::Class_1_0E117AC86D8E5BCA* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Class_1_0E117AC86D8E5BCA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2008F1018EB2AA9F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_2008F1018EB2AA9F_ENDINVOKE_OFFSET))(this, a1);
	}
};
