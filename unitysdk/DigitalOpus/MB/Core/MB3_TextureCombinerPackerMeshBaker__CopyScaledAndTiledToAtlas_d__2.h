#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DAD8550)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAD9680)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DAD96E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DAD9690)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAD8540)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8530)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2_TypeDefinitionIndex = 90721;

	class MB3_TextureCombinerPackerMeshBaker__CopyScaledAndTiledToAtlas_d__2 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName; // 0x18
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x20
		::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source; // 0x28
		::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial; // 0x30
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x38
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x40
		::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>* atlasPixels; // 0x48
		::System::Int32 _h_5__3; // 0x50
		::System::Int32 targW; // 0x54
		::DigitalOpus::MB::Core::AtlasPadding padding; // 0x58
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x60
		::DigitalOpus::MB::Core::DRect srcSamplingRect; // 0x68
		::System::Int32 targH; // 0x88
		::System::Int32 __1__state; // 0x8C
		::System::Int32 targY; // 0x90
		::System::Int32 _w_5__2; // 0x94
		::System::Int32 targX; // 0x98
		::System::Int32 _j_5__5; // 0x9C
		::System::Int32 _i_5__4; // 0xA0

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__COPYSCALEDANDTILEDTOATLAS_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
