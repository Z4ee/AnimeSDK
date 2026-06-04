#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_04E1E73B2EA3814F_1;
class Class_1_64E52A323C80D766_3;
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET UNITYSDK_OFFSET(0xC4130A0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC412BE0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC412B10)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET UNITYSDK_OFFSET(0xC413390)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET UNITYSDK_OFFSET(0xC4132E0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0xC413110)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET UNITYSDK_OFFSET(0xC413000)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0xC4132C0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0xC4132D0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0xC413120)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC412D50)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC412BB0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET UNITYSDK_OFFSET(0xC412E30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultAvatarFragmentsData_TypeDefinitionIndex = 62281;

	class PlanetFesGachaResultAvatarFragmentsData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesAvatarData* _AvatarData; // 0x10
		::System::Numerics::BigInteger _TransferCoin_k__BackingField; // 0x18
		::System::UInt32 PreviousLevel; // 0x28
		::System::UInt32 TransferNum; // 0x2C
		::System::UInt32 CurrentLevel; // 0x30
		::System::Boolean IsLevelUp; // 0x34
		::System::Boolean IsTransfer; // 0x35
		::System::UInt32 AddFragmentsNum; // 0x38
		::System::UInt32 TransferItemID; // 0x3C
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 AvatarRarity; // 0x44
		::System::UInt32 CurrentLevelTotalFragment; // 0x48
		::System::UInt32 CurrentFragmentsNum; // 0x4C
		::System::UInt32 NextLevelTotalFragment; // 0x50
		::System::UInt32 PreviousLevelTotalFragment; // 0x54

		::System::Void _ctor(::Class_1_04E1E73B2EA3814F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04E1E73B2EA3814F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_04E1E73B2EA3814F_1* a1, ::Class_1_64E52A323C80D766_3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04E1E73B2EA3814F_1*, ::Class_1_64E52A323C80D766_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create(::Class_1_04E1E73B2EA3814F_1* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::Class_1_04E1E73B2EA3814F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create_1(::Class_1_04E1E73B2EA3814F_1* a1, ::Class_1_64E52A323C80D766_3* a2)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::Class_1_04E1E73B2EA3814F_1*, ::Class_1_64E52A323C80D766_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsStarMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET))(this);
		}

		::System::Boolean get_IsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_TransferCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET))(this);
		}

		::System::Void set_TransferCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsStarMax(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET))(this, a1);
		}

		::System::UInt32 GetFragmentNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentFragmentNumAfterLevelUP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET))(this);
		}

		::System::Void _InitFragmentData(::Class_1_04E1E73B2EA3814F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04E1E73B2EA3814F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET))(this);
		}
	};
}
