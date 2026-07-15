#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHEROUTFITDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EACE50)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x17EAD9F0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET UNITYSDK_OFFSET(0x17EADB10)
#define RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x17EAD460)
#define RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x17EADA80)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADBC0)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADC00)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADBE0)
#define RPG_CLIENT_AETHEROUTFITDATA_INIT_OFFSET UNITYSDK_OFFSET(0x17EACFA0)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADBD0)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADC10)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x17EADBF0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x17EAD260)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17EAD560)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x17EAD340)
#define RPG_CLIENT_AETHEROUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17EACC60)
#define RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x17EACFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherOutfitData_TypeDefinitionIndex = 59477;

	class AetherOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _AllAetherMonsterDisplayAvatars_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _ExpItemIDToSpiritDataMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllAetherMonsterAvatars_k__BackingField; // 0x20
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

		::System::Void SyncInitMonsterAvatar(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_419A79D235B9417C_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::AetherMonsterAvatarData* SyncSingleMonsterAvatar(::Class_1_419A79D235B9417C_1* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::Class_1_419A79D235B9417C_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncMonsterAvatarList(::System::Collections::Generic::IList_1<::Class_1_419A79D235B9417C_1*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_419A79D235B9417C_1*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET))(this, a1, a2);
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
