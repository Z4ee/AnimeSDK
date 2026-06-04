#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17ED4090)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET UNITYSDK_OFFSET(0x17ECF0B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET UNITYSDK_OFFSET(0x17ECE3B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x17ED3DD0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x17ECC4C0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET UNITYSDK_OFFSET(0x17ECE500)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x17ECF050)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x17EB1C40)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17ED3920)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x17ED3750)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET UNITYSDK_OFFSET(0x17EB4D50)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x17ED4260)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x17ED3C00)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x17ED3AD0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET UNITYSDK_OFFSET(0x17ED3870)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x17ED3770)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x17ED3760)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x17EAEA60)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA1B70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneratedOutput_TypeDefinitionIndex = 37424;

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

		::System::Void set_IsInstancer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET))(this, a1);
		}

		static ::System::Void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutput* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET))(a1);
		}

		static ::System::Void ResetMaterialOverrides_1(::HoudiniEngineUnity::HEU_GeneratedOutputData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetGeneratedMaterialsForGameObject(::HoudiniEngineUnity::HEU_GeneratedOutput* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasLODGroup(::HoudiniEngineUnity::HEU_GeneratedOutput* a1)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET))(a1);
		}

		static ::System::Boolean IsOutputUsingMaterial(::UnityEngine::Material* a1, ::HoudiniEngineUnity::HEU_GeneratedOutput* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsOutputDataUsingMaterial(::UnityEngine::Material* a1, ::HoudiniEngineUnity::HEU_GeneratedOutputData* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void ClearGeneratedMaterialReferences(::HoudiniEngineUnity::HEU_GeneratedOutputData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET))(a1);
		}

		static ::System::Void DestroyAllGeneratedColliders(::HoudiniEngineUnity::HEU_GeneratedOutputData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET))(a1);
		}

		static ::System::Void DestroyGeneratedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET))(a1);
		}

		static ::System::Void DestroyGeneratedOutputChildren(::HoudiniEngineUnity::HEU_GeneratedOutput* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET))(a1);
		}

		static ::System::Void DestroyGeneratedOutputData(::HoudiniEngineUnity::HEU_GeneratedOutputData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET))(a1, a2);
		}

		static ::System::Void ClearMaterialsNoLongerUsed(::Il2CppArray<::UnityEngine::Material*>* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET))(a1, a2);
		}

		static ::System::Void CopyMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* a1, ::HoudiniEngineUnity::HEU_GeneratedOutputData* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET))(a1, a2);
		}

		::System::Void WriteOutputToAssetCache(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void BakeGameObjectComponents(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutput* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_GeneratedOutput*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
