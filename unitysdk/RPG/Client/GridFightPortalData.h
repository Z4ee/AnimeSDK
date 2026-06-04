#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_381;
namespace RPG::Client { class GridFightBonusParseData; }
namespace RPG::GameCore { class GridFightPortalBuffConfigRow; }
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xBBCE060)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBBCDF70)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0xBBCF270)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0xBBCF300)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESCINGAME_OFFSET UNITYSDK_OFFSET(0xBBCE890)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBBCE460)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HADDELAYBONUS_OFFSET UNITYSDK_OFFSET(0xBBCEF90)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBCEEF0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBB3080)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBCF010)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0xBBCE410)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xBBCEFF0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISSHOWBONUS_OFFSET UNITYSDK_OFFSET(0xBBCEF10)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0xBBCDF20)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0xBBCDF40)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REMARK_OFFSET UNITYSDK_OFFSET(0xBBCEBA0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_SHOWNPCIDLIST_OFFSET UNITYSDK_OFFSET(0xBBCEB80)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBBCE430)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET__REMARKROW_OFFSET UNITYSDK_OFFSET(0xBBCEDA0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEBONUS_OFFSET UNITYSDK_OFFSET(0xBBCE160)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEDELAYBONUS_OFFSET UNITYSDK_OFFSET(0xBBCE2B0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSESTATICBONUS_OFFSET UNITYSDK_OFFSET(0xBBCE200)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSESTATICDELAYBONUS_OFFSET UNITYSDK_OFFSET(0xBBCE360)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCE050)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBBCF020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalData_TypeDefinitionIndex = 60857;

	class GridFightPortalData : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPortalBuffConfigRow* _Row; // 0x10
		::RPG::GameCore::GridFightPortalExpiredConfigRow* _ExpiredRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPortalData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPortalData* Create_1(::Class_1_D17272E82AE804C2_381* a1)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::Class_1_D17272E82AE804C2_381*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET))(a1);
		}

		::RPG::Client::GridFightBonusParseData* ParseBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusParseData* ParseStaticBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSESTATICBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusParseData* ParseDelayBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSEDELAYBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusParseData* ParseStaticDelayBonus()
		{
			return ((::RPG::Client::GridFightBonusParseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_PARSESTATICDELAYBONUS_OFFSET))(this);
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

		::System::String* get_DescInGame()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESCINGAME_OFFSET))(this);
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
