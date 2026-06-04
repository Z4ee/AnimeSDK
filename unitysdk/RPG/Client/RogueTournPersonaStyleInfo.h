#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_854;
class Class_1_00BAB2C33D444F88_24;
class Class_1_00BAB2C33D444F88_25;
class Class_1_D17272E82AE804C2_834;
class Class_1_D17272E82AE804C2_836;
class Class_1_D1E0AD3915BCCF29_115;
class Class_1_F3CA30716D4FAF92_19;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournGame; }
namespace RPG::Client { class IRogueTournPersonaStyleGiftInGame; }
namespace RPG::Client { class IRogueTournPersonaStyleInGame; }
namespace RPG::Client { class RogueTournPersonaGameStyleData; }
namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC852C00)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET UNITYSDK_OFFSET(0xC853920)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_CURSTYLE_OFFSET UNITYSDK_OFFSET(0xC853CD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC853DC0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET_GIFTS_OFFSET UNITYSDK_OFFSET(0xC853CE0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC853DD0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC853DE0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET UNITYSDK_OFFSET(0xC853570)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET UNITYSDK_OFFSET(0xC853500)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xC8533F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET UNITYSDK_OFFSET(0xC8533A0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET UNITYSDK_OFFSET(0xC853480)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC852C90)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC852AA0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET UNITYSDK_OFFSET(0xC852D10)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET UNITYSDK_OFFSET(0xC852DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleInfo_TypeDefinitionIndex = 63384;

	class RogueTournPersonaStyleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournPersonaGameStyleGiftData*>* _Gifts; // 0x10
		::Class_0_16E4307DCC419505_854* _BlackboardProxyFactory; // 0x18
		::RPG::Client::RogueTournPersonaGameStyleData* _CurStyle; // 0x20
		::System::UInt32 __GameDivisionLevel_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::IRogueTournGame* a1, ::Class_0_16E4307DCC419505_854* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournGame*, ::Class_0_16E4307DCC419505_854*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncStyleSelect(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCSTYLESELECT_OFFSET))(this, a1);
		}

		::System::Void SyncLevelChange(::Class_1_D17272E82AE804C2_834* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_834*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCLEVELCHANGE_OFFSET))(this, a1);
		}

		::System::Void SyncUnclaimedExp(::Class_1_D17272E82AE804C2_836* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_836*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCUNCLAIMEDEXP_OFFSET))(this, a1);
		}

		::System::Void SyncExpCurve(::Class_1_00BAB2C33D444F88_25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCEXPCURVE_OFFSET))(this, a1);
		}

		::System::Void SyncAddGift(::Class_1_00BAB2C33D444F88_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SYNCADDGIFT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>* GetGiftsForMenu()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaStyleGiftInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_GETGIFTSFORMENU_OFFSET))(this);
		}

		::System::Void _SyncCurStyle(::Class_1_F3CA30716D4FAF92_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCCURSTYLE_OFFSET))(this, a1);
		}

		::System::Void _SyncGifts(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_115*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_115*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO__SYNCGIFTS_OFFSET))(this, a1);
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

		::System::Void set__GameDivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO_SET__GAMEDIVISIONLEVEL_OFFSET))(this, a1);
		}
	};
}
