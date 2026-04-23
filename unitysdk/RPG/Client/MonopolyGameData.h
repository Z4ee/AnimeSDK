#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_141;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAAA2490)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETORIGINRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0xAAA2CF0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEIDBYRESULT_OFFSET UNITYSDK_OFFSET(0xAAA2B20)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEVALUE_OFFSET UNITYSDK_OFFSET(0xAAA28F0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESULTRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0xAAA2980)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_BASERAISEMAXVALUE_OFFSET UNITYSDK_OFFSET(0xAAA3390)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET UNITYSDK_OFFSET(0xAAA3450)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xAAA2F20)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAAA32B0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAAA32F0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xAAA33F0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0xAAA2350)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA32D0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET UNITYSDK_OFFSET(0xAAA3460)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAAA32C0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xAAA32E0)
#define RPG_CLIENT_MONOPOLYGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA2590)
#define RPG_CLIENT_MONOPOLYGAMEDATA__INITRESOURCE_OFFSET UNITYSDK_OFFSET(0xAAA2610)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameData_TypeDefinitionIndex = 61022;

	class MonopolyGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ResourceToValue; // 0x10
		::Class_1_43BD383C98B4C0C5_141* _GachaData_k__BackingField; // 0x18
		::RPG::GameCore::MonopolyGameConfigRow* _Row_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyGameData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MonopolyGameData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_CREATE_OFFSET))(id);
		}

		::System::Int32 GetResourceValue(::System::UInt32 resourceID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEVALUE_OFFSET))(this, resourceID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetResultResourceIDs(::System::Collections::Generic::List_1<::System::UInt32>* results)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESULTRESOURCEIDS_OFFSET))(this, results);
		}

		::System::UInt32 GetResourceIDByResult(::System::UInt32 result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEIDBYRESULT_OFFSET))(this, result);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetOriginResourceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETORIGINRESOURCEIDS_OFFSET))(this);
		}

		::System::Void _InitResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA__INITRESOURCE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyGameConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyGameConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyGameConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyGameConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyGameType get_GameType()
		{
			return ((::RPG::GameCore::MonopolyGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_GAMETYPE_OFFSET))(this);
		}

		::System::UInt32 get_BaseRaiseMaxValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_BASERAISEMAXVALUE_OFFSET))(this);
		}

		::System::UInt32 get_RaiseCurveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_RAISECURVEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ResourceIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_RESOURCEIDLIST_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_141* get_GachaData()
		{
			return ((::Class_1_43BD383C98B4C0C5_141*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET))(this);
		}

		::System::Void set_GachaData(::Class_1_43BD383C98B4C0C5_141* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET))(this, value);
		}
	};
}
