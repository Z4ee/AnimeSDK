#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_BAKEGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1503BEF0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARGENERATEDMATERIALREFERENCES_OFFSET UNITYSDK_OFFSET(0x15036D20)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_CLEARMATERIALSNOLONGERUSED_OFFSET UNITYSDK_OFFSET(0x15036020)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_COPYMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1503BC30)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYALLGENERATEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x15034140)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTCHILDREN_OFFSET UNITYSDK_OFFSET(0x15036170)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x15036CC0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_DESTROYGENERATEDOUTPUT_OFFSET UNITYSDK_OFFSET(0x15018410)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GETGENERATEDMATERIALSFORGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1503B780)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_GET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x1503B5B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_HASLODGROUP_OFFSET UNITYSDK_OFFSET(0x1501B400)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1503C0C0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTDATAUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1503BA60)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_ISOUTPUTUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1503B930)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_1_OFFSET UNITYSDK_OFFSET(0x1503B6D0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_RESETMATERIALOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1503B5D0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_SET_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x1503B5C0)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT_WRITEOUTPUTTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x15014D00)
#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x150072A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneratedOutput_TypeDefinitionIndex = 38232;

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
