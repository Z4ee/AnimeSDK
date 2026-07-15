#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_D878B15D5D5D4685_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17019F40)
#define CLASS_3_D878B15D5D5D4685_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17019FB0)
#define CLASS_3_D878B15D5D5D4685_INVOKE_OFFSET UNITYSDK_OFFSET(0x17019F30)
#define CLASS_3_D878B15D5D5D4685__CTOR_OFFSET UNITYSDK_OFFSET(0x17019EC0)

inline static constexpr unsigned int Class_3_D878B15D5D5D4685_TypeDefinitionIndex = 54324;

class Class_3_D878B15D5D5D4685 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_D878B15D5D5D4685__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_D878B15D5D5D4685_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::SOFinishReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::SOFinishReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D878B15D5D5D4685_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_D878B15D5D5D4685_ENDINVOKE_OFFSET))(this, a1);
	}
};
