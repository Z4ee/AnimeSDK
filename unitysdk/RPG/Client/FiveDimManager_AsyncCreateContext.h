#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79F4C97127452753;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xD08A960)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xD083100)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0xD08A9F0)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET UNITYSDK_OFFSET(0xD0835D0)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD08AA60)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET UNITYSDK_OFFSET(0xD08A750)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD08AAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_AsyncCreateContext_TypeDefinitionIndex = 60638;

	class FiveDimManager_AsyncCreateContext : public ::System::Object
	{
	public:
		::RPG::Client::FiveDimGameInstance* GameInstance; // 0x10
		::Class_3_1E4F9B0ED3BF21DE* Services; // 0x18
		::RPG::PoolList_1<::Class_1_79F4C97127452753*>* PendingCreateNodes; // 0x20
		::System::Action* OnCreateFinishAction; // 0x28
		::System::Int32 CreateIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::FiveDimGameInstance* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_3_1E4F9B0ED3BF21DE*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET))(this);
		}

		::System::Void _BuildCreateList(::System::UInt32 a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONRECYCLE_OFFSET))(this);
		}
	};
}
