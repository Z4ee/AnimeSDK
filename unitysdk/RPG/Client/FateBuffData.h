#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_CB2863802B65A55F;
class Class_1_D17272E82AE804C2_298;
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitData; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATAWITHLEVEL_OFFSET UNITYSDK_OFFSET(0xB97F9C0)
#define RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB97F7C0)
#define RPG_CLIENT_FATEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB97F740)
#define RPG_CLIENT_FATEBUFFDATA_GETLEVELAFTERADDEXP_OFFSET UNITYSDK_OFFSET(0xB97FAB0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ALLEXP_OFFSET UNITYSDK_OFFSET(0xB97FFD0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET UNITYSDK_OFFSET(0xB981890)
#define RPG_CLIENT_FATEBUFFDATA_GET_AMPLIFICATIONVALUE_OFFSET UNITYSDK_OFFSET(0xB9813E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xB97FF80)
#define RPG_CLIENT_FATEBUFFDATA_GET_BUFFTAG_OFFSET UNITYSDK_OFFSET(0xB9815B0)
#define RPG_CLIENT_FATEBUFFDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET UNITYSDK_OFFSET(0xB980930)
#define RPG_CLIENT_FATEBUFFDATA_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0xB980010)
#define RPG_CLIENT_FATEBUFFDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xB980B70)
#define RPG_CLIENT_FATEBUFFDATA_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xB981550)
#define RPG_CLIENT_FATEBUFFDATA_GET_HAVECOUNT_OFFSET UNITYSDK_OFFSET(0xB97FFA0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB981570)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISMAINTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xB9809B0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB97FF60)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xB97FFC0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISSUBTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xB9809E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0xB980030)
#define RPG_CLIENT_FATEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB97FFF0)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0xB980190)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITID_OFFSET UNITYSDK_OFFSET(0xB980290)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB97FBA0)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xB981530)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFPARAMARR_OFFSET UNITYSDK_OFFSET(0xB980C60)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xB980AF0)
#define RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDMAINTRAITID_OFFSET UNITYSDK_OFFSET(0xB980670)
#define RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDSUBTRAITID_OFFSET UNITYSDK_OFFSET(0xB980990)
#define RPG_CLIENT_FATEBUFFDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB980A60)
#define RPG_CLIENT_FATEBUFFDATA_GET_NEEDEXPLIST_OFFSET UNITYSDK_OFFSET(0xB97FCB0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ORIGINMAINTRAITID_OFFSET UNITYSDK_OFFSET(0xB980850)
#define RPG_CLIENT_FATEBUFFDATA_GET_ORIGINSUBTRAITID_OFFSET UNITYSDK_OFFSET(0xB980870)
#define RPG_CLIENT_FATEBUFFDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB981590)
#define RPG_CLIENT_FATEBUFFDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB980050)
#define RPG_CLIENT_FATEBUFFDATA_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xB981710)
#define RPG_CLIENT_FATEBUFFDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xB9812F0)
#define RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0xB980400)
#define RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITID_OFFSET UNITYSDK_OFFSET(0xB980610)
#define RPG_CLIENT_FATEBUFFDATA_SET_ALLEXP_OFFSET UNITYSDK_OFFSET(0xB97FFE0)
#define RPG_CLIENT_FATEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xB97FF90)
#define RPG_CLIENT_FATEBUFFDATA_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0xB980020)
#define RPG_CLIENT_FATEBUFFDATA_SET_HAVECOUNT_OFFSET UNITYSDK_OFFSET(0xB97FFB0)
#define RPG_CLIENT_FATEBUFFDATA_SET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0xB980040)
#define RPG_CLIENT_FATEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB980000)
#define RPG_CLIENT_FATEBUFFDATA_SET_MODIFIEDSUBTRAITID_OFFSET UNITYSDK_OFFSET(0xB9809A0)
#define RPG_CLIENT_FATEBUFFDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB97FA50)
#define RPG_CLIENT_FATEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB97F730)
#define RPG_CLIENT_FATEBUFFDATA__SETNEEDEXPLIST_OFFSET UNITYSDK_OFFSET(0xB97FD50)
#define RPG_CLIENT_FATEBUFFDATA__SYNCLEVELEXP_OFFSET UNITYSDK_OFFSET(0xB97F860)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffData_TypeDefinitionIndex = 59793;

	class FateBuffData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AmplificationParamStartIndex = 0xA; // 0x0
		::RPG::Client::FateBuffTraitInfo* _BelongBuffInfo; // 0x10
		::Class_1_CB2863802B65A55F* _Row; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* _BuffCostArr; // 0x20
		::RPG::Client::FateTraitData* _MainTraitData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>* _AllLevelBuffPreviewDict; // 0x30
		::RPG::Client::FateTraitData* _SubTraitData; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _NeedExpList; // 0x40
		::System::UInt32 _LevelUpNeedExp_k__BackingField; // 0x48
		::System::UInt32 _CurExp_k__BackingField; // 0x4C
		::System::UInt32 _BuffID_k__BackingField; // 0x50
		::System::UInt32 _AllExp_k__BackingField; // 0x54
		::System::UInt32 _ModifiedSubTraitID_k__BackingField; // 0x58
		::System::UInt32 _MaxLevel; // 0x5C
		::System::UInt32 _CasterModifyMainTraitID; // 0x60
		::System::UInt32 _HaveCount_k__BackingField; // 0x64
		::System::UInt32 _Level_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateBuffData* Create(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::FateBuffData* CreateDisplayData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::FateBuffData* CreateDisplayDataWithLevel(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATAWITHLEVEL_OFFSET))(a1, a2, a3);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_298* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_298*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 GetLevelAfterAddExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GETLEVELAFTERADDEXP_OFFSET))(this, a1);
		}

		::System::Void _SetNeedExpList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__SETNEEDEXPLIST_OFFSET))(this);
		}

		::System::Void _SyncLevelExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__SYNCLEVELEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HaveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_HAVECOUNT_OFFSET))(this);
		}

		::System::Void set_HaveCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_HAVECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISOWNED_OFFSET))(this);
		}

		::System::UInt32 get_AllExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ALLEXP_OFFSET))(this);
		}

		::System::Void set_AllExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_ALLEXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_CUREXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_LEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::Void set_LevelUpNeedExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_LEVELUPNEEDEXP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::Class_1_CB2863802B65A55F* get_Row()
		{
			return ((::Class_1_CB2863802B65A55F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_MainTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITDATA_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_SubTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITDATA_OFFSET))(this);
		}

		::System::UInt32 get_MainTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_SubTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_OriginMainTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ORIGINMAINTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_OriginSubTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ORIGINSUBTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ModifiedMainTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDMAINTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ModifiedSubTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDSUBTRAITID_OFFSET))(this);
		}

		::System::Void set_ModifiedSubTraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_MODIFIEDSUBTRAITID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainTraitModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISMAINTRAITMODIFIED_OFFSET))(this);
		}

		::System::Boolean get_IsSubTraitModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISSUBTRAITMODIFIED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_MazeBuffParamArr()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFPARAMARR_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateBuffRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateBuffRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_BUFFTAG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NeedExpList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_NEEDEXPLIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_CasterModifyMainTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET))(this);
		}

		::System::UInt32 get_AmplificationValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_AMPLIFICATIONVALUE_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>* get_AllLevelBuffPreviewDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET))(this);
		}
	};
}
