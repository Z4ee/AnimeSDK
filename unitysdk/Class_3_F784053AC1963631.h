#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_FF872820A2FF123B;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F784053AC1963631_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17B11C50)
#define CLASS_3_F784053AC1963631_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17B11CB0)
#define CLASS_3_F784053AC1963631_INVOKE_OFFSET UNITYSDK_OFFSET(0x17B11C40)
#define CLASS_3_F784053AC1963631__CTOR_OFFSET UNITYSDK_OFFSET(0x17B11B50)

inline static constexpr unsigned int Class_3_F784053AC1963631_TypeDefinitionIndex = 34680;

class Class_3_F784053AC1963631 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F784053AC1963631__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_FF872820A2FF123B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F784053AC1963631_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_FF872820A2FF123B* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_FF872820A2FF123B*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F784053AC1963631_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F784053AC1963631_ENDINVOKE_OFFSET))(this, a1);
	}
};
