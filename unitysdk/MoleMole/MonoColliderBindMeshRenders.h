#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETBINDMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0x10802A70)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETMATERIALSLISTBYRENDERS_OFFSET UNITYSDK_OFFSET(0x10802190)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETOVERRIDERDITHERKEY_OFFSET UNITYSDK_OFFSET(0x10802A30)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_METHOD_5_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x10802630)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x108025E0)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS__CTOR_OFFSET UNITYSDK_OFFSET(0x10802AB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoColliderBindMeshRenders_TypeDefinitionIndex = 70252;

	class MonoColliderBindMeshRenders : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* overrideDitherKey; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* bindMeshRenderers; // 0x20
		::Il2CppArray<::System::String*>* AttachPoints; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* Field_5_0; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS__CTOR_OFFSET))(this);
		}

		::System::Void GetMaterialsListByRenders(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETMATERIALSLISTBYRENDERS_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_ONDESTROY_OFFSET))(this);
		}

		::System::String* GetOverriderDitherKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETOVERRIDERDITHERKEY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetBindMeshRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_GETBINDMESHRENDERERS_OFFSET))(this);
		}

		::System::Void Method_5_3306F24AC967FE79()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERS_METHOD_5_3306F24AC967FE79_OFFSET))(this);
		}
	};
}
