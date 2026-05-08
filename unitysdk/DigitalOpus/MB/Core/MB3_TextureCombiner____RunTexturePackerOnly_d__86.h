#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BAFF2F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAFFA20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAFFA80)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BAFFA30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAFF2E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFF2D0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner____RunTexturePackerOnly_d__86_TypeDefinitionIndex = 85125;

	class MB3_TextureCombiner____RunTexturePackerOnly_d__86 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResult; // 0x28
		::DigitalOpus::MB::Core::MB3_TextureCombiner* __4__this; // 0x30
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* _pipeline_5__2; // 0x38
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x40
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x48
		::System::Boolean splitAtlasWhenPackingIfTooBig; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____RUNTEXTUREPACKERONLY_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
