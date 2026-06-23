#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D942D50)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D944550)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D9445B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D944560)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D942D40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D942D30)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1_TypeDefinitionIndex = 90720;

	class MB3_TextureCombinerPackerMeshBaker__CreateAtlases_d__1 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects; // 0x10
		::DigitalOpus::MB::Core::ShaderTextureProperty* _property_5__6; // 0x18
		::System::Object* __2__current; // 0x20
		::Il2CppArray<::UnityEngine::Rect>* _uvRects_5__2; // 0x28
		::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner; // 0x30
		::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>* _atlasPixels_5__7; // 0x38
		::Il2CppArray<::UnityEngine::Texture2D*>* atlases; // 0x40
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x48
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x50
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x58
		::System::Int32 _atlasSizeX_5__3; // 0x60
		::System::Int32 _propIdx_5__5; // 0x64
		::System::Boolean _isNormalMap_5__8; // 0x68
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x6C
		::System::Int32 __1__state; // 0x70
		::System::Int32 _texSetIdx_5__9; // 0x74
		::System::Int32 _atlasSizeY_5__4; // 0x78

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CREATEATLASES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
