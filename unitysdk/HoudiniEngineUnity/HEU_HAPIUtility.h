#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionSyncInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TransformEuler.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Viewport.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniAsset_HEU_AssetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITYFORINSTANCE_OFFSET UNITYSDK_OFFSET(0x8C3F950)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x8C3B200)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYMATRIXTOLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C45530)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYWORLDTRANSFROMFROMHOUDINITOUNITY_OFFSET UNITYSDK_OFFSET(0x8C63240)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINI_OFFSET UNITYSDK_OFFSET(0x8C353C0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKASSETNODE_OFFSET UNITYSDK_OFFSET(0x8C62080)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKCURVEASSET_OFFSET UNITYSDK_OFFSET(0x8C62520)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKINPUTASSET_OFFSET UNITYSDK_OFFSET(0x8C62620)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_OFFSET UNITYSDK_OFFSET(0x8C627E0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWCURVEASSET_OFFSET UNITYSDK_OFFSET(0x8C62B40)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWINPUTASSET_OFFSET UNITYSDK_OFFSET(0x8C62B70)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x8C62BB0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C40AF0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESGEOPARTHAVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8C64E20)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESMAPPEDPATHEXIST_OFFSET UNITYSDK_OFFSET(0x8C61740)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_FINDHOUDINIASSETFILEINPATHWITHEXT_OFFSET UNITYSDK_OFFSET(0x8C618F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETASSETINSCENE_OFFSET UNITYSDK_OFFSET(0x8C63110)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETENVIRONMENTPATH_OFFSET UNITYSDK_OFFSET(0x8C613D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x8C63C60)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMQUATFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x8C642D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C640A0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHOUDINIENGINEINSTALLATIONINFO_OFFSET UNITYSDK_OFFSET(0x8C613C0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x8C647C0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIXFROMHAPITRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C638F0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOBJECTINFOS_OFFSET UNITYSDK_OFFSET(0x8C64F10)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPARENTNODEID_OFFSET UNITYSDK_OFFSET(0x8C64EA0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x8C63580)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x8C635D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETREALPATHFROMHFSPATH_OFFSET UNITYSDK_OFFSET(0x8C614D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETSCALE_OFFSET UNITYSDK_OFFSET(0x8C63800)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_INSTANTIATEHDA_OFFSET UNITYSDK_OFFSET(0x8C31650)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISEQUALTOL_OFFSET UNITYSDK_OFFSET(0x8C64A70)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISHOUDINIASSETFILE_OFFSET UNITYSDK_OFFSET(0x8C61810)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISNODEVALIDINHOUDINI_OFFSET UNITYSDK_OFFSET(0x8C63080)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C648D0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSESSIONSYNCEQUAL_OFFSET UNITYSDK_OFFSET(0x8C64DF0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSUPPORTEDPOLYGONTYPE_OFFSET UNITYSDK_OFFSET(0x8C64E80)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISTRANSFORMEQUAL_OFFSET UNITYSDK_OFFSET(0x8C64A90)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISVIEWPORTEQUAL_OFFSET UNITYSDK_OFFSET(0x8C64CC0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADGEOWITHNEWGEOSYNC_OFFSET UNITYSDK_OFFSET(0x8C62BA0)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADHDAFILE_OFFSET UNITYSDK_OFFSET(0x8C61D50)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_1_OFFSET UNITYSDK_OFFSET(0x8C61D40)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_OFFSET UNITYSDK_OFFSET(0x8C61C80)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGERROR_OFFSET UNITYSDK_OFFSET(0x8C61C00)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x8C61B80)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOG_OFFSET UNITYSDK_OFFSET(0x8C61B00)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_PROCESSHOUDINICOOKSTATUS_OFFSET UNITYSDK_OFFSET(0x8C62270)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETANIMATIONCURVETANGENTMODES_OFFSET UNITYSDK_OFFSET(0x8C64E70)
#define HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETMATRIXPOSITION_OFFSET UNITYSDK_OFFSET(0x8C63C40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HAPIUtility_TypeDefinitionIndex = 43536;

	class HEU_HAPIUtility : public ::System::Object
	{
	public:
		static ::System::String* GetHoudiniEngineInstallationInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHOUDINIENGINEINSTALLATIONINFO_OFFSET))();
		}

		static ::System::String* GetEnvironmentPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETENVIRONMENTPATH_OFFSET))();
		}

		static ::System::String* GetRealPathFromHFSPath(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETREALPATHFROMHFSPATH_OFFSET))(inPath);
		}

		static ::System::Boolean DoesMappedPathExist(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESMAPPEDPATHEXIST_OFFSET))(inPath);
		}

		static ::System::Boolean IsHoudiniAssetFile(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISHOUDINIASSETFILE_OFFSET))(filePath);
		}

		static ::System::String* FindHoudiniAssetFileInPathWithExt(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_FINDHOUDINIASSETFILEINPATHWITHEXT_OFFSET))(filePath);
		}

		static ::System::Void Log(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOG_OFFSET))(message);
		}

		static ::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogError(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOGERROR_OFFSET))(message);
		}

		static ::System::String* LocateValidFilePath(::UnityEngine::Object* inObject)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_OFFSET))(inObject);
		}

		static ::System::String* LocateValidFilePath_1(::System::String* assetName, ::System::String* inFilePath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOCATEVALIDFILEPATH_1_OFFSET))(assetName, inFilePath);
		}

		static ::UnityEngine::GameObject* InstantiateHDA(::System::String* filePath, ::UnityEngine::Vector3 initialPosition, ::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bBuildAsync, ::System::Boolean bLoadFromMemory)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector3, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_INSTANTIATEHDA_OFFSET))(filePath, initialPosition, session, bBuildAsync, bLoadFromMemory);
		}

		static ::System::Boolean LoadHDAFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetPath, ::System::Int32& assetLibraryID, ::Il2CppArray<::System::String*>*& assetNames)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Int32&, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADHDAFILE_OFFSET))(session, assetPath, assetLibraryID, assetNames);
		}

		static ::System::Boolean CreateAndCookAssetNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetName, ::System::Boolean bCookTemplatedGeos, ::System::Int32& newAssetID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKASSETNODE_OFFSET))(session, assetName, bCookTemplatedGeos, newAssetID);
		}

		static ::System::Boolean CreateAndCookCurveAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetName, ::System::Boolean bCookTemplatedGeos, ::System::Int32& newAssetID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKCURVEASSET_OFFSET))(session, assetName, bCookTemplatedGeos, newAssetID);
		}

		static ::System::Boolean CreateAndCookInputAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetName, ::System::Boolean bCookTemplatedGeos, ::System::Int32& newAssetID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATEANDCOOKINPUTASSET_OFFSET))(session, assetName, bCookTemplatedGeos, newAssetID);
		}

		static ::System::Boolean CookNodeInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID, ::System::Boolean bCookTemplatedGeos, ::System::String* assetName)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_COOKNODEINHOUDINI_OFFSET))(session, nodeID, bCookTemplatedGeos, assetName);
		}

		static ::System::Boolean ProcessHoudiniCookStatus(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetName)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_PROCESSHOUDINICOOKSTATUS_OFFSET))(session, assetName);
		}

		static ::UnityEngine::GameObject* CreateNewAsset(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType assetType, ::System::String* rootName, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bBuildAsync)
		{
			return ((::UnityEngine::GameObject*(*)(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, ::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWASSET_OFFSET))(assetType, rootName, parentTransform, session, bBuildAsync);
		}

		static ::UnityEngine::GameObject* CreateNewCurveAsset(::System::String* name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bBuildAsync)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWCURVEASSET_OFFSET))(name, parentTransform, session, bBuildAsync);
		}

		static ::UnityEngine::GameObject* CreateNewInputAsset(::System::String* name, ::UnityEngine::Transform* parentTransform, ::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bBuildAsync)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_CREATENEWINPUTASSET_OFFSET))(name, parentTransform, session, bBuildAsync);
		}

		static ::UnityEngine::GameObject* LoadGeoWithNewGeoSync(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::UnityEngine::GameObject*(*)(::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_LOADGEOWITHNEWGEOSYNC_OFFSET))(session);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Transform* inTransform)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYCHILDREN_OFFSET))(inTransform);
		}

		static ::System::Void DestroyGameObject(::UnityEngine::GameObject* gameObect, ::System::Boolean bRegisterUndo)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DESTROYGAMEOBJECT_OFFSET))(gameObect, bRegisterUndo);
		}

		static ::System::Boolean IsNodeValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISNODEVALIDINHOUDINI_OFFSET))(session, nodeID);
		}

		static ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* GetAssetInScene(::System::Int32 assetID)
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAssetRoot*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETASSETINSCENE_OFFSET))(assetID);
		}

		static ::System::Void ApplyWorldTransfromFromHoudiniToUnity(::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::UnityEngine::Transform* unityTransform)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYWORLDTRANSFROMFROMHOUDINITOUNITY_OFFSET))(hapiTransform, unityTransform);
		}

		static ::System::Void ApplyLocalTransfromFromHoudiniToUnity(::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::UnityEngine::Transform* unityTransform)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITY_OFFSET))(hapiTransform, unityTransform);
		}

		static ::System::Void ApplyLocalTransfromFromHoudiniToUnityForInstance(::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::UnityEngine::Transform* unityTransform)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_Transform&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYLOCALTRANSFROMFROMHOUDINITOUNITYFORINSTANCE_OFFSET))(hapiTransform, unityTransform);
		}

		static ::System::Void ApplyMatrixToLocalTransform(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_APPLYMATRIXTOLOCALTRANSFORM_OFFSET))(matrix, transform);
		}

		static ::UnityEngine::Matrix4x4 GetMatrixFromHAPITransform(::HoudiniEngineUnity::HAPI_Transform& hapiTransform, ::System::Boolean bConvertToUnity)
		{
			return ((::UnityEngine::Matrix4x4(*)(::HoudiniEngineUnity::HAPI_Transform&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIXFROMHAPITRANSFORM_OFFSET))(hapiTransform, bConvertToUnity);
		}

		static ::UnityEngine::Quaternion GetQuaternion(::UnityEngine::Matrix4x4& m)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETQUATERNION_OFFSET))(m);
		}

		static ::UnityEngine::Vector3 GetPosition(::UnityEngine::Matrix4x4& m)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPOSITION_OFFSET))(m);
		}

		static ::System::Void SetMatrixPosition(::UnityEngine::Matrix4x4& m, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETMATRIXPOSITION_OFFSET))(m, position);
		}

		static ::UnityEngine::Vector3 GetScale(::UnityEngine::Matrix4x4& m)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETSCALE_OFFSET))(m);
		}

		static ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransformFromMatrix(::UnityEngine::Matrix4x4& mat)
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMFROMMATRIX_OFFSET))(mat);
		}

		static ::HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransform(::UnityEngine::Vector3& p, ::UnityEngine::Vector3& r, ::UnityEngine::Vector3& s)
		{
			return ((::HoudiniEngineUnity::HAPI_TransformEuler(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORM_OFFSET))(p, r, s);
		}

		static ::HoudiniEngineUnity::HAPI_Transform GetHAPITransformQuatFromMatrix(::UnityEngine::Matrix4x4& mat)
		{
			return ((::HoudiniEngineUnity::HAPI_Transform(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETHAPITRANSFORMQUATFROMMATRIX_OFFSET))(mat);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4(::UnityEngine::Vector3& p, ::UnityEngine::Vector3& r, ::UnityEngine::Vector3& s)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETMATRIX4X4_OFFSET))(p, r, s);
		}

		static ::System::Boolean IsSameTransform(::UnityEngine::Matrix4x4& transformMatrix, ::UnityEngine::Vector3& p, ::UnityEngine::Vector3& r, ::UnityEngine::Vector3& s)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSAMETRANSFORM_OFFSET))(transformMatrix, p, r, s);
		}

		static ::System::Boolean IsEqualTol(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISEQUALTOL_OFFSET))(a, b, t);
		}

		static ::System::Boolean IsTransformEqual(::HoudiniEngineUnity::HAPI_Transform& transA, ::HoudiniEngineUnity::HAPI_Transform& transB)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_Transform&, ::HoudiniEngineUnity::HAPI_Transform&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISTRANSFORMEQUAL_OFFSET))(transA, transB);
		}

		static ::System::Boolean IsViewportEqual(::HoudiniEngineUnity::HAPI_Viewport& viewA, ::HoudiniEngineUnity::HAPI_Viewport& viewB)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_Viewport&, ::HoudiniEngineUnity::HAPI_Viewport&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISVIEWPORTEQUAL_OFFSET))(viewA, viewB);
		}

		static ::System::Boolean IsSessionSyncEqual(::HoudiniEngineUnity::HAPI_SessionSyncInfo& syncA, ::HoudiniEngineUnity::HAPI_SessionSyncInfo& syncB)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_SessionSyncInfo&, ::HoudiniEngineUnity::HAPI_SessionSyncInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSESSIONSYNCEQUAL_OFFSET))(syncA, syncB);
		}

		static ::System::Boolean DoesGeoPartHaveAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::String* attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::HoudiniEngineUnity::HAPI_AttributeInfo& attributeInfo)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::HoudiniEngineUnity::HAPI_AttributeInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_DOESGEOPARTHAVEATTRIBUTE_OFFSET))(session, geoID, partID, attrName, owner, attributeInfo);
		}

		static ::System::Void SetAnimationCurveTangentModes(::UnityEngine::AnimationCurve* animCurve, ::System::Collections::Generic::List_1<::System::Int32>* tangentValues)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_SETANIMATIONCURVETANGENTMODES_OFFSET))(animCurve, tangentValues);
		}

		static ::System::Boolean IsSupportedPolygonType(::HoudiniEngineUnity::HAPI_PartType partType)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HAPI_PartType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_ISSUPPORTEDPOLYGONTYPE_OFFSET))(partType);
		}

		static ::System::Int32 GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 nodeID)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETPARENTNODEID_OFFSET))(session, nodeID);
		}

		static ::System::Boolean GetObjectInfos(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetID, ::HoudiniEngineUnity::HAPI_NodeInfo& nodeInfo, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*& objectInfos, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*& objectTransforms)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::Il2CppArray<::HoudiniEngineUnity::HAPI_ObjectInfo>*&, ::Il2CppArray<::HoudiniEngineUnity::HAPI_Transform>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HAPIUTILITY_GETOBJECTINFOS_OFFSET))(session, assetID, nodeInfo, objectInfos, objectTransforms);
		}
	};
}
