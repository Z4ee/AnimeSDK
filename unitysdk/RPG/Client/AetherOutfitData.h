#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHEROUTFITDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2792E0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB282B50)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET UNITYSDK_OFFSET(0xB282C70)
#define RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB2782B0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB282BE0)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D20)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D60)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D40)
#define RPG_CLIENT_AETHEROUTFITDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB279130)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D30)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D70)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0xB282D50)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB27B480)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET UNITYSDK_OFFSET(0xB27C020)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB282A30)
#define RPG_CLIENT_AETHEROUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB278840)
#define RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB2827C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherOutfitData_TypeDefinitionIndex = 58215;

	class AetherOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _ExpItemIDToSpiritDataMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllAetherMonsterAvatars_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _AllAetherMonsterDisplayAvatars_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllSpecialAetherMonsterAvatars_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncInitMonsterAvatar(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_070964BB68D18B9F*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_070964BB68D18B9F*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarData* SyncSingleMonsterAvatar(::Class_1_070964BB68D18B9F* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::Class_1_070964BB68D18B9F*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncMonsterAvatarList(::System::Collections::Generic::IList_1<::Class_1_070964BB68D18B9F*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_070964BB68D18B9F*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AetherMonsterAvatarData* GetOrCreateMonsterAvatar(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarData* GetAetherMonsterAvatar(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarData* GetTrialAetherMonsterAvatar(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarDisplayData* GetAetherMonsterDisplayAvatarByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET))(this, a1);
		}

		::System::Void _GenerateDisplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* get_AllAetherMonsterAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET))(this);
		}

		::System::Void set_AllAetherMonsterAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* get_AllSpecialAetherMonsterAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET))(this);
		}

		::System::Void set_AllSpecialAetherMonsterAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* get_AllAetherMonsterDisplayAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET))(this);
		}

		::System::Void set_AllAetherMonsterDisplayAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET))(this, a1);
		}
	};
}
