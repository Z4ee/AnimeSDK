#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB_ITextureCombinerPacker; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F794670)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7954F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F795550)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F795500)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F794660)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1F794650)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14_TypeDefinitionIndex = 94683;

	class MB3_TextureCombinerPipeline____Step3_BuildAndSaveAtlasesAndStoreResults_d__14 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Texture2D*>* _atlases_5__3; // 0x10
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x18
		::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* packer; // 0x20
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline* __4__this; // 0x28
		::System::Diagnostics::Stopwatch* _sw_5__2; // 0x30
		::System::Object* __2__current; // 0x38
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x40
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x48
		::System::Text::StringBuilder* report; // 0x50
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x58
		::DigitalOpus::MB::Core::AtlasPackingResult* atlasPackingResult; // 0x60
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x68
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
