#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_FORCECLEAR_OFFSET UNITYSDK_OFFSET(0x14198A70)
#define MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_GETALLMATERIALS_OFFSET UNITYSDK_OFFSET(0x14198C70)
#define MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14198AC0)
#define MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x14199450)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSimpleAvatarRenderHandle_TypeDefinitionIndex = 63323;

	class MonoSimpleAvatarRenderHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void ForceClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_FORCECLEAR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_ONDESTROY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetAllMaterials(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSIMPLEAVATARRENDERHANDLE_GETALLMATERIALS_OFFSET))(this, a1, a2);
		}
	};
}
