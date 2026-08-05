#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FrameEndRefreshManager_CallKey.h"
#include "unitysdk/FrameEndRefreshManager_QueuedAction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FRAMEENDREFRESHMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15FA51B0)
#define FRAMEENDREFRESHMANAGER_BOOTSTRAP_OFFSET UNITYSDK_OFFSET(0x15FA4F40)
#define FRAMEENDREFRESHMANAGER_DEFER_OFFSET UNITYSDK_OFFSET(0x15FA57D0)
#define FRAMEENDREFRESHMANAGER_ENSUREINSTANCE_OFFSET UNITYSDK_OFFSET(0x15FA4F80)
#define FRAMEENDREFRESHMANAGER_FLUSH_OFFSET UNITYSDK_OFFSET(0x15FA5470)
#define FRAMEENDREFRESHMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA5420)
#define FRAMEENDREFRESHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA5B60)

inline static constexpr unsigned int FrameEndRefreshManager_TypeDefinitionIndex = 77541;

class FrameEndRefreshManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::FrameEndRefreshManager** StaticGet__instance()
	{
		return (::FrameEndRefreshManager**)Il2CppClass::FromTypeDefinitionIndex(FrameEndRefreshManager_TypeDefinitionIndex)->GetStaticField(0x3BD90);
	}
	static ::System::Boolean* StaticGet__isFlushing()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FrameEndRefreshManager_TypeDefinitionIndex)->GetStaticField(0xE150);
	}
	::System::Collections::Generic::List_1<::FrameEndRefreshManager_QueuedAction>* _queue; // 0x18
	::System::Collections::Generic::Dictionary_2<::FrameEndRefreshManager_CallKey, ::System::Int32>* _map; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void Bootstrap()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_BOOTSTRAP_OFFSET))();
	}

	static ::System::Void EnsureInstance()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ENSUREINSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Boolean Defer(::System::Object* owner, ::System::Action* body, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Action*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_DEFER_OFFSET))(owner, body, args);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_FLUSH_OFFSET))(this);
	}
};
