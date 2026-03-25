#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_703;
class Class_1_120319518E6F6581_104;
class Class_1_E14A0A1A8B1F847C_5;
class Class_1_E85FDBE62E39A5EA_22;
class Class_1_E85FDBE62E39A5EA_23;
class Class_1_FA4F4A67B1C04320_759;
class Class_1_FA4F4A67B1C04320_761;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGame; }
namespace RPG::Client { class IRogueTournPersonaStyleGiftInGame; }
namespace RPG::Client { class IRogueTournPersonaStyleInGame; }
namespace RPG::Client { class RogueTournPersonaGameStyleData; }
namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3C8430)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET UNITYSDK_OFFSET(0xA3C9200)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_CURSTYLE_OFFSET UNITYSDK_OFFSET(0xA3C9430)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C94A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GIFTS_OFFSET UNITYSDK_OFFSET(0xA3C9440)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C94B0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA3C94C0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET UNITYSDK_OFFSET(0xA3C8E20)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET UNITYSDK_OFFSET(0xA3C8DB0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xA3C8CA0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET UNITYSDK_OFFSET(0xA3C8C50)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET UNITYSDK_OFFSET(0xA3C8D30)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA3C84D0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C82E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET UNITYSDK_OFFSET(0xA3C8550)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET UNITYSDK_OFFSET(0xA3C8630)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleInfo_TypeDefinitionIndex = 55263;

	class RogueTournPersonaStyleInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_703* _BlackboardProxyFactory; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaGameStyleGiftData*>* _Gifts; // 0x18
		::RPG::Client::RogueTournPersonaGameStyleData* _CurStyle; // 0x20
		::System::UInt32 __GameDivisionLevel_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::IRogueTournGame* gameData, ::Class_0_16E4307DCC419505_703* blackboardProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGame*, ::Class_0_16E4307DCC419505_703*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET))(this, gameData, blackboardProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncStyleSelect(::System::UInt32 styleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET))(this, styleID);
		}

		::System::Void SyncLevelChange(::Class_1_FA4F4A67B1C04320_759* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_759*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET))(this, proto);
		}

		::System::Void SyncUnclaimedExp(::Class_1_FA4F4A67B1C04320_761* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_761*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET))(this, proto);
		}

		::System::Void SyncExpCurve(::Class_1_E85FDBE62E39A5EA_23* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET))(this, proto);
		}

		::System::Void SyncAddGift(::Class_1_E85FDBE62E39A5EA_22* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET))(this, proto);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>* GetGiftsForMenu()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET))(this);
		}

		::System::Void _SyncCurStyle(::Class_1_E14A0A1A8B1F847C_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET))(this, proto);
		}

		::System::Void _SyncGifts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_104*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_104*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET))(this, proto);
		}

		::RPG::Client::IRogueTournPersonaStyleInGame* get_CurStyle()
		{
			return ((::RPG::Client::IRogueTournPersonaStyleInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_CURSTYLE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>* get_Gifts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GIFTS_OFFSET))(this);
		}

		::System::UInt32 get_GameDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GAMEDIVISIONLEVEL_OFFSET))(this);
		}

		::System::UInt32 get__GameDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET__GAMEDIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set__GameDivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET))(this, value);
		}
	};
}
