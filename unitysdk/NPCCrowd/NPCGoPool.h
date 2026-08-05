#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_NPCGOPOOL_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xF6159E0)
#define NPCCROWD_NPCGOPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0xF615EC0)
#define NPCCROWD_NPCGOPOOL_INIT_OFFSET UNITYSDK_OFFSET(0xF6157A0)
#define NPCCROWD_NPCGOPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0xF615B90)
#define NPCCROWD_NPCGOPOOL_RESET_OFFSET UNITYSDK_OFFSET(0xF615DC0)
#define NPCCROWD_NPCGOPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xF616150)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCGoPool_TypeDefinitionIndex = 85249;

	class NPCGoPool : public ::System::Object
	{
	public:
		// static const ::System::String* POOLGONAME; // 0x0
		// static const ::System::String* POOLRootNAME; // 0x0
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* goPool; // 0x10
		::UnityEngine::GameObject* root; // 0x18
		::System::Int32 poolMaxNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 inPoolMaxNum, ::System::String* poolName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL_INIT_OFFSET))(this, inPoolMaxNum, poolName);
		}

		::UnityEngine::GameObject* Allocate(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL_ALLOCATE_OFFSET))(this, name);
		}

		::System::Void Release(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL_RELEASE_OFFSET))(this, go);
		}

		::System::Void Reset(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL_RESET_OFFSET))(this, go);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCGOPOOL_CLEAR_OFFSET))(this);
		}
	};
}
