#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace EasyPBD { class EasyPBDRope; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDSCHEDULER_COMPAREBYHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1CEDE2C0)
#define EASYPBD_EASYPBDSCHEDULER_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CEDCF70)
#define EASYPBD_EASYPBDSCHEDULER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1CEDD6D0)
#define EASYPBD_EASYPBDSCHEDULER_GETHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1CEDE3E0)
#define EASYPBD_EASYPBDSCHEDULER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CEDDF30)
#define EASYPBD_EASYPBDSCHEDULER_MARKORDERDIRTY_OFFSET UNITYSDK_OFFSET(0x1CEDD650)
#define EASYPBD_EASYPBDSCHEDULER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CEDE1D0)
#define EASYPBD_EASYPBDSCHEDULER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CEDD1E0)
#define EASYPBD_EASYPBDSCHEDULER_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x1CEDCE20)
#define EASYPBD_EASYPBDSCHEDULER_SORTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CEDD990)
#define EASYPBD_EASYPBDSCHEDULER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CEDD430)
#define EASYPBD_EASYPBDSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEDE6A0)
#define EASYPBD_EASYPBDSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDE650)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDScheduler_TypeDefinitionIndex = 27684;

	class EasyPBDScheduler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::EasyPBD::EasyPBDRope*>** StaticGet_ActiveRopes()
		{
			return (::System::Collections::Generic::List_1<::EasyPBD::EasyPBDRope*>**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x22BB0);
		}
		static ::EasyPBD::EasyPBDScheduler** StaticGet_runtimeInstance()
		{
			return (::EasyPBD::EasyPBDScheduler**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x22BB8);
		}
		static ::System::Collections::Generic::HashSet_1<::EasyPBD::EasyPBDRope*>** StaticGet_ActiveRopeSet()
		{
			return (::System::Collections::Generic::HashSet_1<::EasyPBD::EasyPBDRope*>**)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x22BC0);
		}
		static ::System::Boolean* StaticGet_orderDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EasyPBDScheduler_TypeDefinitionIndex)->GetStaticField(0x6070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER__CCTOR_OFFSET))();
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_RESETSTATICSTATE_OFFSET))();
		}

		static ::System::Void CreateRuntimeInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_CREATERUNTIMEINSTANCE_OFFSET))();
		}

		static ::System::Void Register(::EasyPBD::EasyPBDRope* rope)
		{
			return ((::System::Void(*)(::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_REGISTER_OFFSET))(rope);
		}

		static ::System::Void Unregister(::EasyPBD::EasyPBDRope* rope)
		{
			return ((::System::Void(*)(::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_UNREGISTER_OFFSET))(rope);
		}

		static ::System::Void MarkOrderDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_MARKORDERDIRTY_OFFSET))();
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void SortIfNeeded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_SORTIFNEEDED_OFFSET))();
		}

		static ::System::Int32 CompareByHierarchyDepth(::EasyPBD::EasyPBDRope* left, ::EasyPBD::EasyPBDRope* right)
		{
			return ((::System::Int32(*)(::EasyPBD::EasyPBDRope*, ::EasyPBD::EasyPBDRope*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_COMPAREBYHIERARCHYDEPTH_OFFSET))(left, right);
		}

		static ::System::Int32 GetHierarchyDepth(::UnityEngine::Transform* value)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDSCHEDULER_GETHIERARCHYDEPTH_OFFSET))(value);
		}
	};
}
