#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_11A58A840528E5B2;
class Class_1_ED8EA8A424D45C15;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD37FAA0)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD37FAD0)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_INVOKE_OFFSET UNITYSDK_OFFSET(0xD37F560)
#define CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xD37F540)

inline static constexpr unsigned int Class_1_47366E70816DD097_Class_3_487EE6B302AC50B7_4_TypeDefinitionIndex = 86638;

class Class_1_47366E70816DD097_Class_3_487EE6B302AC50B7_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_ED8EA8A424D45C15* Invoke(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_11A58A840528E5B2* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_11A58A840528E5B2*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_ED8EA8A424D45C15* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_ED8EA8A424D45C15*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_47366E70816DD097_CLASS_3_487EE6B302AC50B7_4_ENDINVOKE_OFFSET))(this, a1);
	}
};
