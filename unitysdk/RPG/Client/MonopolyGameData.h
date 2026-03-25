#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_140;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D5C9F0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETORIGINRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0x9D5D250)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEIDBYRESULT_OFFSET UNITYSDK_OFFSET(0x9D5D080)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEVALUE_OFFSET UNITYSDK_OFFSET(0x9D5CE50)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESULTRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0x9D5CEE0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_BASERAISEMAXVALUE_OFFSET UNITYSDK_OFFSET(0x9D5D5A0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET UNITYSDK_OFFSET(0x9D5D660)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x9D5D480)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D5D4D0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9D5D510)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0x9D5D600)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0x9D5C8B0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9D5D4F0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET UNITYSDK_OFFSET(0x9D5D670)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D5D4E0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9D5D500)
#define RPG_CLIENT_MONOPOLYGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5CAF0)
#define RPG_CLIENT_MONOPOLYGAMEDATA__INITRESOURCE_OFFSET UNITYSDK_OFFSET(0x9D5CB70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameData_TypeDefinitionIndex = 53878;

	class MonopolyGameData : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_140* _GachaData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ResourceToValue; // 0x18
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

		::Class_1_43BD383C98B4C0C5_140* get_GachaData()
		{
			return ((::Class_1_43BD383C98B4C0C5_140*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET))(this);
		}

		::System::Void set_GachaData(::Class_1_43BD383C98B4C0C5_140* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_140*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET))(this, value);
		}
	};
}
