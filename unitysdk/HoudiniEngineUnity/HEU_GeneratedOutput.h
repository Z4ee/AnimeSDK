#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x8C5A9A0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET UNITYSDK_OFFSET(0x8C51A90)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET UNITYSDK_OFFSET(0x8C50B90)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x8C5A6B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x8C4ED40)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET UNITYSDK_OFFSET(0x8C50D10)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x8C519B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x8C3CF30)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C5A1E0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x8C59EA0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET UNITYSDK_OFFSET(0x8C407F0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x8C5A4E0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x8C5A3A0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET UNITYSDK_OFFSET(0x8C5A130)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x8C59EC0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x8C59EB0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x8C38990)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C3B0E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneratedOutput_TypeDefinitionIndex = 43494;

	class HEU_GeneratedOutput : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_GeneratedOutputData* _outputData; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>* _childOutputs; // 0x18
		::System::Boolean isInstancer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET))(this);
		}

		::System::Void set_IsInstancer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET))(this, value);
		}

		static ::System::Void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutput* output)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET))(output);
		}

		static ::System::Void ResetMaterialOverrides_1(::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET))(outputData);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetGeneratedMaterialsForGameObject(::HoudiniEngineUnity::HEU_GeneratedOutput* output, ::UnityEngine::GameObject* inGameObject)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET))(output, inGameObject);
		}

		static ::System::Boolean HasLODGroup(::HoudiniEngineUnity::HEU_GeneratedOutput* output)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET))(output);
		}

		static ::System::Boolean IsOutputUsingMaterial(::UnityEngine::Material* checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutput* output)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET))(checkMaterial, output);
		}

		static ::System::Boolean IsOutputDataUsingMaterial(::UnityEngine::Material* checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET))(checkMaterial, outputData);
		}

		static ::System::Void ClearGeneratedMaterialReferences(::HoudiniEngineUnity::HEU_GeneratedOutputData* generatedOutputData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET))(generatedOutputData);
		}

		static ::System::Void DestroyAllGeneratedColliders(::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET))(outputData);
		}

		static ::System::Void DestroyGeneratedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET))(generatedOutput);
		}

		static ::System::Void DestroyGeneratedOutputChildren(::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET))(generatedOutput);
		}

		static ::System::Void DestroyGeneratedOutputData(::HoudiniEngineUnity::HEU_GeneratedOutputData* generatedOutputData, ::System::Boolean bDontDeletePersistantResources)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET))(generatedOutputData, bDontDeletePersistantResources);
		}

		static ::System::Void ClearMaterialsNoLongerUsed(::Il2CppArray<::UnityEngine::Material*>* materialsToCheck, ::Il2CppArray<::UnityEngine::Material*>* materialsInUse)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET))(materialsToCheck, materialsInUse);
		}

		static ::System::Void CopyMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* sourceOutputData, ::HoudiniEngineUnity::HEU_GeneratedOutputData* destOutputData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET))(sourceOutputData, destOutputData);
		}

		::System::Void WriteOutputToAssetCache(::UnityEngine::GameObject* parentObject, ::System::String* outputPath, ::System::Boolean bIsInstancer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET))(this, parentObject, outputPath, bIsInstancer);
		}

		static ::System::Void BakeGameObjectComponents(::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::System::String* assetName, ::System::String* outputPath, ::System::Boolean bIsInstancer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET))(sourceGO, targetGO, assetName, outputPath, bIsInstancer);
		}
	};
}
