#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace RPG::Client::PixAir { class PixAirPlaneGhost; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_ENEMYEQUIPMENTGHOSTS_OFFSET UNITYSDK_OFFSET(0xC3D51F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_ENEMYPLANEGHOST_OFFSET UNITYSDK_OFFSET(0xC3D51C0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_PLAYEREQUIPMENTGHOSTS_OFFSET UNITYSDK_OFFSET(0xC3D51E0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_PLAYERPLANEGHOST_OFFSET UNITYSDK_OFFSET(0xC3D51A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC3D42A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SET_ENEMYPLANEGHOST_OFFSET UNITYSDK_OFFSET(0xC3D51D0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SET_PLAYERPLANEGHOST_OFFSET UNITYSDK_OFFSET(0xC3D51B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SYNCFROMENTITIES_OFFSET UNITYSDK_OFFSET(0xC3D4DC0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__CREATEGHOSTSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0xC3D42F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D4140)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__INITGHOSTSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0xC3D49E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGhostManager_TypeDefinitionIndex = 73517;

	class PixAirGhostManager : public ::System::Object
	{
	public:
		::Class_1_3B1EA953A4067E26_2* _Contexts; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::PixAir::PixAirPlaneGhost*>* _PlaneGhosts; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* _PlayerEquipmentGhosts; // 0x20
		::RPG::Client::PixAir::PixAirPlaneGhost* _EnemyPlaneGhost_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirPlaneGhost* _PlayerPlaneGhost_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* _EnemyEquipmentGhosts; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::PixAir::PixAirEquipmentGhost*>* _EquipmentGhosts; // 0x40

		::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void _InitGhostsFromEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__INITGHOSTSFROMENTITIES_OFFSET))(this);
		}

		::System::Void _CreateGhostsFromEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER__CREATEGHOSTSFROMENTITIES_OFFSET))(this);
		}

		::System::Void SyncFromEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SYNCFROMENTITIES_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirPlaneGhost* get_PlayerPlaneGhost()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneGhost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_PLAYERPLANEGHOST_OFFSET))(this);
		}

		::System::Void set_PlayerPlaneGhost(::RPG::Client::PixAir::PixAirPlaneGhost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneGhost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SET_PLAYERPLANEGHOST_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirPlaneGhost* get_EnemyPlaneGhost()
		{
			return ((::RPG::Client::PixAir::PixAirPlaneGhost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_ENEMYPLANEGHOST_OFFSET))(this);
		}

		::System::Void set_EnemyPlaneGhost(::RPG::Client::PixAir::PixAirPlaneGhost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirPlaneGhost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_SET_ENEMYPLANEGHOST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* get_PlayerEquipmentGhosts()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_PLAYEREQUIPMENTGHOSTS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>* get_EnemyEquipmentGhosts()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::PixAir::PixAirEquipmentGhost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTMANAGER_GET_ENEMYEQUIPMENTGHOSTS_OFFSET))(this);
		}
	};
}
