#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB3_TextureBaker;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }

#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D3B74B0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3B7BF0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D3B7C50)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D3B7C00)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3B74A0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7490)

inline static constexpr unsigned int MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109_TypeDefinitionIndex = 90554;

class MB3_TextureBaker___CreateAtlasesCoroutineAtlases_d__109 : public ::System::Object
{
public:
	::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x10
	::MB3_TextureBaker* __4__this; // 0x18
	::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* _coroutineResult2_5__3; // 0x20
	::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x28
	::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods; // 0x30
	::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult; // 0x38
	::System::Object* __2__current; // 0x40
	::System::Int32 __1__state; // 0x48
	::System::Int32 _i_5__2; // 0x4C
	::System::Single maxTimePerFrame; // 0x50

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINEATLASES_D__109_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
