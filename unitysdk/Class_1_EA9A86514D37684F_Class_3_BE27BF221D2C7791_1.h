#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x118DA340)
#define CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x118DA370)
#define CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x118D9DF0)
#define CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1__CTOR_OFFSET UNITYSDK_OFFSET(0x118D9DD0)

inline static constexpr unsigned int Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1_TypeDefinitionIndex = 58886;

class Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_BE27BF221D2C7791_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
