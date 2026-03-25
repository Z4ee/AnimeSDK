#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79F4C97127452753;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x96EBED0)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x96E5270)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0x96EBF30)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET UNITYSDK_OFFSET(0x96E5700)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x96EBF80)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET UNITYSDK_OFFSET(0x96EBD20)
#define RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x96EBFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_AsyncCreateContext_TypeDefinitionIndex = 49029;

	class FiveDimManager_AsyncCreateContext : public ::System::Object
	{
	public:
		::System::Action* OnCreateFinishAction; // 0x10
		::RPG::Client::FiveDimGameInstance* GameInstance; // 0x18
		::RPG::PoolList_1<::Class_1_79F4C97127452753*>* PendingCreateNodes; // 0x20
		::Class_3_1A92845FAFA5EC77* Services; // 0x28
		::System::Int32 CreateIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::FiveDimGameInstance* instance, ::Class_3_1A92845FAFA5EC77* services, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_3_1A92845FAFA5EC77*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_INIT_OFFSET))(this, instance, services, onFinish);
		}

		::System::Void OnCreateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT_ONCREATEFINISH_OFFSET))(this);
		}

		::System::Void _BuildCreateList(::System::UInt32 configID, ::Class_3_1A92845FAFA5EC77* services)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ASYNCCREATECONTEXT__BUILDCREATELIST_OFFSET))(this, configID, services);
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
