#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19F47130)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19F471A0)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x19F46C70)
#define CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19F46C60)

inline static constexpr unsigned int Class_1_8FBDD7D8E0EE0B49_Class_3_9A1ADE0F4CE714BA_3_TypeDefinitionIndex = 59427;

class Class_1_8FBDD7D8E0EE0B49_Class_3_9A1ADE0F4CE714BA_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Invoke(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_29439DBE2B63DCF3 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_8FBDD7D8E0EE0B49_CLASS_3_9A1ADE0F4CE714BA_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
