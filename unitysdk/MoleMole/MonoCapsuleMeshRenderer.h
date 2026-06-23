#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOCAPSULEMESHRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x182FEE20)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x182FEB60)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_6A042D020D7DEEED_OFFSET UNITYSDK_OFFSET(0x182FF030)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_ADE72E2505ADFFDB_OFFSET UNITYSDK_OFFSET(0x183001F0)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_E2C05663B5DE5BEA_OFFSET UNITYSDK_OFFSET(0x182FFF10)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182FFC50)
#define MOLEMOLE_MONOCAPSULEMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x182FFEC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCapsuleMeshRenderer_TypeDefinitionIndex = 42808;

	class MonoCapsuleMeshRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_3 = 0x10; // 0x0
		// static const ::System::Int32 Field_5_4 = 0x8; // 0x0
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x20
		::UnityEngine::Mesh* Field_5_2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Material* a1, ::UnityEngine::CapsuleCollider* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::CapsuleCollider*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_ONDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* Method_5_6A042D020D7DEEED(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_6A042D020D7DEEED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Method_5_ADE72E2505ADFFDB(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::UnityEngine::Vector2>* a3, ::System::Int32& a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32&, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_ADE72E2505ADFFDB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void Method_5_E2C05663B5DE5BEA(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::UnityEngine::Vector2>* a3, ::System::Int32& a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Single a7, ::System::Single a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAPSULEMESHRENDERER_METHOD_5_E2C05663B5DE5BEA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
