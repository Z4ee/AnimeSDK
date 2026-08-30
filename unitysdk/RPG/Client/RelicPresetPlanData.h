#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_19.h"
#include "unitysdk/System/Object.h"

class Class_1_4C7B8542D6DC5824;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETPLANDATA_ADDRELIC_OFFSET UNITYSDK_OFFSET(0x1B672970)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B66ECD0)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B6708E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B66F020)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x1B6727D0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B6727F0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1B672830)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1B672850)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B672810)
#define RPG_CLIENT_RELICPRESETPLANDATA_ISSAMEPLAN_OFFSET UNITYSDK_OFFSET(0x1B6707A0)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x1B6727E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B672800)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1B672840)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1B672860)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B672820)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATERELIC_OFFSET UNITYSDK_OFFSET(0x1B6728E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1B66F5E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1B66F590)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B66F630)
#define RPG_CLIENT_RELICPRESETPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B672870)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanData_TypeDefinitionIndex = 66870;

	class RelicPresetPlanData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RelicUniqueIDs_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::Enum_3_71AA90D596A09AC8_19 _SourceType_k__BackingField; // 0x20
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x24
		::System::UInt32 _UniqueID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_BELONGAVATARID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RelicUniqueIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_RELICUNIQUEIDS_OFFSET))(this);
		}

		::System::Void set_RelicUniqueIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_RELICUNIQUEIDS_OFFSET))(this, a1);
		}

		::Enum_3_71AA90D596A09AC8_19 get_SourceType()
		{
			return ((::Enum_3_71AA90D596A09AC8_19(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_71AA90D596A09AC8_19 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicPresetPlanData* CreateByServer(::Class_1_4C7B8542D6DC5824* a1)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::Class_1_4C7B8542D6DC5824*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::RelicPresetPlanData* Create(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::Enum_3_71AA90D596A09AC8_19 a5)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean IsSamePlan(::RPG::Client::RelicPresetPlanData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicPresetPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_ISSAMEPLAN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void Update_2(::Enum_3_71AA90D596A09AC8_19 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_19))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET))(this, a1);
		}

		::System::Void UpdateRelic(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATERELIC_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelic(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_ADDRELIC_OFFSET))(this, a1);
		}
	};
}
