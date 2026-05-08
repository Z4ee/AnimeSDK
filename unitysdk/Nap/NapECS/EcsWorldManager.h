#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/SingletonDisposable_1.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAP_NAPECS_ECSWORLDMANAGER_CREATEWORLD_OFFSET UNITYSDK_OFFSET(0x192EB900)
#define NAP_NAPECS_ECSWORLDMANAGER_DESTROYWORLD_OFFSET UNITYSDK_OFFSET(0x192EB970)
#define NAP_NAPECS_ECSWORLDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x192EB850)
#define NAP_NAPECS_ECSWORLDMANAGER_NAP_NAPECS_ICREATABLE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x192EB780)
#define NAP_NAPECS_ECSWORLDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x192EBA90)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldManager_TypeDefinitionIndex = 35707;

	class EcsWorldManager : public ::Nap::NapECS::SingletonDisposable_1<::Nap::NapECS::EcsWorldManager*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Nap::NapECS::EcsWorld*>* worldDict; // 0x10
		::Nap::NapECS::EcsWorld* defaultWorld; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Nap_NapECS_ICreatable_OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDMANAGER_NAP_NAPECS_ICREATABLE_ONCREATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDMANAGER_DISPOSE_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorld* CreateWorld()
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDMANAGER_CREATEWORLD_OFFSET))(this);
		}

		::System::Void DestroyWorld(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDMANAGER_DESTROYWORLD_OFFSET))(this, world);
		}
	};
}
