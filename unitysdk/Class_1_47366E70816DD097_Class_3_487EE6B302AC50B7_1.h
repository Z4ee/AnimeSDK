#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_11A58A840528E5B2;
class Class_1_ED8EA8A424D45C15;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1256F6B0)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1256F6E0)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1256F170)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1256F160)

inline static constexpr unsigned int Class_1_47366E70816DD097_Class_3_487EE6B302AC50B7_1_TypeDefinitionIndex = 40220;

class Class_1_47366E70816DD097_Class_3_487EE6B302AC50B7_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_ED8EA8A424D45C15* Invoke(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_11A58A840528E5B2* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_11A58A840528E5B2*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_ED8EA8A424D45C15* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
