#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemUpdateItem.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsSystem; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSSYSTEMGROUP_ADDSYSTEM_OFFSET UNITYSDK_OFFSET(0x192D97B0)
#define NAP_NAPECS_ECSSYSTEMGROUP_AFTERANIMATORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192DE080)
#define NAP_NAPECS_ECSSYSTEMGROUP_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x192E0C90)
#define NAP_NAPECS_ECSSYSTEMGROUP_CACHEUPDATESYSTEMINDEX_OFFSET UNITYSDK_OFFSET(0x192D9950)
#define NAP_NAPECS_ECSSYSTEMGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x192E1BD0)
#define NAP_NAPECS_ECSSYSTEMGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192E1C20)
#define NAP_NAPECS_ECSSYSTEMGROUP_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192DFA90)
#define NAP_NAPECS_ECSSYSTEMGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192DCDE0)
#define NAP_NAPECS_ECSSYSTEMGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x192DB740)
#define NAP_NAPECS_ECSSYSTEMGROUP_ONPOSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x192E0450)
#define NAP_NAPECS_ECSSYSTEMGROUP_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x192DC5A0)
#define NAP_NAPECS_ECSSYSTEMGROUP_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x192E14D0)
#define NAP_NAPECS_ECSSYSTEMGROUP_RESETFIXEDFRAMERATECONTEXT_OFFSET UNITYSDK_OFFSET(0x192DAC10)
#define NAP_NAPECS_ECSSYSTEMGROUP_SETFIXEDFRAMERATECONTEXT60_OFFSET UNITYSDK_OFFSET(0x192DAB90)
#define NAP_NAPECS_ECSSYSTEMGROUP_START_OFFSET UNITYSDK_OFFSET(0x192DAC80)
#define NAP_NAPECS_ECSSYSTEMGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x192DAF00)
#define NAP_NAPECS_ECSSYSTEMGROUP_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192DE8C0)
#define NAP_NAPECS_ECSSYSTEMGROUP__CACHEUPDATESYSTEMINDEX_G__ADDSYSTEMTOUPDATE_28_0_OFFSET UNITYSDK_OFFSET(0x192DAA10)
#define NAP_NAPECS_ECSSYSTEMGROUP__CACHEUPDATESYSTEMINDEX_G__FILTER60VERSION_28_1_OFFSET UNITYSDK_OFFSET(0x192DAA40)
#define NAP_NAPECS_ECSSYSTEMGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x192E1EF0)
#define NAP_NAPECS_ECSSYSTEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x192D96F0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemGroup_TypeDefinitionIndex = 35749;

	class EcsSystemGroup : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableProfile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystemGroup_TypeDefinitionIndex)->GetStaticField(0x84F0);
		}
		static ::System::Boolean* StaticGet_EnableIndexedSystemUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystemGroup_TypeDefinitionIndex)->GetStaticField(0x84F1);
		}
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToEndOfFixedUpdate; // 0x10
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToAfterAnimatorFixedUpdate; // 0x18
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToPostLateUpdate; // 0x20
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToWaitForFixedUpdate; // 0x28
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToWaitForFixedUpdate60; // 0x30
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToFixedUpdateAgain60; // 0x38
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToWaitForFixedUpdateAgain60; // 0x40
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToFixedUpdate; // 0x48
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToLateUpdateAgain; // 0x50
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToWaitForFixedUpdateAgain; // 0x58
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToEndOfFixedUpdate60; // 0x60
		::Nap::NapECS::EcsWorld* worldRef; // 0x68
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToFixedUpdateAgain; // 0x70
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToPostParticleSystemUpdate; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* systemOrderList; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Nap::NapECS::EcsSystem*>* systemList; // 0x88
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToPostSimulationUpdate; // 0x90
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToUpdate; // 0x98
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToAnimIKPostUpdate; // 0xA0
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToLateUpdate; // 0xA8
		::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Systems_ToFixedUpdate60; // 0xB0
		::System::Int32 lastContextFixedFrameRate; // 0xB8
		::System::Boolean _hasInit; // 0xBC
		::System::Int32 contextFixedFrameRate; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP__CCTOR_OFFSET))();
		}

		::System::Void AddSystem(::System::Int32 orderIndex, ::Nap::NapECS::EcsSystem* system)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_ADDSYSTEM_OFFSET))(this, orderIndex, system);
		}

		::System::Void CacheUpdateSystemIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_CACHEUPDATESYSTEMINDEX_OFFSET))(this);
		}

		::System::Void SetFixedFrameRateContext60(::System::Boolean isFrameRate60)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_SETFIXEDFRAMERATECONTEXT60_OFFSET))(this, isFrameRate60);
		}

		::System::Void ResetFixedFrameRateContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_RESETFIXEDFRAMERATECONTEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void AfterAnimatorFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_AFTERANIMATORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void WaitForFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_WAITFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void EndOfFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_ENDOFFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnPostParticleSystemUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_ONPOSTPARTICLESYSTEMUPDATE_OFFSET))(this);
		}

		::System::Void AnimIKPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_ANIMIKPOSTUPDATE_OFFSET))(this);
		}

		::System::Void PostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_POSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP_DISPOSE_OFFSET))(this);
		}

		static ::System::Void _CacheUpdateSystemIndex_g__AddSystemToUpdate_28_0(::System::Collections::Generic::List_1<::Nap::NapECS::EcsSystemUpdateItem>* list, ::Nap::NapECS::EcsSystem* system)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::EcsSystemUpdateItem>*, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP__CACHEUPDATESYSTEMINDEX_G__ADDSYSTEMTOUPDATE_28_0_OFFSET))(list, system);
		}

		static ::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* _CacheUpdateSystemIndex_g__Filter60Version_28_1(::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>* Source, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsSystemUpdateItem>* Cache)
		{
			return ((::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>*(*)(::Il2CppArray<::Nap::NapECS::EcsSystemUpdateItem>*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsSystemUpdateItem>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMGROUP__CACHEUPDATESYSTEMINDEX_G__FILTER60VERSION_28_1_OFFSET))(Source, Cache);
		}
	};
}
