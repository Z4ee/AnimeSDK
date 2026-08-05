#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureTilingTreatment.h"
#include "unitysdk/MB2_TextureBakeResults_ResultType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class MB2_TextureBakeResults_CoroutineResult;
class MB_MaterialAndUVRect;
class MB_MultiMaterial;
class MB_MultiMaterialTexArray;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MB2_TEXTUREBAKERESULTS_CONTAINSMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F88F1A0)
#define MB2_TEXTUREBAKERESULTS_CREATEFORMATERIALSONRENDERER_OFFSET UNITYSDK_OFFSET(0x1F88E5F0)
#define MB2_TEXTUREBAKERESULTS_DOANYRESULTMATSUSECONSIDERMESHUVS_OFFSET UNITYSDK_OFFSET(0x1F88F060)
#define MB2_TEXTUREBAKERESULTS_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET UNITYSDK_OFFSET(0x1F88E0E0)
#define MB2_TEXTUREBAKERESULTS_GETCOMBINEDMATERIALFORSUBMESH_OFFSET UNITYSDK_OFFSET(0x1F88E060)
#define MB2_TEXTUREBAKERESULTS_GETCONSIDERMESHUVS_OFFSET UNITYSDK_OFFSET(0x1F88E130)
#define MB2_TEXTUREBAKERESULTS_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1F88F270)
#define MB2_TEXTUREBAKERESULTS_GETSOURCEMATERIALSUSEDBYRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F88E2B0)
#define MB2_TEXTUREBAKERESULTS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F88DF60)
#define MB2_TEXTUREBAKERESULTS_ISMESHANDMATERIALRECTENCLOSEDBYATLASRECT_OFFSET UNITYSDK_OFFSET(0x1F88FAD0)
#define MB2_TEXTUREBAKERESULTS_NUMRESULTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F88E030)
#define MB2_TEXTUREBAKERESULTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F88DFD0)
#define MB2_TEXTUREBAKERESULTS_UPGRADETOCURRENTVERSION_OFFSET UNITYSDK_OFFSET(0x1F88FA70)
#define MB2_TEXTUREBAKERESULTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F88DF70)

inline static constexpr unsigned int MB2_TextureBakeResults_TypeDefinitionIndex = 94462;

class MB2_TextureBakeResults : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 version; // 0x18
	::MB2_TextureBakeResults_ResultType resultType; // 0x1C
	::Il2CppArray<::MB_MaterialAndUVRect*>* materialsAndUVRects; // 0x20
	::Il2CppArray<::MB_MultiMaterial*>* resultMaterials; // 0x28
	::Il2CppArray<::MB_MultiMaterialTexArray*>* resultMaterialsTexArray; // 0x30
	::System::Boolean doMultiMaterial; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS__CTOR_OFFSET))(this);
	}

	static ::System::Int32 get_VERSION()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_GET_VERSION_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_ONENABLE_OFFSET))(this);
	}

	::System::Int32 NumResultMaterials()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_NUMRESULTMATERIALS_OFFSET))(this);
	}

	::UnityEngine::Material* GetCombinedMaterialForSubmesh(::System::Int32 idx)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_GETCOMBINEDMATERIALFORSUBMESH_OFFSET))(this, idx);
	}

	::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::MB2_TextureBakeResults_CoroutineResult* isComplete)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MB2_TextureBakeResults_CoroutineResult*))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET))(this, isComplete);
	}

	::System::Boolean GetConsiderMeshUVs(::System::Int32 idxInSrcMats, ::UnityEngine::Material* srcMaterial)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_GETCONSIDERMESHUVS_OFFSET))(this, idxInSrcMats, srcMaterial);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* GetSourceMaterialsUsedByResultMaterial(::System::Int32 resultMatIdx)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_GETSOURCEMATERIALSUSEDBYRESULTMATERIAL_OFFSET))(this, resultMatIdx);
	}

	static ::MB2_TextureBakeResults* CreateForMaterialsOnRenderer(::Il2CppArray<::UnityEngine::GameObject*>* gos, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* matsOnTargetRenderer)
	{
		return ((::MB2_TextureBakeResults*(*)(::Il2CppArray<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_CREATEFORMATERIALSONRENDERER_OFFSET))(gos, matsOnTargetRenderer);
	}

	::System::Boolean DoAnyResultMatsUseConsiderMeshUVs()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_DOANYRESULTMATSUSECONSIDERMESHUVS_OFFSET))(this);
	}

	::System::Boolean ContainsMaterial(::UnityEngine::Material* m)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_CONTAINSMATERIAL_OFFSET))(this, m);
	}

	::System::String* GetDescription()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_GETDESCRIPTION_OFFSET))(this);
	}

	::System::Void UpgradeToCurrentVersion(::MB2_TextureBakeResults* tbr)
	{
		return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_UPGRADETOCURRENTVERSION_OFFSET))(this, tbr);
	}

	static ::System::Boolean IsMeshAndMaterialRectEnclosedByAtlasRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment tilingTreatment, ::UnityEngine::Rect uvR, ::UnityEngine::Rect sourceMaterialTiling, ::UnityEngine::Rect samplingEncapsulatinRect, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel)
	{
		return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + MB2_TEXTUREBAKERESULTS_ISMESHANDMATERIALRECTENCLOSEDBYATLASRECT_OFFSET))(tilingTreatment, uvR, sourceMaterialTiling, samplingEncapsulatinRect, logLevel);
	}
};
