#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHEROUTFITDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DF9640)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19E03AA0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET UNITYSDK_OFFSET(0x19E03BC0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19DF85A0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19E03B30)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03C70)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03CB0)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03C90)
#define RPG_CLIENT_AETHEROUTFITDATA_INIT_OFFSET UNITYSDK_OFFSET(0x19DF9490)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03C80)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03CC0)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x19E03CA0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19DFB7F0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET UNITYSDK_OFFSET(0x19DFC480)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x19E03980)
#define RPG_CLIENT_AETHEROUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8BF0)
#define RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x19E03710)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherOutfitData_TypeDefinitionIndex = 62316;

	class AetherOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _ExpItemIDToSpiritDataMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _AllAetherMonsterDisplayAvatars_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllSpecialAetherMonsterAvatars_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllAetherMonsterAvatars_k__BackingField; // 0x28

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
