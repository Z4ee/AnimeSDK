#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_9B28A54582B92258_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13A381D0)
#define CLASS_3_9B28A54582B92258_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13A38240)
#define CLASS_3_9B28A54582B92258_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A381C0)
#define CLASS_3_9B28A54582B92258__CTOR_OFFSET UNITYSDK_OFFSET(0x13A38150)

inline static constexpr unsigned int Class_3_9B28A54582B92258_TypeDefinitionIndex = 54555;

class Class_3_9B28A54582B92258 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_9B28A54582B92258__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_9B28A54582B92258_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AdvNavigationFailReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9B28A54582B92258_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_9B28A54582B92258_ENDINVOKE_OFFSET))(this, a1);
	}
};
