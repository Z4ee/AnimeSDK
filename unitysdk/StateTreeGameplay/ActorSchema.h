#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeSchema.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/UnrealTypes/TSubclassOf_1.h"

namespace StateTreeGameplay { class ActorContext; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define STATETREEGAMEPLAY_ACTORSCHEMA_ADDACTORDESC_OFFSET UNITYSDK_OFFSET(0x1E503BF0)
#define STATETREEGAMEPLAY_ACTORSCHEMA_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x1E5046F0)
#define STATETREEGAMEPLAY_ACTORSCHEMA_GETCONTEXTDATADESCS_OFFSET UNITYSDK_OFFSET(0x1E503920)
#define STATETREEGAMEPLAY_ACTORSCHEMA_GET_ACTORDESC_OFFSET UNITYSDK_OFFSET(0x1E5039F0)
#define STATETREEGAMEPLAY_ACTORSCHEMA_GET_CONTEXTACTORCLASS_OFFSET UNITYSDK_OFFSET(0x1E503840)
#define STATETREEGAMEPLAY_ACTORSCHEMA_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x1E504100)
#define STATETREEGAMEPLAY_ACTORSCHEMA_SETCONTEXTREQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x1E5042D0)
#define STATETREEGAMEPLAY_ACTORSCHEMA_UPDATECONTEXTACTORDESC_OFFSET UNITYSDK_OFFSET(0x1E503E90)
#define STATETREEGAMEPLAY_ACTORSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E504A20)
#define STATETREEGAMEPLAY_ACTORSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E503A60)
#define STATETREEGAMEPLAY_ACTORSCHEMA___BASE_GETCONTEXTDATADESCS_OFFSET UNITYSDK_OFFSET(0x1E504A80)
#define STATETREEGAMEPLAY_ACTORSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x1E504A90)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ActorSchema_TypeDefinitionIndex = 89835;

	class ActorSchema : public ::StateTreeCore::StateTreeSchema
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_ActorName()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ActorSchema_TypeDefinitionIndex)->GetStaticField(0x11550);
		}
		::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreeExternalDataDesc>* ContextDataDescs; // 0x38
		::UnrealTypes::TSubclassOf_1<::StateTreeGameplay::ActorContext*> ActorClass; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA__CCTOR_OFFSET))();
		}

		::UnrealTypes::Class* get_ContextActorClass()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_GET_CONTEXTACTORCLASS_OFFSET))(this);
		}

		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> GetContextDataDescs()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_GETCONTEXTDATADESCS_OFFSET))(this);
		}

		::StateTreeCore::StateTreeExternalDataDesc& get_ActorDesc()
		{
			return ((::StateTreeCore::StateTreeExternalDataDesc&(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_GET_ACTORDESC_OFFSET))(this);
		}

		::System::Void AddActorDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_ADDACTORDESC_OFFSET))(this);
		}

		::System::Void UpdateContextActorDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_UPDATECONTEXTACTORDESC_OFFSET))(this);
		}

		::System::Boolean IsStructAllowed(::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_ISSTRUCTALLOWED_OFFSET))(this, scriptStruct);
		}

		static ::System::Boolean SetContextRequirements(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> actorContext, ::StateTreeCore::StateTreeExecutionContext& executionContext)
		{
			return ((::System::Boolean(*)(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_SETCONTEXTREQUIREMENTS_OFFSET))(actorContext, executionContext);
		}

		static ::System::Boolean CollectExternalData(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> actorContext, ::StateTreeCore::StateTreeExecutionContext& executionContext, ::StateTreeCore::StateTree& stateTree, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> externalDataDescs, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> outDataViews)
		{
			return ((::System::Boolean(*)(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA_COLLECTEXTERNALDATA_OFFSET))(actorContext, executionContext, stateTree, externalDataDescs, outDataViews);
		}

		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> __base_GetContextDataDescs()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA___BASE_GETCONTEXTDATADESCS_OFFSET))(this);
		}

		::System::Boolean __base_IsStructAllowed(::UnrealTypes::ScriptStruct* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_ACTORSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET))(this, P0);
		}
	};
}
