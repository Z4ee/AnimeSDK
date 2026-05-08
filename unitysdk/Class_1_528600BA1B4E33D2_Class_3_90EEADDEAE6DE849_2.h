#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x104D8DF0)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x104D8E60)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x104D8AF0)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2__CTOR_OFFSET UNITYSDK_OFFSET(0x104D8AE0)

inline static constexpr unsigned int Class_1_528600BA1B4E33D2_Class_3_90EEADDEAE6DE849_2_TypeDefinitionIndex = 52407;

class Class_1_528600BA1B4E33D2_Class_3_90EEADDEAE6DE849_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_90EEADDEAE6DE849_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
