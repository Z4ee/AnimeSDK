#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_DB51D85EFE2D324C;
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINDCHESTDATA_GET_FINDCHESTMARKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBA1FED0)
#define RPG_CLIENT_FINDCHESTDATA_GET_FUNCID_OFFSET UNITYSDK_OFFSET(0xBA1FC90)
#define RPG_CLIENT_FINDCHESTDATA_GET_ISTRIGGERBYAVATAR_OFFSET UNITYSDK_OFFSET(0xBA1FE60)
#define RPG_CLIENT_FINDCHESTDATA_GET_MAPICONID_OFFSET UNITYSDK_OFFSET(0xBA1FDF0)
#define RPG_CLIENT_FINDCHESTDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xBA1FD10)
#define RPG_CLIENT_FINDCHESTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBA1FCB0)
#define RPG_CLIENT_FINDCHESTDATA_GET_SPECIALMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xBA1FD80)
#define RPG_CLIENT_FINDCHESTDATA_GET_USETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBA1FEF0)
#define RPG_CLIENT_FINDCHESTDATA_SET_FINDCHESTMARKCONFIGS_OFFSET UNITYSDK_OFFSET(0xBA1FEE0)
#define RPG_CLIENT_FINDCHESTDATA_SET_FUNCID_OFFSET UNITYSDK_OFFSET(0xBA1FCA0)
#define RPG_CLIENT_FINDCHESTDATA_SET_USETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBA1FF00)
#define RPG_CLIENT_FINDCHESTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xBA1FAF0)
#define RPG_CLIENT_FINDCHESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1FA50)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestData_TypeDefinitionIndex = 59995;

	class FindChestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* _FindChestMarkConfigs_k__BackingField; // 0x10
		::System::Int64 _UseTimeStamp_k__BackingField; // 0x18
		::System::UInt32 _FuncID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncData(::Class_1_DB51D85EFE2D324C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB51D85EFE2D324C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SYNCDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_FuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_FUNCID_OFFSET))(this);
		}

		::System::Void set_FuncID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_FUNCID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FindChestFuncDataRow* get_Row()
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_SpecialMappinginfo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_SPECIALMAPPINGINFO_OFFSET))(this);
		}

		::System::UInt32 get_MapIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_MAPICONID_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerByAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_ISTRIGGERBYAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* get_FindChestMarkConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_FINDCHESTMARKCONFIGS_OFFSET))(this);
		}

		::System::Void set_FindChestMarkConfigs(::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_FINDCHESTMARKCONFIGS_OFFSET))(this, a1);
		}

		::System::Int64 get_UseTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_USETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UseTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_USETIMESTAMP_OFFSET))(this, a1);
		}
	};
}
