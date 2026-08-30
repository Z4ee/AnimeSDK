#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_4B67E46515ECF7E0;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class PetInstance; }
namespace System { class Object; }

#define RPG_CLIENT_PETMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA64110)
#define RPG_CLIENT_PETMODULE_GETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDA65CE0)
#define RPG_CLIENT_PETMODULE_GET_CURPET_OFFSET UNITYSDK_OFFSET(0xDA647D0)
#define RPG_CLIENT_PETMODULE_GET_ISPETLOCKED_OFFSET UNITYSDK_OFFSET(0xDA64810)
#define RPG_CLIENT_PETMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDA64050)
#define RPG_CLIENT_PETMODULE_ISPETSUMMONED_OFFSET UNITYSDK_OFFSET(0xDA64740)
#define RPG_CLIENT_PETMODULE_RECALLPET_OFFSET UNITYSDK_OFFSET(0xDA64590)
#define RPG_CLIENT_PETMODULE_SUMMONPET_OFFSET UNITYSDK_OFFSET(0xDA64660)
#define RPG_CLIENT_PETMODULE_TRYHIDEPET_OFFSET UNITYSDK_OFFSET(0xDA64870)
#define RPG_CLIENT_PETMODULE_TRYSHOWPET_OFFSET UNITYSDK_OFFSET(0xDA648C0)
#define RPG_CLIENT_PETMODULE_USEPETITEM_OFFSET UNITYSDK_OFFSET(0xDA64500)
#define RPG_CLIENT_PETMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA641A0)
#define RPG_CLIENT_PETMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xDA64910)
#define RPG_CLIENT_PETMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDA65D30)
#define RPG_CLIENT_PETMODULE__GETPETNAMEBYPETID_OFFSET UNITYSDK_OFFSET(0xDA65630)
#define RPG_CLIENT_PETMODULE__LOADNEWPET_OFFSET UNITYSDK_OFFSET(0xDA65270)
#define RPG_CLIENT_PETMODULE__ONCMDRECALLPETSCRSP_OFFSET UNITYSDK_OFFSET(0xDA65450)
#define RPG_CLIENT_PETMODULE__ONCMDSUMMONPETSCRSP_OFFSET UNITYSDK_OFFSET(0xDA650D0)
#define RPG_CLIENT_PETMODULE__ONEXITGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xDA65C80)
#define RPG_CLIENT_PETMODULE__ONGETPETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xDA64B40)
#define RPG_CLIENT_PETMODULE__ONPETITEMDEL_OFFSET UNITYSDK_OFFSET(0xDA657C0)
#define RPG_CLIENT_PETMODULE__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xDA65B60)
#define RPG_CLIENT_PETMODULE__ONSHOWGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xDA65C20)
#define RPG_CLIENT_PETMODULE__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xDA65BC0)
#define RPG_CLIENT_PETMODULE__ONTRYSHOWORHIDEPET_OFFSET UNITYSDK_OFFSET(0xDA659C0)
#define RPG_CLIENT_PETMODULE__TRYGETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xDA64EE0)
#define RPG_CLIENT_PETMODULE__TRYRECALLCURPET_OFFSET UNITYSDK_OFFSET(0xDA64D70)

namespace RPG::Client
{
	inline static constexpr unsigned int PetModule_TypeDefinitionIndex = 66488;

	class PetModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::PetInstance* _CurPet; // 0x10
		::Class_1_4B67E46515ECF7E0* _Lock; // 0x18

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

		::System::Void UsePetItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_USEPETITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsPetSummoned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_ISPETSUMMONED_OFFSET))(this, a1);
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

		::System::Void _OnGetPetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONGETPETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SummonPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_SUMMONPET_OFFSET))(this, a1);
		}

		::System::UInt32 _TryGetPetIDByItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__TRYGETPETIDBYITEMID_OFFSET))(this, a1);
		}

		::System::Void RecallPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_RECALLPET_OFFSET))(this, a1);
		}

		::System::Void _OnCmdSummonPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONCMDSUMMONPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _TryRecallCurPet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__TRYRECALLCURPET_OFFSET))(this);
		}

		::System::Void _LoadNewPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__LOADNEWPET_OFFSET))(this, a1);
		}

		::System::Void _OnCmdRecallPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONCMDRECALLPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetItemDel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONPETITEMDEL_OFFSET))(this, a1);
		}

		::System::Void _OnTryShowOrHidePet(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONTRYSHOWORHIDEPET_OFFSET))(this, a1);
		}

		::System::Void _OnShowFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnShowRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnShowGamePhotographCamera(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONSHOWGAMEPHOTOGRAPHCAMERA_OFFSET))(this, a1);
		}

		::System::Void _OnExitGamePhotographCamera(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__ONEXITGAMEPHOTOGRAPHCAMERA_OFFSET))(this, a1);
		}

		::RPG::Client::TextID _GetPetNameByPetID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE__GETPETNAMEBYPETID_OFFSET))(this, a1);
		}

		::System::UInt32 GetPetIDByItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_GETPETIDBYITEMID_OFFSET))(this, a1);
		}

		::RPG::Client::PetInstance* get_CurPet()
		{
			return ((::RPG::Client::PetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE_GET_CURPET_OFFSET))(this);
		}
	};
}
