#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB3_TextureBaker;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }

#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7A40B0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7A4970)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7A49D0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7A4980)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7A40A0)
#define MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A4090)

inline static constexpr unsigned int MB3_TextureBaker___CreateAtlasesCoroutine_d__111_TypeDefinitionIndex = 90556;

class MB3_TextureBaker___CreateAtlasesCoroutine_d__111 : public ::System::Object
{
public:
	::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x10
	::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods; // 0x18
	::System::Object* __2__current; // 0x20
	::MB3_TextureBaker* __4__this; // 0x28
	::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Single maxTimePerFrame; // 0x3C
	::System::Boolean saveAtlasesAsAssets; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER___CREATEATLASESCOROUTINE_D__111_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
