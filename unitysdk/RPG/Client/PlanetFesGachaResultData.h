#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_04E1E73B2EA3814F_1;
class Class_1_22B4C7CF09D1BAC1;
class Class_1_5516F5B2865E1357_4;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesGachaResultAvatarFragmentsData; }
namespace RPG::Client { class PlanetFesGachaResultItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xACBEB80)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACBF800)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0xACBEEA0)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET UNITYSDK_OFFSET(0xACBF140)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET UNITYSDK_OFFSET(0xACBEDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultData_TypeDefinitionIndex = 61354;

	class PlanetFesGachaResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultItemData*>* ItemList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarData*>* NewAvatarList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*>* AvatarFragmentsList; // 0x20
		::System::Numerics::BigInteger Coin; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_22B4C7CF09D1BAC1* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET))(this, result);
		}

		::System::Void _SyncItemList(::System::Collections::Generic::List_1<::Class_1_5516F5B2865E1357_4*>* gachaResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5516F5B2865E1357_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET))(this, gachaResult);
		}

		::System::Void _SyncNewAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* idList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET))(this, idList);
		}

		::System::Void _SyncAvatarItemList(::System::Collections::Generic::List_1<::Class_1_04E1E73B2EA3814F_1*>* gachaResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_04E1E73B2EA3814F_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET))(this, gachaResult);
		}
	};
}
