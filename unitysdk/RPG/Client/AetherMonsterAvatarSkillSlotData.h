#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44250175B60B216B;
class Class_1_D17272E82AE804C2_80;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSingleSlotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x17EACB30)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x17EAC640)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x17EACC40)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET UNITYSDK_OFFSET(0x17EACA60)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x17EACC50)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x17EAC370)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAC040)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x17EAC260)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSlotData_TypeDefinitionIndex = 59476;

	class AetherMonsterAvatarSkillSlotData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* _AetherMonsterAvatarSkillSingleSlotDict_k__BackingField; // 0x10
		::RPG::Client::AetherMonsterAvatarData* _AetherMonsterAvatarData; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_80*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_80*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET))(this, a1);
		}

		::Class_1_44250175B60B216B* GetPropertyModifier()
		{
			return ((::Class_1_44250175B60B216B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Boolean IsAnyCoreEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetAetherSkillCoreSlotIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 _GetUnlockPromotion(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* get_AetherMonsterAvatarSkillSingleSlotDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillSingleSlotDict(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this, a1);
		}
	};
}
