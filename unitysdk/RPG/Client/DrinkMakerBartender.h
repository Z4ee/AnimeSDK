#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6954D6F458B1D0FF;
class Class_1_98E26A5B2BD7AB20;
namespace RPG::Client { class DrinkMakerBartender_Cup; }
namespace RPG::Client { class DrinkMakerBartender_Decoration; }
namespace RPG::Client { class DrinkMakerBartender_Ice; }
namespace RPG::Client { class DrinkMakerBartender_Ingredient; }
namespace RPG::GameCore { class DrinkMakerLevelRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUPS_OFFSET UNITYSDK_OFFSET(0xB8050D0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUP_OFFSET UNITYSDK_OFFSET(0xB805670)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETDECORATION_OFFSET UNITYSDK_OFFSET(0xB805970)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICES_OFFSET UNITYSDK_OFFSET(0xB8053A0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICE_OFFSET UNITYSDK_OFFSET(0xB805770)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETINGREDIENT_OFFSET UNITYSDK_OFFSET(0xB805870)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0xB805B80)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVELROW_OFFSET UNITYSDK_OFFSET(0xB805D40)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xB805BA0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTEXP_OFFSET UNITYSDK_OFFSET(0xB805B40)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVELROW_OFFSET UNITYSDK_OFFSET(0xB805CE0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xB805B60)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB805BC0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0xB805B90)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0xB805BB0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTEXP_OFFSET UNITYSDK_OFFSET(0xB805B50)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0xB805B70)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0xB805AD0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB805A70)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECHEERSINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xB804E60)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECUPS_OFFSET UNITYSDK_OFFSET(0xB804460)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEDECORATIONS_OFFSET UNITYSDK_OFFSET(0xB804960)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEICES_OFFSET UNITYSDK_OFFSET(0xB8046E0)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xB804BE0)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8043A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_TypeDefinitionIndex = 59526;

	class DrinkMakerBartender : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ice*>* _AllIces; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Decoration*>* _AllDecorations; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Cup*>* _AllCups; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ingredient*>* _AllIngredients; // 0x28
		::System::UInt32 _LastLevel_k__BackingField; // 0x30
		::System::UInt32 _LastExp_k__BackingField; // 0x34
		::System::UInt32 _CurExp_k__BackingField; // 0x38
		::System::UInt32 _CurLevel_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Cup*>* GetCups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Cup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETCUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ice*>* GetIces()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETICES_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartender_Cup* GetCup(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Cup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETCUP_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Ice* GetIce(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ice*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETICE_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Ingredient* GetIngredient(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ingredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETINGREDIENT_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartender_Decoration* GetDecoration(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Decoration*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GETDECORATION_OFFSET))(this, a1);
		}

		::System::Void UpdateData(::Class_1_6954D6F458B1D0FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6954D6F458B1D0FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::Class_1_98E26A5B2BD7AB20* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98E26A5B2BD7AB20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTEXP_OFFSET))(this);
		}

		::System::Void set_LastExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVEL_OFFSET))(this);
		}

		::System::Void set_LastLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVEL_OFFSET))(this);
		}

		::System::Void set_CurLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_SET_CURLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_MAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerLevelRow* get_LastLevelRow()
		{
			return ((::RPG::GameCore::DrinkMakerLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVELROW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerLevelRow* get_CurLevelRow()
		{
			return ((::RPG::GameCore::DrinkMakerLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVELROW_OFFSET))(this);
		}

		::System::Void _CreateCups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATECUPS_OFFSET))(this);
		}

		::System::Void _CreateIces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEICES_OFFSET))(this);
		}

		::System::Void _CreateIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEINGREDIENTS_OFFSET))(this);
		}

		::System::Void _CreateDecorations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATEDECORATIONS_OFFSET))(this);
		}

		::System::Void _CreateCheersIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER__CREATECHEERSINGREDIENTS_OFFSET))(this);
		}
	};
}
