#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_ValidationLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_ObjsToCombineTypes.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MB3_MESHBAKERROOT_DOCOMBINEDVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BB02AE0)
#define MB3_MESHBAKERROOT_GETOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1BB02AC0)
#define MB3_MESHBAKERROOT_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1BB02AD0)
#define MB3_MESHBAKERROOT_VALIDATETEXTUREBAKERGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BB03040)
#define MB3_MESHBAKERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB04080)

inline static constexpr unsigned int MB3_MeshBakerRoot_TypeDefinitionIndex = 84970;

class MB3_MeshBakerRoot : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 sortAxis; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsToCombine()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_GETOBJECTSTOCOMBINE_OFFSET))(this);
	}

	::System::Void PurgeNullsFromObjectsToCombine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET))(this);
	}

	static ::System::Boolean DoCombinedValidate(::MB3_MeshBakerRoot* mom, ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes objToCombineType, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::DigitalOpus::MB::Core::MB2_ValidationLevel validationLevel)
	{
		return ((::System::Boolean(*)(::MB3_MeshBakerRoot*, ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_ValidationLevel))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_DOCOMBINEDVALIDATE_OFFSET))(mom, objToCombineType, editorMethods, validationLevel);
	}

	static ::System::Boolean ValidateTextureBakerGameObjects(::MB3_MeshBakerRoot* mom, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::DigitalOpus::MB::Core::MB2_ValidationLevel validationLevel)
	{
		return ((::System::Boolean(*)(::MB3_MeshBakerRoot*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::MB2_ValidationLevel))((::PBYTE)hIl2Cpp + MB3_MESHBAKERROOT_VALIDATETEXTUREBAKERGAMEOBJECTS_OFFSET))(mom, objsToMesh, validationLevel);
	}
};
