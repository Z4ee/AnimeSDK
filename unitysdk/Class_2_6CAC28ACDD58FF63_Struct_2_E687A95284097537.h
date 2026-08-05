#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_6CAC28ACDD58FF63_STRUCT_2_E687A95284097537_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D3160)
#define CLASS_2_6CAC28ACDD58FF63_STRUCT_2_E687A95284097537_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x59F4E0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Struct_2_E687A95284097537_TypeDefinitionIndex = 47175;

struct alignas(8) Class_2_6CAC28ACDD58FF63_Struct_2_E687A95284097537
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_0; // 0x10
	::System::Action_1<::Struct_2_5887222B9AE38D34>* Field_2_6; // 0x30
	::Class_2_6CAC28ACDD58FF63_Class_1_B9C3DB297BAE81C6* Field_2_5; // 0x38
	::System::String* Field_2_7; // 0x40
	::System::Net::HttpWebRequest* Field_2_4; // 0x48
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> Field_2_11; // 0x50
	::System::Int32 Field_2_1; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_STRUCT_2_E687A95284097537_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_STRUCT_2_E687A95284097537_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
