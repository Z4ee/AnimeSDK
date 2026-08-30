#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_27DCDC5CAB14C7C7_3;
class Class_1_3AD2528CD53B1639_3;
namespace RPG::Client { class DrinkMakerBartender_Cup; }
namespace RPG::Client { class DrinkMakerBartender_Decoration; }
namespace RPG::Client { class DrinkMakerBartender_Ice; }
namespace RPG::Client { class DrinkMakerBartender_Ingredient; }
namespace RPG::GameCore { class DrinkMakerLevelRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUPS_OFFSET UNITYSDK_OFFSET(0x1A66C7F0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETCUP_OFFSET UNITYSDK_OFFSET(0x1A66CD90)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETDECORATION_OFFSET UNITYSDK_OFFSET(0x1A66D090)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICES_OFFSET UNITYSDK_OFFSET(0x1A66CAC0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETICE_OFFSET UNITYSDK_OFFSET(0x1A66CE90)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GETINGREDIENT_OFFSET UNITYSDK_OFFSET(0x1A66CF90)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1A66D2A0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVELROW_OFFSET UNITYSDK_OFFSET(0x1A66D460)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1A66D2C0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTEXP_OFFSET UNITYSDK_OFFSET(0x1A66D260)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVELROW_OFFSET UNITYSDK_OFFSET(0x1A66D400)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0x1A66D280)
#define RPG_CLIENT_DRINKMAKERBARTENDER_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A66D2E0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0x1A66D2B0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_CURLEVEL_OFFSET UNITYSDK_OFFSET(0x1A66D2D0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTEXP_OFFSET UNITYSDK_OFFSET(0x1A66D270)
#define RPG_CLIENT_DRINKMAKERBARTENDER_SET_LASTLEVEL_OFFSET UNITYSDK_OFFSET(0x1A66D290)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET UNITYSDK_OFFSET(0x1A66D1F0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x1A66D190)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECHEERSINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1A66C580)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATECUPS_OFFSET UNITYSDK_OFFSET(0x1A66BB80)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEDECORATIONS_OFFSET UNITYSDK_OFFSET(0x1A66C080)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEICES_OFFSET UNITYSDK_OFFSET(0x1A66BE00)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CREATEINGREDIENTS_OFFSET UNITYSDK_OFFSET(0x1A66C300)
#define RPG_CLIENT_DRINKMAKERBARTENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66BAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_TypeDefinitionIndex = 63663;

	class DrinkMakerBartender : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ice*>* _AllIces; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Cup*>* _AllCups; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Decoration*>* _AllDecorations; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBartender_Ingredient*>* _AllIngredients; // 0x28
		::System::UInt32 _CurLevel_k__BackingField; // 0x30
		::System::UInt32 _LastExp_k__BackingField; // 0x34
		::System::UInt32 _LastLevel_k__BackingField; // 0x38
		::System::UInt32 _CurExp_k__BackingField; // 0x3C

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

		::System::Void UpdateData(::Class_1_3AD2528CD53B1639_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateData_1(::Class_1_27DCDC5CAB14C7C7_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_27DCDC5CAB14C7C7_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_UPDATEDATA_1_OFFSET))(this, a1);
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
