#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_97D3B58B5DF5AA1F;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class PetInstance; }
namespace System { class Object; }

#define RPG_CLIENT_PETMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC5C1C0)
#define RPG_CLIENT_PETMODULE_GETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xAC5DB70)
#define RPG_CLIENT_PETMODULE_GET_CURPET_OFFSET UNITYSDK_OFFSET(0xAC5DBC0)
#define RPG_CLIENT_PETMODULE_GET_ISPETLOCKED_OFFSET UNITYSDK_OFFSET(0xAC5C840)
#define RPG_CLIENT_PETMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAC5C0C0)
#define RPG_CLIENT_PETMODULE_ISPETSUMMONED_OFFSET UNITYSDK_OFFSET(0xAC5C7E0)
#define RPG_CLIENT_PETMODULE_RECALLPET_OFFSET UNITYSDK_OFFSET(0xAC5C5D0)
#define RPG_CLIENT_PETMODULE_SUMMONPET_OFFSET UNITYSDK_OFFSET(0xAC5C6A0)
#define RPG_CLIENT_PETMODULE_TRYHIDEPET_OFFSET UNITYSDK_OFFSET(0xAC5C8D0)
#define RPG_CLIENT_PETMODULE_TRYSHOWPET_OFFSET UNITYSDK_OFFSET(0xAC5C920)
#define RPG_CLIENT_PETMODULE_USEPETITEM_OFFSET UNITYSDK_OFFSET(0xAC5C540)
#define RPG_CLIENT_PETMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC5C250)
#define RPG_CLIENT_PETMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC5C970)
#define RPG_CLIENT_PETMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC5DBD0)
#define RPG_CLIENT_PETMODULE__GETPETNAMEBYPETID_OFFSET UNITYSDK_OFFSET(0xAC5D4E0)
#define RPG_CLIENT_PETMODULE__LOADNEWPET_OFFSET UNITYSDK_OFFSET(0xAC5D110)
#define RPG_CLIENT_PETMODULE__ONCMDRECALLPETSCRSP_OFFSET UNITYSDK_OFFSET(0xAC5D2F0)
#define RPG_CLIENT_PETMODULE__ONCMDSUMMONPETSCRSP_OFFSET UNITYSDK_OFFSET(0xAC5CF80)
#define RPG_CLIENT_PETMODULE__ONEXITGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xAC5DB10)
#define RPG_CLIENT_PETMODULE__ONGETPETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xAC5CA50)
#define RPG_CLIENT_PETMODULE__ONPETITEMDEL_OFFSET UNITYSDK_OFFSET(0xAC5D630)
#define RPG_CLIENT_PETMODULE__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xAC5D9F0)
#define RPG_CLIENT_PETMODULE__ONSHOWGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xAC5DAB0)
#define RPG_CLIENT_PETMODULE__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xAC5DA50)
#define RPG_CLIENT_PETMODULE__ONTRYSHOWORHIDEPET_OFFSET UNITYSDK_OFFSET(0xAC5D830)
#define RPG_CLIENT_PETMODULE__TRYGETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xAC5CDF0)
#define RPG_CLIENT_PETMODULE__TRYRECALLCURPET_OFFSET UNITYSDK_OFFSET(0xAC5CC80)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC5DC80)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAC5DBF0)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC5DC90)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC5DCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetModule_TypeDefinitionIndex = 61213;

	class PetModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PetInstance* _CurPet; // 0x10
		::Class_1_97D3B58B5DF5AA1F* _Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void UsePetItem(::RPG::Client::ItemData* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_USEPETITEM_OFFSET))(this, itemData);
		}

		::System::Boolean IsPetSummoned(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_ISPETSUMMONED_OFFSET))(this, itemID);
		}

		::System::Boolean get_IsPetLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_GET_ISPETLOCKED_OFFSET))(this);
		}

		::System::Void TryHidePet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_TRYHIDEPET_OFFSET))(this);
		}

		::System::Void TryShowPet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_TRYSHOWPET_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetPetDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONGETPETDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void SummonPet(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_SUMMONPET_OFFSET))(this, itemID);
		}

		::System::UInt32 _TryGetPetIDByItemID(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__TRYGETPETIDBYITEMID_OFFSET))(this, itemID);
		}

		::System::Void RecallPet(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_RECALLPET_OFFSET))(this, itemID);
		}

		::System::Void _OnCmdSummonPetScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONCMDSUMMONPETSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _TryRecallCurPet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__TRYRECALLCURPET_OFFSET))(this);
		}

		::System::Void _LoadNewPet(::System::UInt32 petID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__LOADNEWPET_OFFSET))(this, petID);
		}

		::System::Void _OnCmdRecallPetScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONCMDRECALLPETSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnPetItemDel(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONPETITEMDEL_OFFSET))(this, ntfObject);
		}

		::System::Void _OnTryShowOrHidePet(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONTRYSHOWORHIDEPET_OFFSET))(this, ntfObject);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWFAKEAVATAR_OFFSET))(this, ntfObject);
		}

		::System::Void _OnShowRealAvatar(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWREALAVATAR_OFFSET))(this, ntfObject);
		}

		::System::Void _OnShowGamePhotographCamera(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWGAMEPHOTOGRAPHCAMERA_OFFSET))(this, ntfObject);
		}

		::System::Void _OnExitGamePhotographCamera(::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONEXITGAMEPHOTOGRAPHCAMERA_OFFSET))(this, ntfObject);
		}

		::RPG::Client::TextID _GetPetNameByPetID(::System::UInt32 id)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__GETPETNAMEBYPETID_OFFSET))(this, id);
		}

		::System::UInt32 GetPetIDByItemID(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_GETPETIDBYITEMID_OFFSET))(this, itemID);
		}

		::RPG::Client::PetInstance* get_CurPet()
		{
			return ((::RPG::Client::PetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_GET_CURPET_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
