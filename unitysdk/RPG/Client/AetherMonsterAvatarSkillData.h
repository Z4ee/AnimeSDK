#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44250175B60B216B;
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherMonsterAvatarSkillSingleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_GETPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0xB280E60)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xB281A20)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0xB281A30)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_SYNCSKILLDATA_OFFSET UNITYSDK_OFFSET(0xB280A10)
#define RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB27DAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarSkillData_TypeDefinitionIndex = 58210;

	class AetherMonsterAvatarSkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AetherMonsterAvatarSkillSingleData*>* _SkillDataList_k__BackingField; // 0x10
		::RPG::Client::AetherMonsterAvatarData* _AetherMonsterAvatarData; // 0x18

		::System::Void _ctor(::RPG::Client::AetherMonsterAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_SYNCSKILLDATA_OFFSET))(this);
		}

		::Class_1_44250175B60B216B* GetPropertyModifier()
		{
			return ((::Class_1_44250175B60B216B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_GETPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AetherMonsterAvatarSkillSingleData*>* get_SkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AetherMonsterAvatarSkillSingleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_GET_SKILLDATALIST_OFFSET))(this);
		}

		::System::Void set_SkillDataList(::System::Collections::Generic::List_1<::RPG::Client::AetherMonsterAvatarSkillSingleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AetherMonsterAvatarSkillSingleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERMONSTERAVATARSKILLDATA_SET_SKILLDATALIST_OFFSET))(this, a1);
		}
	};
}
