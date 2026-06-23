#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB_ITextureCombinerPacker; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Text { class StringBuilder; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E208130)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E208B30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E208B90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E208B40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E208120)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85__CTOR_OFFSET UNITYSDK_OFFSET(0x1E208110)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner____CombineTexturesIntoAtlases_d__85_TypeDefinitionIndex = 90698;

	class MB3_TextureCombiner____CombineTexturesIntoAtlases_d__85 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result; // 0x10
		::System::Text::StringBuilder* _report_5__3; // 0x18
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* _pipeline_5__2; // 0x20
		::DigitalOpus::MB::Core::MB3_TextureCombiner* __4__this; // 0x28
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x30
		::System::Object* __2__current; // 0x38
		::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* _texturePaker_5__4; // 0x40
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x48
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x50
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER____COMBINETEXTURESINTOATLASES_D__85_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
