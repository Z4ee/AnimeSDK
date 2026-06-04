#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetTask_BuildType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task_TaskResult.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_CookedEventData; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_ReloadEventData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_ASSETTASK_COMPLETETASK_OFFSET UNITYSDK_OFFSET(0x17EA7080)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x17EA7250)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x17EA72D0)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17EA71E0)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_DOTASK_OFFSET UNITYSDK_OFFSET(0x17EA6AA0)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_GETTASKSESSION_OFFSET UNITYSDK_OFFSET(0x17EA69F0)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK_KILLTASK_OFFSET UNITYSDK_OFFSET(0x17EA6F20)
#define HOUDINIENGINEUNITY_HEU_ASSETTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA7350)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetTask_TypeDefinitionIndex = 37639;

	class HEU_AssetTask : public ::HoudiniEngineUnity::HEU_Task
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* _asset; // 0x30
		::System::String* _assetPath; // 0x38
		::HoudiniEngineUnity::HEU_AssetTask_BuildType _buildType; // 0x40
		::System::Boolean _buildResult; // 0x44
		::UnityEngine::Vector3 _position; // 0x48
		::System::Int64 _forceSessionID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetTaskSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_GETTASKSESSION_OFFSET))(this);
		}

		::System::Void DoTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_DOTASK_OFFSET))(this);
		}

		::System::Void KillTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_KILLTASK_OFFSET))(this);
		}

		::System::Void CompleteTask(::HoudiniEngineUnity::HEU_Task_TaskResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_Task_TaskResult))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_COMPLETETASK_OFFSET))(this, a1);
		}

		::System::Void CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CookCompletedCallback_1(::HoudiniEngineUnity::HEU_CookedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_CookedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_1_OFFSET))(this, a1);
		}

		::System::Void CookCompletedCallback_2(::HoudiniEngineUnity::HEU_ReloadEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ReloadEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETTASK_COOKCOMPLETEDCALLBACK_2_OFFSET))(this, a1);
		}
	};
}
