#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C881670)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C8816A0)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C8800A0)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C881600)

inline static constexpr unsigned int Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1_TypeDefinitionIndex = 34615;

class Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_8661546F242498DE_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
