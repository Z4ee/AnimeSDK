#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
class MB_MultiMaterialTexArray;
class MB_TexArraySlice;
class MB_TexArraySliceRendererMatPair;
class MB_TextureArrayFormatSet;
class MB_TextureArrayResultMaterial;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_TemporaryTexture; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ECE3820)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECE6190)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECE61F0)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ECE61A0)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECE3810)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE3800)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6_TypeDefinitionIndex = 94686;

	class MB_TextureArrays___CreateAtlasesCoroutineSingleResultMaterial_d__6 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* customShaderProperties; // 0x10
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x18
		::MB_AtlasesAndRects* _sliceAtlasesAndRectOutput_5__8; // 0x20
		::System::Collections::Generic::List_1<::MB_TexArraySliceRendererMatPair*>* _srcMatAndObjPairs_5__6; // 0x28
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods; // 0x30
		::MB_MultiMaterialTexArray* resMatConfig; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* texPropNamesToIgnore; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh; // 0x50
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x58
		::System::Collections::Generic::List_1<::MB_TexArraySlice*>* _slicesConfig_5__4; // 0x60
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* _coroutineResult2_5__7; // 0x68
		::Il2CppArray<::MB_TextureArrayFormatSet*>* textureArrayOutputFormats; // 0x70
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult; // 0x78
		::MB_TextureArrayResultMaterial* bakedMatsAndSlicesResMat; // 0x80
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* _generatedTemporaryAtlases_5__3; // 0x88
		::DigitalOpus::MB::Core::MB2_LogLevel _LOG_LEVEL_5__2; // 0x90
		::System::Single maxTimePerFrame; // 0x94
		::System::Int32 _sliceIdx_5__5; // 0x98
		::System::Int32 __1__state; // 0x9C
		::System::Boolean saveAtlasesAsAssets; // 0xA0
		::System::Int32 resMatIdx; // 0xA4

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS___CREATEATLASESCOROUTINESINGLERESULTMATERIAL_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
