#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetDiy/PetDiyEditControllerBase.h"

class Class_2_E7C20EB0E801CE2E;
namespace RPG::Client::PetDiy { class PetDiyAreaInfo; }
namespace RPG::Client::PetDiy { class PetDiyCameraController; }
namespace RPG::Client::PetDiy { class PetDiyData; }
namespace RPG::Client::PetDiy { class PetEditSlotInfo; }
namespace RPG::Client::PetDiy { class TrainPetDiyController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CANCELHIGHLIGHTSLOT_OFFSET UNITYSDK_OFFSET(0xDACF500)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xDACEF70)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0xDACD660)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GETPETDIYCAMERACONTROLLER_OFFSET UNITYSDK_OFFSET(0xDACF5D0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GETPETSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xDACE3F0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GET_CURPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDACF300)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GET_MAXPLACEDCOUNT_OFFSET UNITYSDK_OFFSET(0xDACE7A0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_HIGHLIGHTSLOT_OFFSET UNITYSDK_OFFSET(0xDACF440)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_ISCURSLOTHASPET_OFFSET UNITYSDK_OFFSET(0xDACF650)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_SETSELECTEDSLOT_OFFSET UNITYSDK_OFFSET(0xDACE130)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_TRYPLACEPET_OFFSET UNITYSDK_OFFSET(0xDACE7F0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_TRYREMOVEPET_OFFSET UNITYSDK_OFFSET(0xDACEE10)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDACD310)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__FINDSLOTINFOBYPET_OFFSET UNITYSDK_OFFSET(0xDACEA60)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__FINDSLOTINFOBYSLOTID_OFFSET UNITYSDK_OFFSET(0xDACF6B0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__ISDIRTY_OFFSET UNITYSDK_OFFSET(0xDACD6D0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__REFRESHPETSTATUS_OFFSET UNITYSDK_OFFSET(0xDACE180)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__SENDTRAINPETDIYCSREQ_OFFSET UNITYSDK_OFFSET(0xDACDBB0)
#define RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__SETSLOT_OFFSET UNITYSDK_OFFSET(0xDACEBD0)

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int TrainPetDiyEditController_TypeDefinitionIndex = 74491;

	class TrainPetDiyEditController : public ::RPG::Client::PetDiy::PetDiyEditControllerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetEditSlotInfo*>* _PetSlotInfoList; // 0x20
		::RPG::Client::PetDiy::PetDiyAreaInfo* _CurAreaInfo; // 0x28
		::Class_2_E7C20EB0E801CE2E* _DiyGameModule; // 0x30
		::System::UInt32 _SlotID; // 0x38

		::System::Void _ctor(::RPG::Client::PetDiy::TrainPetDiyController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetDiy::TrainPetDiyController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__CTOR_OFFSET))(this, a1);
		}

		::System::Void ConfirmDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CONFIRMDIY_OFFSET))(this);
		}

		::System::Void SetSelectedSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_SETSELECTEDSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetEditSlotInfo*>* GetPetSlotInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetDiy::PetEditSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GETPETSLOTINFOLIST_OFFSET))(this);
		}

		::System::Boolean TryPlacePet(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_TRYPLACEPET_OFFSET))(this, a1);
		}

		::System::Boolean TryRemovePet(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_TRYREMOVEPET_OFFSET))(this, a1);
		}

		::System::Boolean Clear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void HighlightSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_HIGHLIGHTSLOT_OFFSET))(this, a1);
		}

		::System::Void CancelHighlightSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_CANCELHIGHLIGHTSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::PetDiyCameraController* GetPetDiyCameraController()
		{
			return ((::RPG::Client::PetDiy::PetDiyCameraController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GETPETDIYCAMERACONTROLLER_OFFSET))(this);
		}

		::System::Boolean IsCurSlotHasPet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_ISCURSLOTHASPET_OFFSET))(this);
		}

		::System::Void _SendTrainPetDiyCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__SENDTRAINPETDIYCSREQ_OFFSET))(this);
		}

		::System::Boolean _IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__ISDIRTY_OFFSET))(this);
		}

		::System::Void _RefreshPetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__REFRESHPETSTATUS_OFFSET))(this);
		}

		::System::Void _SetSlot(::System::UInt32 a1, ::RPG::Client::PetDiy::PetDiyData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__SETSLOT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PetDiy::PetEditSlotInfo* _FindSlotInfoBySlotID(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetDiy::PetEditSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__FINDSLOTINFOBYSLOTID_OFFSET))(this, a1);
		}

		::RPG::Client::PetDiy::PetEditSlotInfo* _FindSlotInfoByPet(::RPG::Client::PetDiy::PetDiyData* a1)
		{
			return ((::RPG::Client::PetDiy::PetEditSlotInfo*(*)(::PVOID, ::RPG::Client::PetDiy::PetDiyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER__FINDSLOTINFOBYPET_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxPlacedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GET_MAXPLACEDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurPlacedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIY_TRAINPETDIYEDITCONTROLLER_GET_CURPLACEDCOUNT_OFFSET))(this);
		}
	};
}
