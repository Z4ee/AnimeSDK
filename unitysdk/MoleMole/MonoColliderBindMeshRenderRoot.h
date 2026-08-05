#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_232;
namespace MoleMole { class BindMeshRenderGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C00810)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_GETBINDINFO_OFFSET UNITYSDK_OFFSET(0x19C00BE0)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x19C00D50)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x19C00860)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C00D00)
#define MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00EA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoColliderBindMeshRenderRoot_TypeDefinitionIndex = 41710;

	class MonoColliderBindMeshRenderRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::BindMeshRenderGroup*>* BindConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BindMeshRenderGroup*>* Field_5_7; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_AWAKE_OFFSET))(this);
		}

		::System::Boolean GetBindInfo(::UnityEngine::Collider* a1, ::Class_0_16E4307DCC419505_232*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Class_0_16E4307DCC419505_232*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_GETBINDINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_5_6BB86695870EFBD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCOLLIDERBINDMESHRENDERROOT_METHOD_5_6BB86695870EFBD1_OFFSET))(this);
		}
	};
}
