#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9C9FEF982623D49;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHEROUTFITDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90773C0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x9080610)
#define RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET UNITYSDK_OFFSET(0x9080790)
#define RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x90761D0)
#define RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x90806D0)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x9080870)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x90808B0)
#define RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x9080890)
#define RPG_CLIENT_AETHEROUTFITDATA_INIT_OFFSET UNITYSDK_OFFSET(0x90770A0)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x9080880)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x90808C0)
#define RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET UNITYSDK_OFFSET(0x90808A0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x9078EF0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9079AA0)
#define RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET UNITYSDK_OFFSET(0x90804C0)
#define RPG_CLIENT_AETHEROUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90767C0)
#define RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x90802B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherOutfitData_TypeDefinitionIndex = 50540;

	class AetherOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* _AllAetherMonsterAvatars_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _AllAetherMonsterDisplayAvatars_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* _ExpItemIDToSpiritDataMap; // 0x20
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

		::System::Void SyncInitMonsterAvatar(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B9C9FEF982623D49*>* spiritList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B9C9FEF982623D49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCINITMONSTERAVATAR_OFFSET))(this, spiritList);
		}

		::RPG::Client::AetherMonsterAvatarData* SyncSingleMonsterAvatar(::Class_1_B9C9FEF982623D49* spiritAvatar, ::System::Boolean isFromInit)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::Class_1_B9C9FEF982623D49*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCSINGLEMONSTERAVATAR_OFFSET))(this, spiritAvatar, isFromInit);
		}

		::System::Void SyncMonsterAvatarList(::System::Collections::Generic::IList_1<::Class_1_B9C9FEF982623D49*>* spiritList, ::System::Boolean isFromInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_B9C9FEF982623D49*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SYNCMONSTERAVATARLIST_OFFSET))(this, spiritList, isFromInit);
		}

		::RPG::Client::AetherMonsterAvatarData* GetOrCreateMonsterAvatar(::System::UInt32 id)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETORCREATEMONSTERAVATAR_OFFSET))(this, id);
		}

		::RPG::Client::AetherMonsterAvatarData* GetAetherMonsterAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERAVATAR_OFFSET))(this, avatarID);
		}

		::RPG::Client::AetherMonsterAvatarData* GetTrialAetherMonsterAvatar(::System::UInt32 trialAdvPlayerId)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETTRIALAETHERMONSTERAVATAR_OFFSET))(this, trialAdvPlayerId);
		}

		::RPG::Client::AetherMonsterAvatarDisplayData* GetAetherMonsterDisplayAvatarByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::AetherMonsterAvatarDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GETAETHERMONSTERDISPLAYAVATARBYITEMID_OFFSET))(this, itemID);
		}

		::System::Void _GenerateDisplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA__GENERATEDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* get_AllAetherMonsterAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERAVATARS_OFFSET))(this);
		}

		::System::Void set_AllAetherMonsterAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERAVATARS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* get_AllSpecialAetherMonsterAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET))(this);
		}

		::System::Void set_AllSpecialAetherMonsterAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLSPECIALAETHERMONSTERAVATARS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* get_AllAetherMonsterDisplayAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_GET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET))(this);
		}

		::System::Void set_AllAetherMonsterDisplayAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AetherMonsterAvatarDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHEROUTFITDATA_SET_ALLAETHERMONSTERDISPLAYAVATARS_OFFSET))(this, value);
		}
	};
}
