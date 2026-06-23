#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1337C9A0)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1337C9D0)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1337C700)
#define CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1337C6E0)

inline static constexpr unsigned int Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992_Class_3_4B4D321FDD8FF874_1_TypeDefinitionIndex = 64074;

class Class_2_11E43C7F4F662EE8_Class_1_9DAA8B18D8DB3992_Class_3_4B4D321FDD8FF874_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_11E43C7F4F662EE8_CLASS_1_9DAA8B18D8DB3992_CLASS_3_4B4D321FDD8FF874_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
