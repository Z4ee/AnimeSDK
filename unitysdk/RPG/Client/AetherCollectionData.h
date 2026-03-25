#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AetherDivideModule; }

#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F640)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F710)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F660)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F730)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_GET__AETHERDIVIDEMODULE_OFFSET UNITYSDK_OFFSET(0x906F580)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F650)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F720)
#define RPG_CLIENT_AETHERCOLLECTIONDATA_SET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x906F740)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x906F1F0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHMONSTERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x906F3A0)
#define RPG_CLIENT_AETHERCOLLECTIONDATA__REFRESHSKILLCOLLECTION_OFFSET UNITYSDK_OFFSET(0x906F210)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherCollectionData_TypeDefinitionIndex = 50541;

	class AetherCollectionData : public ::System::Object
	{
	public:
		::System::UInt32 _CurAetherMonsterCollectionCount_k__BackingField; // 0x10
		::System::UInt32 _CurAetherSkillCollectionCount_k__BackingField; // 0x14
		::System::UInt32 _TotalAetherSkillCollectionCount_k__BackingField; // 0x18

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

		::System::Void set_CurAetherMonsterCollectionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERMONSTERCOLLECTIONCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalAetherMonsterCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERMONSTERCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurAetherSkillCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_CurAetherSkillCollectionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_CURAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalAetherSkillCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalAetherSkillCollectionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_SET_TOTALAETHERSKILLCOLLECTIONCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideModule* get__AetherDivideModule()
		{
			return ((::RPG::Client::AetherDivideModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERCOLLECTIONDATA_GET__AETHERDIVIDEMODULE_OFFSET))(this);
		}
	};
}
