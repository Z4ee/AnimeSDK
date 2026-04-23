#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_24.h"
#include "unitysdk/System/Object.h"

class Class_1_0A12346BA559A290;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETPLANDATA_ADDRELIC_OFFSET UNITYSDK_OFFSET(0xAF9FA80)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xAF9BC50)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAF9D660)
#define RPG_CLIENT_RELICPRESETPLANDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF9BF60)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xAF9F8D0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAF9F8F0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xAF9F930)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xAF9F950)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xAF9F910)
#define RPG_CLIENT_RELICPRESETPLANDATA_ISSAMEPLAN_OFFSET UNITYSDK_OFFSET(0xAF9D570)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xAF9F8E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xAF9F900)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xAF9F940)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xAF9F960)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xAF9F920)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATERELIC_OFFSET UNITYSDK_OFFSET(0xAF9F9E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xAF9C5B0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET UNITYSDK_OFFSET(0xAF9C560)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xAF9C600)
#define RPG_CLIENT_RELICPRESETPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF9F970)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanData_TypeDefinitionIndex = 61580;

	class RelicPresetPlanData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RelicUniqueIDs_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x20
		::Enum_3_96F6662CA3713095_24 _SourceType_k__BackingField; // 0x24
		::System::UInt32 _UniqueID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_BELONGAVATARID_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RelicUniqueIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_RELICUNIQUEIDS_OFFSET))(this);
		}

		::System::Void set_RelicUniqueIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_RELICUNIQUEIDS_OFFSET))(this, value);
		}

		::Enum_3_96F6662CA3713095_24 get_SourceType()
		{
			return ((::Enum_3_96F6662CA3713095_24(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_96F6662CA3713095_24 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicPresetPlanData* CreateByServer(::Class_1_0A12346BA559A290* plan)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::Class_1_0A12346BA559A290*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET))(plan);
		}

		static ::RPG::Client::RelicPresetPlanData* Create(::System::UInt32 avatarID, ::System::String* name, ::System::UInt32 uniqueID, ::System::Collections::Generic::IList_1<::System::UInt32>* relicUniqueIDs, ::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET))(avatarID, name, uniqueID, relicUniqueIDs, sourceType);
		}

		::System::Boolean IsSamePlan(::RPG::Client::RelicPresetPlanData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_ISSAMEPLAN_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* relicUniqueIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_OFFSET))(this, relicUniqueIDs);
		}

		::System::Void Update_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_1_OFFSET))(this, name);
		}

		::System::Void Update_2(::Enum_3_96F6662CA3713095_24 sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET))(this, sourceType);
		}

		::System::Void UpdateRelic(::System::Int32 index, ::System::UInt32 relicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATERELIC_OFFSET))(this, index, relicID);
		}

		::System::Void AddRelic(::System::UInt32 relicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_ADDRELIC_OFFSET))(this, relicID);
		}
	};
}
