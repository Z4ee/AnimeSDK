#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_6CAC28ACDD58FF63_Class_1_C7030828536840A6;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_6CAC28ACDD58FF63_STRUCT_2_2AF9F0798626B748_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x793E30)
#define CLASS_2_6CAC28ACDD58FF63_STRUCT_2_2AF9F0798626B748_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Struct_2_2AF9F0798626B748_TypeDefinitionIndex = 60796;

struct alignas(8) Class_2_6CAC28ACDD58FF63_Struct_2_2AF9F0798626B748
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> Field_2_7; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::Net::HttpWebRequest* Field_2_6; // 0x38
	::System::String* Field_2_2; // 0x40
	::Class_2_6CAC28ACDD58FF63_Class_1_C7030828536840A6* Field_2_4; // 0x48
	::System::Action_1<::Struct_2_5887222B9AE38D34_2>* Field_2_5; // 0x50
	::System::Boolean Field_2_3; // 0x58
	::System::Int32 Field_2_0; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_STRUCT_2_2AF9F0798626B748_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_STRUCT_2_2AF9F0798626B748_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
