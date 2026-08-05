#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_11A58A840528E5B2;
class Class_1_ED8EA8A424D45C15;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1068D9E0)
#define CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1068DA10)
#define CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1068D4C0)
#define CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1068D4A0)

inline static constexpr unsigned int Class_1_C3787C3A3F6A4D5B_Class_3_487EE6B302AC50B7_TypeDefinitionIndex = 45567;

class Class_1_C3787C3A3F6A4D5B_Class_3_487EE6B302AC50B7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_ED8EA8A424D45C15* Invoke(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_11A58A840528E5B2* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_11A58A840528E5B2*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_ED8EA8A424D45C15* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_C3787C3A3F6A4D5B_CLASS_3_487EE6B302AC50B7_ENDINVOKE_OFFSET))(this, a1);
	}
};
