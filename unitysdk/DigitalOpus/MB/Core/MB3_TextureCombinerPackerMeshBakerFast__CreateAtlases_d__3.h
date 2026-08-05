#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F7AB570)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7ACBA0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7ACC00)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F7ACBB0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7AB560)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AB550)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3_TypeDefinitionIndex = 94657;

	class MB3_TextureCombinerPackerMeshBakerFast__CreateAtlases_d__3 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x18
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x20
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x28
		::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects; // 0x30
		::System::Object* __2__current; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* atlases; // 0x40
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFAST__CREATEATLASES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
