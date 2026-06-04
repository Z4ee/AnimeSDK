#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_17.h"
#include "unitysdk/System/Object.h"

class Class_1_4C7B8542D6DC5824;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICPRESETPLANDATA_ADDRELIC_OFFSET UNITYSDK_OFFSET(0xC6E7820)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xC6E3710)
#define RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC6E5190)
#define RPG_CLIENT_RELICPRESETPLANDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6E3A60)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xC6E7680)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC6E76A0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xC6E76E0)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC6E7700)
#define RPG_CLIENT_RELICPRESETPLANDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC6E76C0)
#define RPG_CLIENT_RELICPRESETPLANDATA_ISSAMEPLAN_OFFSET UNITYSDK_OFFSET(0xC6E5050)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0xC6E7690)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC6E76B0)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_RELICUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xC6E76F0)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xC6E7710)
#define RPG_CLIENT_RELICPRESETPLANDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC6E76D0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATERELIC_OFFSET UNITYSDK_OFFSET(0xC6E7790)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xC6E4020)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET UNITYSDK_OFFSET(0xC6E3FD0)
#define RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xC6E4070)
#define RPG_CLIENT_RELICPRESETPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E7720)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPlanData_TypeDefinitionIndex = 62513;

	class RelicPresetPlanData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RelicUniqueIDs_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x20
		::System::UInt32 _UniqueID_k__BackingField; // 0x24
		::Enum_3_71AA90D596A09AC8_17 _SourceType_k__BackingField; // 0x28

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

		::Enum_3_71AA90D596A09AC8_17 get_SourceType()
		{
			return ((::Enum_3_71AA90D596A09AC8_17(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_71AA90D596A09AC8_17 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicPresetPlanData* CreateByServer(::Class_1_4C7B8542D6DC5824* a1)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::Class_1_4C7B8542D6DC5824*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATEBYSERVER_OFFSET))(a1);
		}

		static ::RPG::Client::RelicPresetPlanData* Create(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::Enum_3_71AA90D596A09AC8_17 a5)
		{
			return ((::RPG::Client::RelicPresetPlanData*(*)(::System::UInt32, ::System::String*, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
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

		::System::Void Update_2(::Enum_3_71AA90D596A09AC8_17 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_17))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPLANDATA_UPDATE_2_OFFSET))(this, a1);
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
