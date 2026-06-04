#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class TitanAtlasGroup; }
namespace RPG::Client { class TitanAtlasInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TITANATLASMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA77D70)
#define RPG_CLIENT_TITANATLASMODULE_GETALLBASEINFOS_OFFSET UNITYSDK_OFFSET(0xCA781F0)
#define RPG_CLIENT_TITANATLASMODULE_GETALLGROUPS_OFFSET UNITYSDK_OFFSET(0xCA77DB0)
#define RPG_CLIENT_TITANATLASMODULE_GETALLINFOS_OFFSET UNITYSDK_OFFSET(0xCA78020)
#define RPG_CLIENT_TITANATLASMODULE_GETALLNUM_OFFSET UNITYSDK_OFFSET(0xCA785B0)
#define RPG_CLIENT_TITANATLASMODULE_GETALLUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0xCA783C0)
#define RPG_CLIENT_TITANATLASMODULE_GETINITLOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xCA788A0)
#define RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xCA78C90)
#define RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xCA78A40)
#define RPG_CLIENT_TITANATLASMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCA77C70)
#define RPG_CLIENT_TITANATLASMODULE_NEEDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xCA78AA0)
#define RPG_CLIENT_TITANATLASMODULE_SETLOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xCA787E0)
#define RPG_CLIENT_TITANATLASMODULE_SET_LOCATIONINDEX_OFFSET UNITYSDK_OFFSET(0xCA78830)
#define RPG_CLIENT_TITANATLASMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA78D20)
#define RPG_CLIENT_TITANATLASMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xCA77D20)
#define RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA78DC0)
#define RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCA78D40)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasModule_TypeDefinitionIndex = 63760;

	class TitanAtlasModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>* _TitanAtlasGroups; // 0x10
		::System::UInt32 GroupInfoNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasGroup*>* GetAllGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllBaseInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLBASEINFOS_OFFSET))(this);
		}

		::System::UInt32 GetAllUnlockNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLUNLOCKNUM_OFFSET))(this);
		}

		::System::UInt32 GetAllNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETALLNUM_OFFSET))(this);
		}

		::System::Void SetLocationIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_SETLOCATIONINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetInitLocationIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GETINITLOCATIONINDEX_OFFSET))(this);
		}

		::System::Boolean NeedShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_NEEDSHOWREDDOT_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE__INITDATA_OFFSET))(this);
		}

		::System::UInt32 get_LocationIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONINDEX_OFFSET))(this);
		}

		::System::Void set_LocationIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_SET_LOCATIONINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_LocationGroupIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE_GET_LOCATIONGROUPINDEX_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
