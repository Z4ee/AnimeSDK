#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GroupType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_License.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RSTOrder.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SessionData; }
namespace HoudiniEngineUnity { class HEU_SessionManager_CreateSessionFromTypeDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKANDCLOSEEXISTINGSESSION_OFFSET UNITYSDK_OFFSET(0x8CB6970)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKVERSIONMATCH_OFFSET UNITYSDK_OFFSET(0x8CB7CA0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLEARCONNECTIONERROR_OFFSET UNITYSDK_OFFSET(0x8CB7D20)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEALLSESSIONS_OFFSET UNITYSDK_OFFSET(0x8CB75B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB7490)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTPIPE_OFFSET UNITYSDK_OFFSET(0x8CB7290)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSOCKET_OFFSET UNITYSDK_OFFSET(0x8CB7140)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTPIPESESSION_OFFSET UNITYSDK_OFFSET(0x8CB6EB0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSOCKETSESSION_OFFSET UNITYSDK_OFFSET(0x8CB6D40)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATECUSTOMSESSION_OFFSET UNITYSDK_OFFSET(0x8CB6C00)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATEINPROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x8CB6830)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPE_OFFSET UNITYSDK_OFFSET(0x8CB55D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x8CB5520)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTPIPESESSION_OFFSET UNITYSDK_OFFSET(0x8CB6650)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSOCKETSESSION_OFFSET UNITYSDK_OFFSET(0x8CB6A80)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDCHILDNODELIST_OFFSET UNITYSDK_OFFSET(0x8CB9010)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTLISTMEMORYSAFE_OFFSET UNITYSDK_OFFSET(0x8CB90C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTTRANSFORMSMEMORYSAFE_OFFSET UNITYSDK_OFFSET(0x8CB91D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCONNECTIONERROR_OFFSET UNITYSDK_OFFSET(0x8CB4230)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCURRENTLICENSE_OFFSET UNITYSDK_OFFSET(0x8CB84D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB5680)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x8CB8BB0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPNAMES_OFFSET UNITYSDK_OFFSET(0x8CB87F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETHOUDINIPATHONMACOS_OFFSET UNITYSDK_OFFSET(0x8CB7F50)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETLASTSESSIONERROR_OFFSET UNITYSDK_OFFSET(0x8CB67C0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODEINPUTNAME_OFFSET UNITYSDK_OFFSET(0x8CB8E60)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODENAME_OFFSET UNITYSDK_OFFSET(0x8CB8CD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETORCREATEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB62D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x8CB7900)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONINFO_OFFSET UNITYSDK_OFFSET(0x8CB7970)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONWITHID_OFFSET UNITYSDK_OFFSET(0x8CB5A10)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRINGVALUESFROMSTRINGINDICES_OFFSET UNITYSDK_OFFSET(0x8CB8650)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x8CB8570)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETUNIQUEMATERIALSHOPNAME_OFFSET UNITYSDK_OFFSET(0x8CB9310)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INITIALIZEDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB73D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INTERNALVALIDATESCENEASSETS_OFFSET UNITYSDK_OFFSET(0x8CB60B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_ISHARSPROCESSRUNNING_OFFSET UNITYSDK_OFFSET(0x8CB7D30)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x8CB5B10)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSESSIONFROMHIP_OFFSET UNITYSDK_OFFSET(0x8CB7DD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSTOREDDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB5740)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENHOUDINI_OFFSET UNITYSDK_OFFSET(0x8CB7F60)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENSESSIONINHOUDINI_OFFSET UNITYSDK_OFFSET(0x8CB80E0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RECREATEDEFAULTSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x8CB7020)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_REGISTERSESSION_OFFSET UNITYSDK_OFFSET(0x8CB5800)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RESTARTSESSION_OFFSET UNITYSDK_OFFSET(0x8CB79F0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVEALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x8CB58D0)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVESESSIONTOHIP_OFFSET UNITYSDK_OFFSET(0x8CB7E90)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_UNREGISTERSESSION_OFFSET UNITYSDK_OFFSET(0x8CB5980)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_VALIDATEPLUGINSESSION_OFFSET UNITYSDK_OFFSET(0x8CB7C20)
#define HOUDINIENGINEUNITY_HEU_SESSIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CB9690)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionManager_TypeDefinitionIndex = 43648;

	class HEU_SessionManager : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_SessionBase** StaticGet__defaultSession()
		{
			return (::HoudiniEngineUnity::HEU_SessionBase**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x43570);
		}
		static ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate** StaticGet__createSessionFromTypeDelegate()
		{
			return (::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x43578);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*>** StaticGet__sessionMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionManager_TypeDefinitionIndex)->GetStaticField(0x43580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER__CCTOR_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionObject()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONOBJECT_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionFromType(::System::Type* type)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATESESSIONFROMTYPE_OFFSET))(type);
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetDefaultSession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETDEFAULTSESSION_OFFSET))();
		}

		static ::System::Void RegisterSession(::System::Int64 sessionID, ::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::System::Int64, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_REGISTERSESSION_OFFSET))(sessionID, session);
		}

		static ::System::Void UnregisterSession(::System::Int64 sessionID)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_UNREGISTERSESSION_OFFSET))(sessionID);
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetSessionWithID(::System::Int64 sessionID)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONWITHID_OFFSET))(sessionID);
		}

		static ::System::Void SaveAllSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVEALLSESSIONDATA_OFFSET))();
		}

		static ::System::Void LoadAllSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADALLSESSIONDATA_OFFSET))();
		}

		static ::System::Void InternalValidateSceneAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INTERNALVALIDATESCENEASSETS_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionBase* GetOrCreateDefaultSession(::System::Boolean bNotifyUserError)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETORCREATEDEFAULTSESSION_OFFSET))(bNotifyUserError);
		}

		static ::System::Boolean CreateInProcessSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATEINPROCESSSESSION_OFFSET))();
		}

		static ::System::Boolean CreateThriftSocketSession(::System::String* hostName, ::System::Int32 serverPort, ::System::Boolean autoClose, ::System::Single timeout, ::System::Boolean logError)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTSOCKETSESSION_OFFSET))(hostName, serverPort, autoClose, timeout, logError);
		}

		static ::System::Boolean CreateThriftPipeSession(::System::String* pipeName, ::System::Boolean autoClose, ::System::Single timeout, ::System::Boolean logError)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATETHRIFTPIPESESSION_OFFSET))(pipeName, autoClose, timeout, logError);
		}

		static ::System::Boolean CreateCustomSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CREATECUSTOMSESSION_OFFSET))();
		}

		static ::System::Boolean ConnectThriftSocketSession(::System::String* hostName, ::System::Int32 serverPort, ::System::Boolean autoClose, ::System::Single timeout)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTSOCKETSESSION_OFFSET))(hostName, serverPort, autoClose, timeout);
		}

		static ::System::Boolean ConnectThriftPipeSession(::System::String* pipeName, ::System::Boolean autoClose, ::System::Single timeout)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTTHRIFTPIPESESSION_OFFSET))(pipeName, autoClose, timeout);
		}

		static ::System::Void RecreateDefaultSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RECREATEDEFAULTSESSIONDATA_OFFSET))();
		}

		static ::System::Boolean ConnectSessionSyncUsingThriftSocket(::System::String* hostName, ::System::Int32 serverPort, ::System::Boolean autoClose, ::System::Single timeout, ::System::Boolean logError)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTSOCKET_OFFSET))(hostName, serverPort, autoClose, timeout, logError);
		}

		static ::System::Boolean ConnectSessionSyncUsingThriftPipe(::System::String* pipeName, ::System::Boolean autoClose, ::System::Single timeout, ::System::Boolean logError)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CONNECTSESSIONSYNCUSINGTHRIFTPIPE_OFFSET))(pipeName, autoClose, timeout, logError);
		}

		static ::System::Boolean InitializeDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_INITIALIZEDEFAULTSESSION_OFFSET))();
		}

		static ::System::Boolean CloseDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEDEFAULTSESSION_OFFSET))();
		}

		static ::System::Void CloseAllSessions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLOSEALLSESSIONS_OFFSET))();
		}

		static ::System::Void CheckAndCloseExistingSession()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKANDCLOSEEXISTINGSESSION_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_SessionData* GetSessionData()
		{
			return ((::HoudiniEngineUnity::HEU_SessionData*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONDATA_OFFSET))();
		}

		static ::System::String* GetSessionInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSESSIONINFO_OFFSET))();
		}

		static ::System::Boolean LoadStoredDefaultSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSTOREDDEFAULTSESSION_OFFSET))();
		}

		static ::System::Boolean RestartSession()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_RESTARTSESSION_OFFSET))();
		}

		static ::System::Boolean ValidatePluginSession(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_VALIDATEPLUGINSESSION_OFFSET))(session);
		}

		static ::System::String* GetLastSessionError()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETLASTSESSIONERROR_OFFSET))();
		}

		static ::System::Boolean CheckVersionMatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CHECKVERSIONMATCH_OFFSET))();
		}

		static ::System::Boolean ClearConnectionError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_CLEARCONNECTIONERROR_OFFSET))();
		}

		static ::System::String* GetConnectionError(::System::Boolean clear)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCONNECTIONERROR_OFFSET))(clear);
		}

		static ::System::Boolean IsHARSProcessRunning(::System::Int32 processID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_ISHARSPROCESSRUNNING_OFFSET))(processID);
		}

		static ::System::Boolean LoadSessionFromHIP(::System::Boolean bCookNodes, ::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_LOADSESSIONFROMHIP_OFFSET))(bCookNodes, session);
		}

		static ::System::Boolean SaveSessionToHIP(::System::Boolean bLockNodes, ::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_SAVESESSIONTOHIP_OFFSET))(bLockNodes, session);
		}

		static ::System::String* GetHoudiniPathOnMacOS(::System::String* houdiniPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETHOUDINIPATHONMACOS_OFFSET))(houdiniPath);
		}

		static ::System::Boolean OpenHoudini(::System::String* args)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENHOUDINI_OFFSET))(args);
		}

		static ::System::Boolean OpenSessionInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_OPENSESSIONINHOUDINI_OFFSET))(session);
		}

		static ::HoudiniEngineUnity::HAPI_License GetCurrentLicense(::System::Boolean bLogError)
		{
			return ((::HoudiniEngineUnity::HAPI_License(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCURRENTLICENSE_OFFSET))(bLogError);
		}

		static ::System::String* GetString(::System::Int32 stringHandle, ::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::String*(*)(::System::Int32, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRING_OFFSET))(stringHandle, session);
		}

		static ::Il2CppArray<::System::String*>* GetStringValuesFromStringIndices(::Il2CppArray<::System::Int32>* strIndices)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETSTRINGVALUESFROMSTRINGINDICES_OFFSET))(strIndices);
		}

		static ::Il2CppArray<::System::String*>* GetGroupNames(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Int32 partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::System::Boolean isInstanced)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_GroupType, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPNAMES_OFFSET))(session, nodeID, partID, groupType, isInstanced);
		}

		static ::System::Boolean GetGroupMembership(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Int32 partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::System::String* groupName, ::Il2CppArray<::System::Int32>*& membership, ::System::Boolean isInstanced)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_GroupType, ::System::String*, ::Il2CppArray<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETGROUPMEMBERSHIP_OFFSET))(session, nodeID, partID, groupType, groupName, membership, isInstanced);
		}

		static ::System::String* GetNodeName(::System::Int32 nodeID, ::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::String*(*)(::System::Int32, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODENAME_OFFSET))(nodeID, session);
		}

		static ::System::Boolean GetNodeInputName(::System::Int32 nodeID, ::System::Int32 inputIndex, ::System::String*& inputName)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETNODEINPUTNAME_OFFSET))(nodeID, inputIndex, inputName);
		}

		static ::System::Boolean GetComposedChildNodeList(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 parentNodeID, ::System::Int32 nodeTypeFilter, ::System::Int32 nodeFlagFilter, ::System::Boolean bRecursive, ::Il2CppArray<::System::Int32>*& childNodeIDs)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDCHILDNODELIST_OFFSET))(session, parentNodeID, nodeTypeFilter, nodeFlagFilter, bRecursive, childNodeIDs);
		}

		static ::System::Boolean GetComposedObjectListMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>* objectInfos, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTLISTMEMORYSAFE_OFFSET))(session, nodeID, objectInfos, start, length);
		}

		static ::System::Boolean GetComposedObjectTransformsMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>* transforms, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_RSTOrder, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETCOMPOSEDOBJECTTRANSFORMSMEMORYSAFE_OFFSET))(session, nodeID, rstOrder, transforms, start, length);
		}

		static ::System::String* GetUniqueMaterialShopName(::System::Int32 assetID, ::System::Int32 materialID)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONMANAGER_GETUNIQUEMATERIALSHOPNAME_OFFSET))(assetID, materialID);
		}
	};
}
