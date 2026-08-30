#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_InputHDAInfo; }
namespace HoudiniEngineUnity { class HEU_InputInterface; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_InputObjectInfo; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIASSETS_OFFSET UNITYSDK_OFFSET(0x11A62610)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIOBJECTS_OFFSET UNITYSDK_OFFSET(0x11A639C0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETCHILDRENTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x11A462E0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x11A66240)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACEBYTYPE_OFFSET UNITYSDK_OFFSET(0x11A66350)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_1_OFFSET UNITYSDK_OFFSET(0x11A667E0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x11A665A0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_REGISTERINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x11A4D9F0)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UNREGISTERINPUTINTERFACE_OFFSET UNITYSDK_OFFSET(0x11A66510)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UPLOADINPUTOBJECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A64900)
#define HOUDINIENGINEUNITY_HEU_INPUTUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A668A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputUtility_TypeDefinitionIndex = 39357;

	class HEU_InputUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>** StaticGet__inputInterfaces()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_InputUtility_TypeDefinitionIndex)->GetStaticField(0x57410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetHighestPriority()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETHIGHESTPRIORITY_OFFSET))();
		}

		static ::System::Void RegisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_InputInterface*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_REGISTERINPUTINTERFACE_OFFSET))(a1);
		}

		static ::System::Void UnregisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_InputInterface*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UNREGISTERINPUTINTERFACE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterfaceByType(::System::Type* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACEBYTYPE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::UnityEngine::GameObject* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface_1(::HoudiniEngineUnity::HEU_InputObjectInfo* a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputInterface*(*)(::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETINPUTINTERFACE_1_OFFSET))(a1);
		}

		static ::System::Boolean CreateInputNodeWithMultiObjects(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*& a4, ::System::Collections::Generic::List_1<::System::Int32>*& a5, ::HoudiniEngineUnity::HEU_InputNode* a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIOBJECTS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean CreateInputNodeWithMultiAssets(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Int32& a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*& a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Int32&, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*&, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_CREATEINPUTNODEWITHMULTIASSETS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean UploadInputObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_InputObjectInfo* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputObjectInfo*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_UPLOADINPUTOBJECTTRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetChildrenTransforms(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTUTILITY_GETCHILDRENTRANSFORMS_OFFSET))(a1, a2);
		}
	};
}
