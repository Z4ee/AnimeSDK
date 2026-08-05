#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_34;
class Class_2_8758E40D9FAA51DB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD44B0)
#define CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD4530)
#define CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDD4190)
#define CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD4170)

inline static constexpr unsigned int Class_1_9FF44890F59C4657_Class_3_77B9040C132F9304_TypeDefinitionIndex = 29496;

class Class_1_9FF44890F59C4657_Class_3_77B9040C132F9304 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_34* Invoke(::System::Int32 a1, ::Class_2_8758E40D9FAA51DB* a2)
	{
		return ((::Class_0_16E4307DCC419505_34*(*)(::PVOID, ::System::Int32, ::Class_2_8758E40D9FAA51DB*))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::Class_2_8758E40D9FAA51DB* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Class_2_8758E40D9FAA51DB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_34* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_34*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9FF44890F59C4657_CLASS_3_77B9040C132F9304_ENDINVOKE_OFFSET))(this, a1);
	}
};
