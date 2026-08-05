#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E749090)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E74B900)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E74B960)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E74B910)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E749080)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E749070)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9_TypeDefinitionIndex = 94681;

	class MB3_TextureCombinerPipeline____Step1_CollectDistinctMatTexturesAndUsedObjects_d__9 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x10
		::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result; // 0x18
		::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods; // 0x20
		::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* usedObjsToMesh; // 0x30
		::System::Object* __2__current; // 0x38
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
