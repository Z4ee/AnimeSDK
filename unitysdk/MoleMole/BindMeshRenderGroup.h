#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_BINDMESHRENDERGROUP_GETBINDMESHRENDERERS_OFFSET UNITYSDK_OFFSET(0xFE96680)
#define MOLEMOLE_BINDMESHRENDERGROUP_GETMATERIALSLISTBYRENDERS_OFFSET UNITYSDK_OFFSET(0xFE966C0)
#define MOLEMOLE_BINDMESHRENDERGROUP_GETOVERRIDERDITHERKEY_OFFSET UNITYSDK_OFFSET(0xFE96640)
#define MOLEMOLE_BINDMESHRENDERGROUP_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0xFE96AE0)
#define MOLEMOLE_BINDMESHRENDERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xFE96AD0)

namespace MoleMole
{
	inline static constexpr unsigned int BindMeshRenderGroup_TypeDefinitionIndex = 57572;

	class BindMeshRenderGroup : public ::System::Object
	{
	public:
		::System::String* overrideDitherKey; // 0x10
		::Il2CppArray<::UnityEngine::Collider*>* bindColliders; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* bindMeshRenderers; // 0x20
		::Il2CppArray<::System::String*>* AttachPoints; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* _instancedMats; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINDMESHRENDERGROUP__CTOR_OFFSET))(this);
		}

		::System::String* GetOverriderDitherKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINDMESHRENDERGROUP_GETOVERRIDERDITHERKEY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetBindMeshRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINDMESHRENDERGROUP_GETBINDMESHRENDERERS_OFFSET))(this);
		}

		::System::Void GetMaterialsListByRenders(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BINDMESHRENDERGROUP_GETMATERIALSLISTBYRENDERS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_3306F24AC967FE79()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BINDMESHRENDERGROUP_METHOD_1_3306F24AC967FE79_OFFSET))(this);
		}
	};
}
