#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_6AF1E5B02897ED63_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8F9D7D0)
#define CLASS_3_6AF1E5B02897ED63_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8F9D800)
#define CLASS_3_6AF1E5B02897ED63_INVOKE_OFFSET UNITYSDK_OFFSET(0x8F9D280)
#define CLASS_3_6AF1E5B02897ED63__CTOR_OFFSET UNITYSDK_OFFSET(0x8F9D260)

inline static constexpr unsigned int Class_3_6AF1E5B02897ED63_TypeDefinitionIndex = 48105;

class Class_3_6AF1E5B02897ED63 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_6AF1E5B02897ED63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6AF1E5B02897ED63_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6AF1E5B02897ED63_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_6AF1E5B02897ED63_ENDINVOKE_OFFSET))(this, a1);
	}
};
