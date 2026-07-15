#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_909;
class Class_1_7BFB07C3AB2D97E4_1;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueTournFormulaAeonIconRow; }
namespace RPG::GameCore { class RogueTournFormulaDisplayRow; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_ROGUEFORMULADATA_CHECKISACTIVEWITHBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0x1A450EE0)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_1_OFFSET UNITYSDK_OFFSET(0x1A4506A0)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A450540)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATEGAMEPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1A448940)
#define RPG_CLIENT_ROGUEFORMULADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A450170)
#define RPG_CLIENT_ROGUEFORMULADATA_GETFORMULASORTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A450D40)
#define RPG_CLIENT_ROGUEFORMULADATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A450CB0)
#define RPG_CLIENT_ROGUEFORMULADATA_GETRARITYBGPATH_OFFSET UNITYSDK_OFFSET(0x1A4515D0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1A450880)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_DESCPARAM_OFFSET UNITYSDK_OFFSET(0x1A4519D0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A4518B0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1A451A30)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_FORMULAID_OFFSET UNITYSDK_OFFSET(0x1A451640)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x1A450DC0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A450810)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFCOUNTITEM_OFFSET UNITYSDK_OFFSET(0x1A4512D0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1A450BF0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A451750)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SHORTDESC_OFFSET UNITYSDK_OFFSET(0x1A451940)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_STORYJSONPATH_OFFSET UNITYSDK_OFFSET(0x1A451F10)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_STORYTEXT_OFFSET UNITYSDK_OFFSET(0x1A451E80)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A4509E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFCOUNTITEM_OFFSET UNITYSDK_OFFSET(0x1A451450)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1A450C50)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1A451650)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONCARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1A450B80)
#define RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A450B10)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULADISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1A451C50)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULAROW_OFFSET UNITYSDK_OFFSET(0x1A4516F0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__MAINAEONICONROW_OFFSET UNITYSDK_OFFSET(0x1A450920)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1A4517E0)
#define RPG_CLIENT_ROGUEFORMULADATA_GET__SUBAEONICONROW_OFFSET UNITYSDK_OFFSET(0x1A450A50)
#define RPG_CLIENT_ROGUEFORMULADATA_ISCOMPOUNDFORMULA_OFFSET UNITYSDK_OFFSET(0x1A4513F0)
#define RPG_CLIENT_ROGUEFORMULADATA_ISFORMULAEXISTS_OFFSET UNITYSDK_OFFSET(0x1A450110)
#define RPG_CLIENT_ROGUEFORMULADATA_ISINITIALFORMULA_OFFSET UNITYSDK_OFFSET(0x1A451570)
#define RPG_CLIENT_ROGUEFORMULADATA_REFRESHBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1A450490)
#define RPG_CLIENT_ROGUEFORMULADATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A450410)
#define RPG_CLIENT_ROGUEFORMULADATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A450CF0)
#define RPG_CLIENT_ROGUEFORMULADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A450400)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaData_TypeDefinitionIndex = 64217;

	class RogueFormulaData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_909* _BuffCountData; // 0x10
		::System::UInt32 _FormulaID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean IsFormulaExists(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISFORMULAEXISTS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* Create(::Class_1_7BFB07C3AB2D97E4_1* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::Class_1_7BFB07C3AB2D97E4_1*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueFormulaData* CreateDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* CreateDisplayData_1(::Struct_2_FD0368737CBF6F9B_1 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::Struct_2_FD0368737CBF6F9B_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEDISPLAYDATA_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* CreateGamePreviewData(::System::UInt32 a1, ::RPG::Client::RogueFormulaInfo* a2)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CREATEGAMEPREVIEWDATA_OFFSET))(a1, a2);
		}

		::System::String* get_MainAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_SubAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_UltimateAeonIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONICONPATH_OFFSET))(this);
		}

		::System::String* get_UltimateAeonCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ULTIMATEAEONCARDICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaAeonIconRow* get__MainAeonIconRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaAeonIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__MAINAEONICONROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaAeonIconRow* get__SubAeonIconRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaAeonIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__SUBAEONICONROW_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_7BFB07C3AB2D97E4_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffCount(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_REFRESHBUFFCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetFormulaSortPriority(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETFORMULASORTPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsActiveWithBuffChange(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_CHECKISACTIVEWITHBUFFCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean IsInitialFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISINITIALFORMULA_OFFSET))(this);
		}

		::System::Boolean IsCompoundFormula()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_ISCOMPOUNDFORMULA_OFFSET))(this);
		}

		::System::String* GetRarityBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GETRARITYBGPATH_OFFSET))(this);
		}

		::System::UInt32 get_FormulaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_FORMULAID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_TOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueFormulaCategory get_Category()
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SHORTDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParam()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_DESCPARAM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_STORYTEXT_OFFSET))(this);
		}

		::System::String* get_StoryJSONPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_STORYJSONPATH_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_MainBuffCountItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFCOUNTITEM_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_SubBuffCountItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFCOUNTITEM_OFFSET))(this);
		}

		::System::UInt32 get_MainBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_MAINBUFFTYPE_OFFSET))(this);
		}

		::System::UInt32 get_SubBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_SUBBUFFTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET_ISACTIVATED_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaRow* get__FormulaRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULAROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournFormulaDisplayRow* get__FormulaDisplayRow()
		{
			return ((::RPG::GameCore::RogueTournFormulaDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__FORMULADISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULADATA_GET__MAZEBUFFROW_OFFSET))(this);
		}
	};
}
