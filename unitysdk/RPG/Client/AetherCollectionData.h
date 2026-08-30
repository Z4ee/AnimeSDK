#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherDivideModule; }

#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703C90)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703DA0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703CB0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703DC0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET__AETHERDIVIDEMODULE_OFFSET UNITYSDK_OFFSET(0xC703B80)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703CA0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703DB0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC703DD0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC703790)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHMONSTERCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC7039B0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHSKILLCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC7037B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherCollectionData_TypeDefinitionIndex = 62317;

	class AetherCollectionData : public ::System::Object
	{
	public:
		::System::UInt32 _CurAetherMonsterCollectionCount_k__BackingField; // 0x10
		::System::UInt32 _TotalAetherSkillCollectionCount_k__BackingField; // 0x14
		::System::UInt32 _CurAetherSkillCollectionCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSkillCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHSKILLCOLLECTION_OFFSET))(this);
		}

		::System::Void _RefreshMonsterCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHMONSTERCOLLECTION_OFFSET))(this);
		}

		::System::UInt32 get_CurAetherMonsterCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_CurAetherMonsterCollectionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalAetherMonsterCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERMONSTERCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurAetherSkillCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_CurAetherSkillCollectionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalAetherSkillCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalAetherSkillCollectionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideModule* get__AetherDivideModule()
		{
			return ((::RPG::Client::AetherDivideModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET__AETHERDIVIDEMODULE_OFFSET))(this);
		}
	};
}
