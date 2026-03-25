#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_31;
namespace RPG::Client { class GridFightBonusParseData; }
namespace RPG::GameCore { class GridFightPortalBuffConfigRow; }
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9882F60)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9882E70)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0x98838E0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0x9883950)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9883220)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HADDELAYBONUS_OFFSET UNITYSDK_OFFSET(0x98836F0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9883650)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x98831B0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x9883730)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0x98831D0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x9883710)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISSHOWBONUS_OFFSET UNITYSDK_OFFSET(0x9883670)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x9882E20)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x9882E40)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x9883300)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_SHOWNPCIDLIST_OFFSET UNITYSDK_OFFSET(0x98832E0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x98831F0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET__REMARKROW_OFFSET UNITYSDK_OFFSET(0x9883500)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEBONUS_OFFSET UNITYSDK_OFFSET(0x9883060)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEDELAYBONUS_OFFSET UNITYSDK_OFFSET(0x9883100)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9882F50)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x9883740)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalData_TypeDefinitionIndex = 52847;

	class GridFightPortalData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPortalExpiredConfigRow* _ExpiredRow; // 0x10
		::RPG::GameCore::GridFightPortalBuffConfigRow* _Row; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPortalData* Create(::System::UInt32 portalID)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET))(portalID);
		}

		static ::RPG::Client::GridFightPortalData* Create_1(::Class_1_735612C94F558EAE_31* info)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::Class_1_735612C94F558EAE_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET))(info);
		}

		::RPG::Client::GridFightBonusParseData* ParseBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusParseData* ParseDelayBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEDELAYBONUS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsInbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISINBOOK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ShowNpcIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_SHOWNPCIDLIST_OFFSET))(this);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REMARK_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsShowBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISSHOWBONUS_OFFSET))(this);
		}

		::System::Boolean get_HadDelayBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HADDELAYBONUS_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPortalRemarkConfigRow* get__RemarkRow()
		{
			return ((::RPG::GameCore::GridFightPortalRemarkConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET__REMARKROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::UInt32 get_CurSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSEASONID_OFFSET))(this);
		}

		::System::UInt32 get_CurSubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSUBSEASONID_OFFSET))(this);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA__ISEXPIRED_OFFSET))(this);
		}
	};
}
