#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/PetDiy/PetDiyEditControllerBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::PetDiy { class ParkPetDiyController; }
namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace RPG::Client::PetDiy { class PetDiyData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xDABEC90)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0xDABD750)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ENTEREDITMODE_OFFSET UNITYSDK_OFFSET(0xDABD590)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_EXITEDITMODE_OFFSET UNITYSDK_OFFSET(0xDABD670)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GETCURPLACEDPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDABD550)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GETPLACEDPETDIYDATALIST_OFFSET UNITYSDK_OFFSET(0xDABC860)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xDABF3E0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_CURPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDABE030)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_MAXPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDABF390)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDABE0E0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ISFULL_OFFSET UNITYSDK_OFFSET(0xDABDFD0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0xDABBE40)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_SWITCHDIYAREA_OFFSET UNITYSDK_OFFSET(0xDABB970)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_TRYPLACEPET_OFFSET UNITYSDK_OFFSET(0xDABE130)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_TRYREMOVEPET_OFFSET UNITYSDK_OFFSET(0xDABEA40)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__CLEARLOSTPET_OFFSET UNITYSDK_OFFSET(0xDABC350)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDABA1B0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__DESTROYALLENTITY_OFFSET UNITYSDK_OFFSET(0xDABD1F0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__INITALLPETENTITY_OFFSET UNITYSDK_OFFSET(0xDABD3E0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__ISDIRTY_OFFSET UNITYSDK_OFFSET(0xDABD7C0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__MARKSYNCED_OFFSET UNITYSDK_OFFSET(0xDABDEE0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REFRESHPETSTATUS_OFFSET UNITYSDK_OFFSET(0xDABCF00)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEENTITYOFEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0xDABC5D0)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEPETENTITY_OFFSET UNITYSDK_OFFSET(0xDABEB50)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEPETFROMOTHERAREAS_OFFSET UNITYSDK_OFFSET(0xDABE550)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__SENDPETPARKDIYCSREQ_OFFSET UNITYSDK_OFFSET(0xDABD930)
#define RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__SPAWNPET_OFFSET UNITYSDK_OFFSET(0xDABE7B0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int ParkPetDiyEditController_TypeDefinitionIndex = 74478;

	class ParkPetDiyEditController : public ::RPG::Client::PetDiy::PetDiyEditControllerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* _PlacedPetDiyDataList; // 0x20
		::RPG::Client::PetDiy::ParkPetDiyController* _Owner; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _PlacedPetEntityDict; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::Pet::PetInstanceIdentifier>* _OccupiedPetIdentifierSet; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* _SyncedPetDiyDataList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*>* _SyncedPetDiyDataListByAreaID; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*>* _PlacedPetDiyDataListByAreaID; // 0x50
		::RPG::Client::PetDiy::PetDiyAreaInfo* _CurAreaInfo; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _EmptySlotIDList; // 0x60
		::System::Boolean _IsInEditMode; // 0x68

		::System::Void _ctor(::RPG::Client::PetDiy::PetDiyAreaInfo* a1, ::RPG::Client::PetDiy::ParkPetDiyController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*, ::RPG::Client::PetDiy::ParkPetDiyController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void SwitchDiyArea(::RPG::Client::PetDiy::PetDiyAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_SWITCHDIYAREA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* GetCurPlacedPetDiyDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GETCURPLACEDPETDIYDATALIST_OFFSET))(this);
		}

		::System::Void EnterEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ENTEREDITMODE_OFFSET))(this);
		}

		::System::Void ExitEditMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_EXITEDITMODE_OFFSET))(this);
		}

		::System::Void ConfirmDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_CONFIRMDIY_OFFSET))(this);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ISFULL_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean TryPlacePet(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_TRYPLACEPET_OFFSET))(this, a1);
		}

		::System::Boolean TryRemovePet(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_TRYREMOVEPET_OFFSET))(this, a1);
		}

		::System::Boolean Clear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void _ClearLostPet(::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__CLEARLOSTPET_OFFSET))(this, a1);
		}

		::System::Void _RemoveEntityOfEmptySlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEENTITYOFEMPTYSLOT_OFFSET))(this);
		}

		::System::Void _RemovePetFromOtherAreas(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEPETFROMOTHERAREAS_OFFSET))(this, a1);
		}

		::System::Void _RefreshPetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REFRESHPETSTATUS_OFFSET))(this);
		}

		::System::Void _SendPetParkDiyCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__SENDPETPARKDIYCSREQ_OFFSET))(this);
		}

		::System::Boolean _IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__ISDIRTY_OFFSET))(this);
		}

		::System::Void _MarkSynced()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__MARKSYNCED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>* GetPlacedPetDiyDataList(::RPG::Client::PetDiy::PetDiyAreaInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetDiyData*>*(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GETPLACEDPETDIYDATALIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _SpawnPet(::System::UInt32 a1, ::RPG::Client::PetDiy::PetDiyData* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::Client::PetDiy::PetDiyData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__SPAWNPET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitAllPetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__INITALLPETENTITY_OFFSET))(this);
		}

		::System::Void _DestroyAllEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__DESTROYALLENTITY_OFFSET))(this);
		}

		::System::Void _RemovePetEntity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER__REMOVEPETENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPlacedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_MAXPLACEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurPlacedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_CURPLACEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_PARKPETDIYEDITCONTROLLER_GET_AREANAME_OFFSET))(this);
		}
	};
}
