#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB3_TextureBaker;
class MB_TextureArrayResultMaterial;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }

#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BEC97D0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BECA810)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BECA870)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BECA820)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEC97C0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC97B0)

inline static constexpr unsigned int MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110_TypeDefinitionIndex = 84981;

class MB3_TextureBaker___CreateAtlasesCoroutineTextureArray_d__110 : public ::System::Object
{
public:
	::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods; // 0x10
	::MB3_TextureBaker* __4__this; // 0x18
	::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x20
	::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult; // 0x28
	::System::Object* __2__current; // 0x30
	::Il2CppArray<::MB_TextureArrayResultMaterial*>* _bakedMatsAndSlices_5__2; // 0x38
	::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x40
	::System::Int32 __1__state; // 0x48
	::System::Int32 _resMatIdx_5__3; // 0x4C
	::System::Single maxTimePerFrame; // 0x50
	::System::Boolean saveAtlasesAsAssets; // 0x54

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINETEXTUREARRAY_D__110_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
