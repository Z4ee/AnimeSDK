#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_ThreadedTask; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x1B15C580)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B15BF50)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B15BF60)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B15BF40)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B15BF80)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x1B15C680)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1B15BF70)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B15BF90)
#define HOUDINIENGINEUNITY_HEU_THREADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B15C780)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadManager_TypeDefinitionIndex = 39309;

	class HEU_ThreadManager : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_ThreadManager** StaticGet__instance()
		{
			return (::HoudiniEngineUnity::HEU_ThreadManager**)Il2CppClass::FromTypeDefinitionIndex(HEU_ThreadManager_TypeDefinitionIndex)->GetStaticField(0x5B360);
		}
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _pendingAdd; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _pendingRemove; // 0x18
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _tasks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_ThreadManager* get_Instance()
		{
			return ((::HoudiniEngineUnity::HEU_ThreadManager*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_CREATEINSTANCE_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_FINALIZE_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_REGISTER_OFFSET))(this);
		}

		::System::Void Unregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_UNREGISTER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void AddTask(::HoudiniEngineUnity::HEU_ThreadedTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTask*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_ADDTASK_OFFSET))(this, a1);
		}

		::System::Void RemoveTask(::HoudiniEngineUnity::HEU_ThreadedTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTask*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADMANAGER_REMOVETASK_OFFSET))(this, a1);
		}
	};
}
