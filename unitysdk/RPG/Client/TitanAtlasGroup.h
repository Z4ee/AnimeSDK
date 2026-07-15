#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasInfo; }
namespace RPG::GameCore { class TitanAtlasGroupRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TITANATLASGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x178A6BA0)
#define RPG_CLIENT_TITANATLASGROUP_GETALLBASEINFOS_OFFSET UNITYSDK_OFFSET(0x178A6E20)
#define RPG_CLIENT_TITANATLASGROUP_GETALLINFOS_OFFSET UNITYSDK_OFFSET(0x178A6C20)
#define RPG_CLIENT_TITANATLASGROUP_GETALLNUM_OFFSET UNITYSDK_OFFSET(0x178A75D0)
#define RPG_CLIENT_TITANATLASGROUP_GETALLUNLOCKNUM_OFFSET UNITYSDK_OFFSET(0x178A73E0)
#define RPG_CLIENT_TITANATLASGROUP_GETRENEWABLEINFO_OFFSET UNITYSDK_OFFSET(0x178A71F0)
#define RPG_CLIENT_TITANATLASGROUP_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x178A7A10)
#define RPG_CLIENT_TITANATLASGROUP_GET_CHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x178A7AD0)
#define RPG_CLIENT_TITANATLASGROUP_GET_DESC_OFFSET UNITYSDK_OFFSET(0x178A7950)
#define RPG_CLIENT_TITANATLASGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x178A7810)
#define RPG_CLIENT_TITANATLASGROUP_GET_INFOS_OFFSET UNITYSDK_OFFSET(0x178A7AB0)
#define RPG_CLIENT_TITANATLASGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x178A7890)
#define RPG_CLIENT_TITANATLASGROUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0x178A7830)
#define RPG_CLIENT_TITANATLASGROUP_NEEDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x178A7630)
#define RPG_CLIENT_TITANATLASGROUP_SET_CHANGEINFOS_OFFSET UNITYSDK_OFFSET(0x178A7AE0)
#define RPG_CLIENT_TITANATLASGROUP_SET_ID_OFFSET UNITYSDK_OFFSET(0x178A7820)
#define RPG_CLIENT_TITANATLASGROUP_SET_INFOS_OFFSET UNITYSDK_OFFSET(0x178A7AC0)
#define RPG_CLIENT_TITANATLASGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x178A6C10)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasGroup_TypeDefinitionIndex = 65125;

	class TitanAtlasGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* _Infos_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* _ChangeInfos_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TitanAtlasGroup* Create(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* a3)
		{
			return ((::RPG::Client::TitanAtlasGroup*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GETALLINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>* GetAllBaseInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GETALLBASEINFOS_OFFSET))(this);
		}

		::System::UInt32 GetAllUnlockNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GETALLUNLOCKNUM_OFFSET))(this);
		}

		::System::UInt32 GetAllNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GETALLNUM_OFFSET))(this);
		}

		::System::Boolean NeedShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_NEEDSHOWREDDOT_OFFSET))(this);
		}

		::RPG::Client::TitanAtlasInfo* GetRenewableInfo(::RPG::Client::TitanAtlasInfo* a1)
		{
			return ((::RPG::Client::TitanAtlasInfo*(*)(::PVOID, ::RPG::Client::TitanAtlasInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GETRENEWABLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TitanAtlasGroupRow* get_Row()
		{
			return ((::RPG::GameCore::TitanAtlasGroupRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_DESC_OFFSET))(this);
		}

		::System::String* get_BgColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_BGCOLOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* get_Infos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_INFOS_OFFSET))(this);
		}

		::System::Void set_Infos(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_SET_INFOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* get_ChangeInfos()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_GET_CHANGEINFOS_OFFSET))(this);
		}

		::System::Void set_ChangeInfos(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP_SET_CHANGEINFOS_OFFSET))(this, a1);
		}
	};
}
