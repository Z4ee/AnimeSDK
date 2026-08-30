#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_3323B4893ACBCB05_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D761930)
#define CLASS_3_3323B4893ACBCB05_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7619B0)
#define CLASS_3_3323B4893ACBCB05_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D761910)
#define CLASS_3_3323B4893ACBCB05__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7618A0)

inline static constexpr unsigned int Class_3_3323B4893ACBCB05_TypeDefinitionIndex = 6263;

class Class_3_3323B4893ACBCB05 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_3323B4893ACBCB05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_3323B4893ACBCB05_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::Il2CppArray<::System::Single>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3323B4893ACBCB05_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_3323B4893ACBCB05_ENDINVOKE_OFFSET))(this, a1);
	}
};
