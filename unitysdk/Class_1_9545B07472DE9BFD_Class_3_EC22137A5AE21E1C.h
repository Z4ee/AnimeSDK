#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_11;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE905260)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE905290)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_INVOKE_OFFSET UNITYSDK_OFFSET(0xE904D60)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C__CTOR_OFFSET UNITYSDK_OFFSET(0xE8EA7F0)

inline static constexpr unsigned int Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_TypeDefinitionIndex = 57165;

class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_11* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_11*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_EC22137A5AE21E1C_ENDINVOKE_OFFSET))(this, a1);
	}
};
