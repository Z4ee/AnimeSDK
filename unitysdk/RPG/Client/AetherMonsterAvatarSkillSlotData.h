#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA604A479B70DDEA;
class Class_1_FA4F4A67B1C04320_62;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSingleSlotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x907DB20)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x907E1E0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x9080290)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET UNITYSDK_OFFSET(0x907DA50)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET UNITYSDK_OFFSET(0x90802A0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x907DFF0)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x907B520)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET UNITYSDK_OFFSET(0x90801B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillSlotData_TypeDefinitionIndex = 50539;

	class AetherMonsterAvatarSkillSlotData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* _AetherMonsterAvatarSkillSingleSlotDict_k__BackingField; // 0x10
		::RPG::Client::AetherMonsterAvatarData* _AetherMonsterAvatarData; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* aetherMonsterAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__CTOR_OFFSET))(this, aetherMonsterAvatarData);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_62*>* passiveSkillItemList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_62*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SYNC_OFFSET))(this, passiveSkillItemList);
		}

		::Class_1_CA604A479B70DDEA* GetPropertyModifier()
		{
			return ((::Class_1_CA604A479B70DDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Boolean IsAnyCoreEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_ISANYCOREEQUIPPED_OFFSET))(this);
		}

		::System::UInt32 GetAetherSkillCoreSlotIndex(::System::UInt32 skillCoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GETAETHERSKILLCORESLOTINDEX_OFFSET))(this, skillCoreID);
		}

		::System::UInt32 _GetUnlockPromotion(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA__GETUNLOCKPROMOTION_OFFSET))(this, index);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* get_AetherMonsterAvatarSkillSingleSlotDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_GET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this);
		}

		::System::Void set_AetherMonsterAvatarSkillSingleSlotDict(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AetherMonsterAvatarSkillSingleSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLSLOTDATA_SET_AETHERMONSTERAVATARSKILLSINGLESLOTDICT_OFFSET))(this, value);
		}
	};
}
