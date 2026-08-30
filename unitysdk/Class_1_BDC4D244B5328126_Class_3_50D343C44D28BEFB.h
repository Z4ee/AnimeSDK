#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF67180)
#define CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF671B0)
#define CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF67170)
#define CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF67100)

inline static constexpr unsigned int Class_1_BDC4D244B5328126_Class_3_50D343C44D28BEFB_TypeDefinitionIndex = 40143;

class Class_1_BDC4D244B5328126_Class_3_50D343C44D28BEFB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Invoke()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126_CLASS_3_50D343C44D28BEFB_ENDINVOKE_OFFSET))(this, a1);
	}
};
