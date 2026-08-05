#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectReadyFlags.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_C3F14E7E9EA24BAC.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_28F0414D4F296993;
class Class_3_057F67F600F50994;
class Class_3_3FF857A0877EA521;
namespace Foundation::ViewObject { class ViewObject; }
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADDREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x1503CAE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADD_OFFSET UNITYSDK_OFFSET(0x1503C4F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ENABLE_OFFSET UNITYSDK_OFFSET(0x1503C8C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_FINDASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x1503D480)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x1503C590)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_1_OFFSET UNITYSDK_OFFSET(0x150401B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_OFFSET UNITYSDK_OFFSET(0x15040330)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTBYGRAPHID_OFFSET UNITYSDK_OFFSET(0x1503EC00)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTSBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x1503DFF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETENTITYHANDLE_OFFSET UNITYSDK_OFFSET(0x150404A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETGROUPANDMEMID_OFFSET UNITYSDK_OFFSET(0x1503D090)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETMETAFLAGS_OFFSET UNITYSDK_OFFSET(0x1503DBE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1503CE30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x15040520)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1503CD80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASALL_OFFSET UNITYSDK_OFFSET(0x1503C4A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASANY_OFFSET UNITYSDK_OFFSET(0x1503C450)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1503C680)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASHREADYFLAGS_OFFSET UNITYSDK_OFFSET(0x1503CCC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISGROUPVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1503F930)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISREADY_OFFSET UNITYSDK_OFFSET(0x1503CA20)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISVALID_OFFSET UNITYSDK_OFFSET(0x1503C970)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVEREADYREQUIRE_OFFSET UNITYSDK_OFFSET(0x1503CBA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1503C540)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1503FDB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENTINSTANT_OFFSET UNITYSDK_OFFSET(0x1503FAF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_1_OFFSET UNITYSDK_OFFSET(0x1503EA90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1503DC90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYADDPROXY_OFFSET UNITYSDK_OFFSET(0x1503C730)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x1503D5B0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETBASICDATA_OFFSET UNITYSDK_OFFSET(0x15040840)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPANDMEMID_OFFSET UNITYSDK_OFFSET(0x1503CEF0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPID_OFFSET UNITYSDK_OFFSET(0x1503D220)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETMEMBERID_OFFSET UNITYSDK_OFFSET(0x1503D3A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETOWNERGROUP_OFFSET UNITYSDK_OFFSET(0x1503F640)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTASSOCIATEDENTITY_OFFSET UNITYSDK_OFFSET(0x150406A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTBYENTITY_OFFSET UNITYSDK_OFFSET(0x15040770)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1503D630)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTHANDLE_OFFSET UNITYSDK_OFFSET(0x15040590)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTINITPOSROT_OFFSET UNITYSDK_OFFSET(0x1503DAA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTPOSROT_OFFSET UNITYSDK_OFFSET(0x1503D960)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectExtension_TypeDefinitionIndex = 49958;

	class ViewObjectExtension : public ::System::Object
	{
	public:
		static ::System::Boolean HasAny(::Foundation::ViewObject::EViewObjectComponentFlags flag, ::Foundation::ViewObject::EViewObjectComponentFlags flagCheck)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EViewObjectComponentFlags, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASANY_OFFSET))(flag, flagCheck);
		}

		static ::System::Boolean HasAll(::Foundation::ViewObject::EViewObjectComponentFlags flag, ::Foundation::ViewObject::EViewObjectComponentFlags flagCheck)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EViewObjectComponentFlags, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASALL_OFFSET))(flag, flagCheck);
		}

		static ::System::Void Add(::Foundation::ViewObject::EViewObjectComponentFlags& flag, ::Foundation::ViewObject::EViewObjectComponentFlags rFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::EViewObjectComponentFlags&, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADD_OFFSET))(flag, rFlag);
		}

		static ::System::Void Remove(::Foundation::ViewObject::EViewObjectComponentFlags& flag, ::Foundation::ViewObject::EViewObjectComponentFlags rFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::EViewObjectComponentFlags&, ::Foundation::ViewObject::EViewObjectComponentFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVE_OFFSET))(flag, rFlag);
		}

		static ::Foundation::ViewObject::ViewObjectManager* GetContainer(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::ViewObjectManager*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCONTAINER_OFFSET))(handle);
		}

		static ::System::Boolean HasComponent(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Int64 componentId)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASCOMPONENT_OFFSET))(handle, componentId);
		}

		static ::System::Boolean TryAddProxy(::Foundation::ViewObject::ViewObjectHandle handle, ::System::IDisposable* disposable, ::System::Boolean tryCreateComp)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::IDisposable*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYADDPROXY_OFFSET))(handle, disposable, tryCreateComp);
		}

		static ::System::Void Enable(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ENABLE_OFFSET))(handle, value);
		}

		static ::System::Boolean IsValid(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISVALID_OFFSET))(handle);
		}

		static ::System::Boolean IsReady(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISREADY_OFFSET))(handle);
		}

		static ::System::Void AddReadyRequire(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags addFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ADDREADYREQUIRE_OFFSET))(handle, addFlag);
		}

		static ::System::Void RemoveReadyRequire(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags removeFlag)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_REMOVEREADYREQUIRE_OFFSET))(handle, removeFlag);
		}

		static ::System::Boolean HashReadyFlags(::Foundation::ViewObject::ViewObjectHandle handle, ::Foundation::ViewObject::EViewObjectReadyFlags target)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::EViewObjectReadyFlags))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_HASHREADYFLAGS_OFFSET))(handle, target);
		}

		static ::Foundation::ViewObject::ViewObject* GetViewObject(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::ViewObject*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECT_OFFSET))(handle);
		}

		static ::System::UInt32 GetRuntimeID(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::UInt32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETRUNTIMEID_OFFSET))(handle);
		}

		static ::System::Boolean TryGetGroupAndMemID(::Foundation::ViewObject::ViewObjectHandle handle, ::System::UInt32& groupID, ::System::UInt32& memberID)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPANDMEMID_OFFSET))(handle, groupID, memberID);
		}

		static ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetGroupAndMemID(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETGROUPANDMEMID_OFFSET))(handle);
		}

		static ::System::Boolean TryGetGroupID(::Foundation::ViewObject::ViewObjectHandle handle, ::System::UInt32& groupID)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETGROUPID_OFFSET))(handle, groupID);
		}

		static ::System::UInt32 TryGetMemberId(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::UInt32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETMEMBERID_OFFSET))(handle);
		}

		static ::MoleMole::EntityHandle FindAssociatedEntity(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_FINDASSOCIATEDENTITY_OFFSET))(handle);
		}

		static ::System::Boolean TryGetAssociatedEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::MoleMole::EntityHandle& entity)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETASSOCIATEDENTITY_OFFSET))(handle, entity);
		}

		static ::System::Boolean TryGetViewObjectEntityPosRot(::Foundation::ViewObject::ViewObjectHandle handle, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTENTITYPOSROT_OFFSET))(handle, position, rotation);
		}

		static ::System::Boolean TryGetViewObjectPosRot(::Foundation::ViewObject::ViewObjectHandle handle, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTPOSROT_OFFSET))(handle, position, rotation);
		}

		static ::System::Boolean TryGetViewObjectInitPosRot(::Foundation::ViewObject::ViewObjectHandle handle, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& rotation)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTINITPOSROT_OFFSET))(handle, position, rotation);
		}

		static ::Foundation::ViewObject::EViewObjectMetaFlags GetMetaFlags(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::Foundation::ViewObject::EViewObjectMetaFlags(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETMETAFLAGS_OFFSET))(handle);
		}

		static ::System::Void SendEvent(::Foundation::ViewObject::ViewObjectHandle handle, ::Enum_3_49722073307230E6 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Enum_3_49722073307230E6, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_OFFSET))(handle, eventName, suiteInfo);
		}

		static ::System::Void SendEvent_1(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Int32 graphID, ::Enum_3_49722073307230E6 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::Enum_3_49722073307230E6, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENT_1_OFFSET))(handle, graphID, eventName, suiteInfo);
		}

		static ::System::Boolean TryGetOwnerGroup(::Foundation::ViewObject::ViewObjectHandle inHandle, ::Foundation::ViewObject::ViewObjectHandle& handle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETOWNERGROUP_OFFSET))(inHandle, handle);
		}

		static ::System::Boolean IsGroupViewObject(::Foundation::ViewObject::ViewObjectHandle handle, ::Class_3_3FF857A0877EA521*& groupComponent)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Class_3_3FF857A0877EA521*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_ISGROUPVIEWOBJECT_OFFSET))(handle, groupComponent);
		}

		static ::System::Void SendEventInstant(::Foundation::ViewObject::ViewObjectHandle handle, ::Enum_3_49722073307230E6 eventName, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::Enum_3_49722073307230E6, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDEVENTINSTANT_OFFSET))(handle, eventName, suiteInfo);
		}

		static ::System::Void SendCustomEvent(::Foundation::ViewObject::ViewObjectHandle handle, ::System::String* eventName, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>* list, ::Struct_2_C3F14E7E9EA24BAC filter, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::Struct_2_C8DD384065D32AEE>*, ::Struct_2_C3F14E7E9EA24BAC, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_SENDCUSTOMEVENT_OFFSET))(handle, eventName, list, filter, suiteInfo);
		}

		static ::System::Collections::Generic::List_1<::Class_1_28F0414D4F296993*>* GetDFScriptsBySuiteInfo(::Foundation::ViewObject::ViewObjectHandle viewObject, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::System::Boolean includePendingSuiteScripts, ::System::Collections::Generic::List_1<::Class_1_28F0414D4F296993*>* result)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_28F0414D4F296993*>*(*)(::Foundation::ViewObject::ViewObjectHandle, ::Foundation::ViewObject::SuiteInfo, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_28F0414D4F296993*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTSBYSUITEINFO_OFFSET))(viewObject, suiteInfo, includePendingSuiteScripts, result);
		}

		static ::Class_1_28F0414D4F296993* GetDFScriptByGraphID(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::Int32 graphID, ::System::Boolean includePendingSuiteScripts)
		{
			return ((::Class_1_28F0414D4F296993*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETDFSCRIPTBYGRAPHID_OFFSET))(viewObject, graphID, includePendingSuiteScripts);
		}

		static ::Foundation::ViewObject::SuiteInfo GetCurrentSuite(::Foundation::ViewObject::ViewObjectHandle viewObject)
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_OFFSET))(viewObject);
		}

		static ::Foundation::ViewObject::SuiteInfo GetCurrentSuite_1(::Foundation::ViewObject::ViewObjectHandle viewObject, ::System::Boolean& isGroup)
		{
			return ((::Foundation::ViewObject::SuiteInfo(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETCURRENTSUITE_1_OFFSET))(viewObject, isGroup);
		}

		static ::MoleMole::EntityHandle GetEntityHandle(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETENTITYHANDLE_OFFSET))(viewObjectHandle);
		}

		static ::Foundation::ViewObject::ViewObjectHandle GetViewObjectHandle(::Foundation::ViewObject::GroupMemberIdentifier identifier)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_GETVIEWOBJECTHANDLE_OFFSET))(identifier);
		}

		static ::System::Boolean TryGetViewObjectHandle(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::Foundation::ViewObject::ViewObjectHandle& viewObjectHandle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTHANDLE_OFFSET))(identifier, viewObjectHandle);
		}

		static ::System::Boolean TryGetViewObjectAssociatedEntity(::Foundation::ViewObject::GroupMemberIdentifier identifier, ::MoleMole::EntityHandle& entityHandle)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTASSOCIATEDENTITY_OFFSET))(identifier, entityHandle);
		}

		static ::Foundation::ViewObject::ViewObjectHandle TryGetViewObjectByEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETVIEWOBJECTBYENTITY_OFFSET))(entityHandle);
		}

		static ::System::Boolean TryGetBasicData(::Foundation::ViewObject::ViewObjectHandle viewObjectHandle, ::Class_3_057F67F600F50994*& basicData)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::Class_3_057F67F600F50994*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTEXTENSION_TRYGETBASICDATA_OFFSET))(viewObjectHandle, basicData);
		}
	};
}
