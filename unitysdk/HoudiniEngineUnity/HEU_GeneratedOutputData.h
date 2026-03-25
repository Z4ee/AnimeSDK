#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8428E90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GeneratedOutputData_TypeDefinitionIndex = 37618;

	class HEU_GeneratedOutputData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* _renderMaterials; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* _colliders; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEDOUTPUTDATA__CTOR_OFFSET))(this);
		}
	};
}
