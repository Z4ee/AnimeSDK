#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorAsyncLoadMode.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorSubTreeLoadData; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_ATTACHSUBREQUEST_OFFSET UNITYSDK_OFFSET(0x1E5F5E90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GETTOPPARENTLOADITEM_OFFSET UNITYSDK_OFFSET(0x1E5F5F80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_ASYNCHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5F5E50)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_PARENTLOADITEM_OFFSET UNITYSDK_OFFSET(0x1E5F5F60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_SUBTREELOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5F5EF0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x1E5F5E70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E5F6210)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1E5F61B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_ASYNCHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5F5E60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_PARENTLOADITEM_OFFSET UNITYSDK_OFFSET(0x1E5F5F70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_SUBTREELOADDATA_OFFSET UNITYSDK_OFFSET(0x1E5F5F00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_TAGID_OFFSET UNITYSDK_OFFSET(0x1E5F5E80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F6500)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5FF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorAsyncLoadItem_TypeDefinitionIndex = 33221;

	class BehaviorManager_BehaviorAsyncLoadItem : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_HandleIDGen()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_BehaviorAsyncLoadItem_TypeDefinitionIndex)->GetStaticField(0x81B0);
		}
		::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*>* OnTreeReadyCallback; // 0x10
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* behaviorTree; // 0x18
		::System::String* errorString; // 0x20
		::BehaviorDesigner::Runtime::ExternalBehavior* externBehavior; // 0x28
		::UnityEngine::GameObject* gameObject; // 0x30
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* _ParentLoadItem_k__BackingField; // 0x38
		::System::String* gameObjectName; // 0x40
		::System::Action* ExtraOnTreeReadyCallback; // 0x48
		::System::String* loadAssetName; // 0x50
		::System::Action_1<::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*>* asyncLoadFinishCallback; // 0x58
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::System::UInt32>* SubLoadHandles; // 0x60
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSubTreeLoadData* _subTreeLoadData; // 0x68
		::BehaviorDesigner::Runtime::Tasks::GameObjectGetter* Getter; // 0x70
		::BehaviorDesigner::Runtime::Behavior* loadBehavior; // 0x78
		::UnityEngine::Transform* transform; // 0x80
		::System::Int32 _TagID_k__BackingField; // 0x88
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadMode loadWorkMode; // 0x8C
		::System::Int32 loadVersion; // 0x90
		::System::Int32 StartFrame; // 0x94
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle _AsyncHandle_k__BackingField; // 0x98
		::System::Single logTime; // 0xA0
		::System::Single startLoadTime; // 0xA4

		::System::Void _ctor(::System::UInt32 entityID, ::BehaviorDesigner::Runtime::Behavior* loadBehavior, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadMode loadWorkMode, ::BehaviorDesigner::Runtime::ExternalBehavior* externalBehavior)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BehaviorDesigner::Runtime::Behavior*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadMode, ::BehaviorDesigner::Runtime::ExternalBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM__CTOR_OFFSET))(this, entityID, loadBehavior, loadWorkMode, externalBehavior);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM__CCTOR_OFFSET))();
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle get_AsyncHandle()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_ASYNCHANDLE_OFFSET))(this);
		}

		::System::Void set_AsyncHandle(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_ASYNCHANDLE_OFFSET))(this, value);
		}

		::System::Int32 get_TagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_TAGID_OFFSET))(this);
		}

		::System::Void set_TagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_TAGID_OFFSET))(this, value);
		}

		::System::Void AttachSubRequest(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle subQuestHandleID)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_ATTACHSUBREQUEST_OFFSET))(this, subQuestHandleID);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSubTreeLoadData* get_SubTreeLoadData()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSubTreeLoadData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_SUBTREELOADDATA_OFFSET))(this);
		}

		::System::Void set_SubTreeLoadData(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSubTreeLoadData* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSubTreeLoadData*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_SUBTREELOADDATA_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* get_ParentLoadItem()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GET_PARENTLOADITEM_OFFSET))(this);
		}

		::System::Void set_ParentLoadItem(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_SET_PARENTLOADITEM_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* GetTopParentLoadItem()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_GETTOPPARENTLOADITEM_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADITEM_REFRESH_OFFSET))(this);
		}
	};
}
