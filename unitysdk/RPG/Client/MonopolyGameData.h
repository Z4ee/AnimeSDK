#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_154;
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC16F240)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETORIGINRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0xC16FB10)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEIDBYRESULT_OFFSET UNITYSDK_OFFSET(0xC16F930)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEVALUE_OFFSET UNITYSDK_OFFSET(0xC16F6E0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GETRESULTRESOURCEIDS_OFFSET UNITYSDK_OFFSET(0xC16F770)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_BASERAISEMAXVALUE_OFFSET UNITYSDK_OFFSET(0xC16FE90)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET UNITYSDK_OFFSET(0xC16FF50)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xC16FD60)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC16FDB0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC16FDF0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xC16FEF0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_RESOURCEIDLIST_OFFSET UNITYSDK_OFFSET(0xC16F100)
#define RPG_CLIENT_MONOPOLYGAMEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC16FDD0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET UNITYSDK_OFFSET(0xC16FF60)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC16FDC0)
#define RPG_CLIENT_MONOPOLYGAMEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xC16FDE0)
#define RPG_CLIENT_MONOPOLYGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC16F340)
#define RPG_CLIENT_MONOPOLYGAMEDATA__INITRESOURCE_OFFSET UNITYSDK_OFFSET(0xC16F3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameData_TypeDefinitionIndex = 61956;

	class MonopolyGameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ResourceToValue; // 0x10
		::Class_1_43BD383C98B4C0C5_154* _GachaData_k__BackingField; // 0x18
		::RPG::GameCore::MonopolyGameConfigRow* _Row_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyGameData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonopolyGameData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_CREATE_OFFSET))(a1);
		}

		::System::Int32 GetResourceValue(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetResultResourceIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESULTRESOURCEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 GetResourceIDByResult(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GETRESOURCEIDBYRESULT_OFFSET))(this, a1);
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

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyGameConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyGameConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyGameConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyGameConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_ROW_OFFSET))(this, a1);
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

		::Class_1_43BD383C98B4C0C5_154* get_GachaData()
		{
			return ((::Class_1_43BD383C98B4C0C5_154*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_GET_GACHADATA_OFFSET))(this);
		}

		::System::Void set_GachaData(::Class_1_43BD383C98B4C0C5_154* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_154*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEDATA_SET_GACHADATA_OFFSET))(this, a1);
		}
	};
}
