#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoNotRelateGameLogic/MonoCustomTextMesh_fontType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH_AWAKE_OFFSET UNITYSDK_OFFSET(0xF8104F0)
#define MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH_REBUILD_OFFSET UNITYSDK_OFFSET(0xF810600)
#define MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xF810780)

namespace MonoNotRelateGameLogic
{
	inline static constexpr unsigned int MonoCustomTextMesh_TypeDefinitionIndex = 73812;

	class MonoCustomTextMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* uv; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* verticies; // 0x20
		::Il2CppArray<::System::Int32>* triangles; // 0x28
		::System::Boolean serialized; // 0x30
		::MonoNotRelateGameLogic::MonoCustomTextMesh_fontType FontType; // 0x34
		::System::String* m_text; // 0x38
		::System::Single m_fontSize; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Mesh* Rebuild()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONOTRELATEGAMELOGIC_MONOCUSTOMTEXTMESH_REBUILD_OFFSET))(this);
		}
	};
}
