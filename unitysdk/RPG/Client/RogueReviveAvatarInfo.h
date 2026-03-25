#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_709;
class Class_1_4D5D53619B020DDD;
class Class_1_C03D623E9F32FBCB_70;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35C400)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0xA35C6E0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35C700)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET UNITYSDK_OFFSET(0xA35C470)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET UNITYSDK_OFFSET(0xA35C5F0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA348570)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35C3B0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0xA35C6F0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0xA35C710)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA35C3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueReviveAvatarInfo_TypeDefinitionIndex = 54679;

	class RogueReviveAvatarInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_709* _SendPacketCmd_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ReviveAvatarCostItems_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_709* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_709*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshReviveAvatarInfo(::Class_1_C03D623E9F32FBCB_70* reviveInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET))(this, reviveInfo);
		}

		::System::Void RefreshReviveAvatarInfo_1(::Class_1_4D5D53619B020DDD* ReviveCostData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET))(this, ReviveCostData);
		}

		::System::Void RefreshReviveAvatarInfo_2(::System::UInt32 rogueCoinCostNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET))(this, rogueCoinCostNum);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_ReviveAvatarCostItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarCostItems(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_709* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_709*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_709* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_709*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}
