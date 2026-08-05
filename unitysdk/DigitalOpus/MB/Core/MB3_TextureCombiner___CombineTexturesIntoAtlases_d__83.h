#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F2A4F60)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F2A57A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F2A5800)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F2A57B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F2A4AD0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2A4AC0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F2A4AF0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner___CombineTexturesIntoAtlases_d__83_TypeDefinitionIndex = 94630;

	class MB3_TextureCombiner___CombineTexturesIntoAtlases_d__83 : public ::System::Object
	{
	public:
		::MB_AtlasesAndRects* resultAtlasesAndRects; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore; // 0x18
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter; // 0x28
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* atlasPackingResult; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh; // 0x38
		::System::Diagnostics::Stopwatch* _sw_5__2; // 0x40
		::System::Object* __2__current; // 0x48
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result; // 0x50
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x58
		::DigitalOpus::MB::Core::MB3_TextureCombiner* __4__this; // 0x60
		::UnityEngine::Material* resultMaterial; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Boolean splitAtlasWhenPackingIfTooBig; // 0x74
		::System::Boolean onlyPackRects; // 0x75

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_D__83_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
