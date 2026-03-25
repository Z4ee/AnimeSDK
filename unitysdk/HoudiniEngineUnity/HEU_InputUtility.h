#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputHDAInfo; }
namespace HoudiniEngineUnity { class HEU_InputInterface; }
namespace HoudiniEngineUnity { class HEU_InputObjectInfo; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIASSETS_OFFSET UNITYSDK_OFFSET(0x8467F90)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIOBJECTS_OFFSET UNITYSDK_OFFSET(0x84676E0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x84695D0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACEBYTYPE_OFFSET UNITYSDK_OFFSET(0x84696B0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_1_OFFSET UNITYSDK_OFFSET(0x8469A40)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x84698C0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_REGISTERINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x845C660)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UNREGISTERINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x8469830)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UPLOADINPUTOBJECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8468650)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x8469B00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputUtility_TypeDefinitionIndex = 37830;

	class HEU_InputUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>** StaticGet__inputInterfaces()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_InputUtility_TypeDefinitionIndex)->GetStaticField(0x4DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetHighestPriority()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETHIGHESTPRIORITY_OFFSET))();
		}

		static ::System::Void RegisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_InputInterface*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_REGISTERINPUTINTERFACE_OFFSET))(inputInterface);
		}

		static ::System::Void UnregisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_InputInterface*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UNREGISTERINPUTINTERFACE_OFFSET))(inputInterface);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterfaceByType(::System::Type* type)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACEBYTYPE_OFFSET))(type);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::UnityEngine::GameObject* inputObject)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_OFFSET))(inputObject);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface_1(::HoudiniEngineUnity::HEU_InputObjectInfo* inputObjectInfo)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_1_OFFSET))(inputObjectInfo);
		}

		static ::System::Boolean CreateInputNodeWithMultiObjects(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetID, ::System::Int32& connectMergeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& inputObjects, ::System::Collections::Generic::List_1<::System::Int32>*& inputObjectsConnectedAssetIDs, ::System::Boolean bKeepWorldTransform)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIOBJECTS_OFFSET))(session, assetID, connectMergeID, inputObjects, inputObjectsConnectedAssetIDs, bKeepWorldTransform);
		}

		static ::System::Boolean CreateInputNodeWithMultiAssets(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::System::Int32& connectMergeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& inputAssetInfos, ::System::Boolean bKeepWorldTransform, ::System::Int32 mergeParentID)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIASSETS_OFFSET))(session, parentAsset, connectMergeID, inputAssetInfos, bKeepWorldTransform, mergeParentID);
		}

		static ::System::Boolean UploadInputObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputObjectInfo* inputObject, ::System::Int32 inputNodeID, ::System::Boolean bKeepWorldTransform)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputObjectInfo*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UPLOADINPUTOBJECTTRANSFORM_OFFSET))(session, inputObject, inputNodeID, bKeepWorldTransform);
		}
	};
}
