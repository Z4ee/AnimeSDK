#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_97D3B58B5DF5AA1F;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class PetInstance; }
namespace System { class Object; }

#define RPG_CLIENT_PETMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC36DCC0)
#define RPG_CLIENT_PETMODULE_GETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xC36F890)
#define RPG_CLIENT_PETMODULE_GET_CURPET_OFFSET UNITYSDK_OFFSET(0xC36F8E0)
#define RPG_CLIENT_PETMODULE_GET_ISPETLOCKED_OFFSET UNITYSDK_OFFSET(0xC36E3B0)
#define RPG_CLIENT_PETMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC36DBC0)
#define RPG_CLIENT_PETMODULE_ISPETSUMMONED_OFFSET UNITYSDK_OFFSET(0xC36E350)
#define RPG_CLIENT_PETMODULE_RECALLPET_OFFSET UNITYSDK_OFFSET(0xC36E140)
#define RPG_CLIENT_PETMODULE_SUMMONPET_OFFSET UNITYSDK_OFFSET(0xC36E210)
#define RPG_CLIENT_PETMODULE_TRYHIDEPET_OFFSET UNITYSDK_OFFSET(0xC36E440)
#define RPG_CLIENT_PETMODULE_TRYSHOWPET_OFFSET UNITYSDK_OFFSET(0xC36E490)
#define RPG_CLIENT_PETMODULE_USEPETITEM_OFFSET UNITYSDK_OFFSET(0xC36E0B0)
#define RPG_CLIENT_PETMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC36DD50)
#define RPG_CLIENT_PETMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC36E4E0)
#define RPG_CLIENT_PETMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC36F8F0)
#define RPG_CLIENT_PETMODULE__GETPETNAMEBYPETID_OFFSET UNITYSDK_OFFSET(0xC36F200)
#define RPG_CLIENT_PETMODULE__LOADNEWPET_OFFSET UNITYSDK_OFFSET(0xC36EE40)
#define RPG_CLIENT_PETMODULE__ONCMDRECALLPETSCRSP_OFFSET UNITYSDK_OFFSET(0xC36F020)
#define RPG_CLIENT_PETMODULE__ONCMDSUMMONPETSCRSP_OFFSET UNITYSDK_OFFSET(0xC36ECA0)
#define RPG_CLIENT_PETMODULE__ONEXITGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xC36F830)
#define RPG_CLIENT_PETMODULE__ONGETPETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC36E710)
#define RPG_CLIENT_PETMODULE__ONPETITEMDEL_OFFSET UNITYSDK_OFFSET(0xC36F350)
#define RPG_CLIENT_PETMODULE__ONSHOWFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xC36F710)
#define RPG_CLIENT_PETMODULE__ONSHOWGAMEPHOTOGRAPHCAMERA_OFFSET UNITYSDK_OFFSET(0xC36F7D0)
#define RPG_CLIENT_PETMODULE__ONSHOWREALAVATAR_OFFSET UNITYSDK_OFFSET(0xC36F770)
#define RPG_CLIENT_PETMODULE__ONTRYSHOWORHIDEPET_OFFSET UNITYSDK_OFFSET(0xC36F550)
#define RPG_CLIENT_PETMODULE__TRYGETPETIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xC36EAB0)
#define RPG_CLIENT_PETMODULE__TRYRECALLCURPET_OFFSET UNITYSDK_OFFSET(0xC36E940)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC36F990)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC36F910)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC36F9A0)
#define RPG_CLIENT_PETMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC36FA00)

namespace RPG::Client
{
	inline static constexpr unsigned int PetModule_TypeDefinitionIndex = 62137;

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
