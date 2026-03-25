#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_34E8D4945AB838AE;
class Class_1_FA4F4A67B1C04320_275;
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitData; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATAWITHLEVEL_OFFSET UNITYSDK_OFFSET(0x966EE00)
#define RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x966EC30)
#define RPG_CLIENT_FATEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x966EBB0)
#define RPG_CLIENT_FATEBUFFDATA_GETLEVELAFTERADDEXP_OFFSET UNITYSDK_OFFSET(0x966EEF0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ALLEXP_OFFSET UNITYSDK_OFFSET(0x966F240)
#define RPG_CLIENT_FATEBUFFDATA_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET UNITYSDK_OFFSET(0x9670F10)
#define RPG_CLIENT_FATEBUFFDATA_GET_AMPLIFICATIONVALUE_OFFSET UNITYSDK_OFFSET(0x9670B70)
#define RPG_CLIENT_FATEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x966F1F0)
#define RPG_CLIENT_FATEBUFFDATA_GET_BUFFTAG_OFFSET UNITYSDK_OFFSET(0x96708E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET UNITYSDK_OFFSET(0x9670B10)
#define RPG_CLIENT_FATEBUFFDATA_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x966F280)
#define RPG_CLIENT_FATEBUFFDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x966FAC0)
#define RPG_CLIENT_FATEBUFFDATA_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0x96704A0)
#define RPG_CLIENT_FATEBUFFDATA_GET_HAVECOUNT_OFFSET UNITYSDK_OFFSET(0x966F210)
#define RPG_CLIENT_FATEBUFFDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x96704C0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISMAINTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0x966F900)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x966F1D0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0x966F230)
#define RPG_CLIENT_FATEBUFFDATA_GET_ISSUBTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0x966F930)
#define RPG_CLIENT_FATEBUFFDATA_GET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x966F2A0)
#define RPG_CLIENT_FATEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x966F260)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0x966F400)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAINTRAITID_OFFSET UNITYSDK_OFFSET(0x966F500)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9670A00)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9670480)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFPARAMARR_OFFSET UNITYSDK_OFFSET(0x966FBA0)
#define RPG_CLIENT_FATEBUFFDATA_GET_MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x966FA40)
#define RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDMAINTRAITID_OFFSET UNITYSDK_OFFSET(0x966F7E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_MODIFIEDSUBTRAITID_OFFSET UNITYSDK_OFFSET(0x966F8E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x966F9B0)
#define RPG_CLIENT_FATEBUFFDATA_GET_NEEDEXPLIST_OFFSET UNITYSDK_OFFSET(0x9670960)
#define RPG_CLIENT_FATEBUFFDATA_GET_ORIGINMAINTRAITID_OFFSET UNITYSDK_OFFSET(0x966F8A0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ORIGINSUBTRAITID_OFFSET UNITYSDK_OFFSET(0x966F8C0)
#define RPG_CLIENT_FATEBUFFDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x96704E0)
#define RPG_CLIENT_FATEBUFFDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x966F2C0)
#define RPG_CLIENT_FATEBUFFDATA_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x9670D80)
#define RPG_CLIENT_FATEBUFFDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x9670390)
#define RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0x966F570)
#define RPG_CLIENT_FATEBUFFDATA_GET_SUBTRAITID_OFFSET UNITYSDK_OFFSET(0x966F780)
#define RPG_CLIENT_FATEBUFFDATA_SET_ALLEXP_OFFSET UNITYSDK_OFFSET(0x966F250)
#define RPG_CLIENT_FATEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x966F200)
#define RPG_CLIENT_FATEBUFFDATA_SET_CUREXP_OFFSET UNITYSDK_OFFSET(0x966F290)
#define RPG_CLIENT_FATEBUFFDATA_SET_HAVECOUNT_OFFSET UNITYSDK_OFFSET(0x966F220)
#define RPG_CLIENT_FATEBUFFDATA_SET_LEVELUPNEEDEXP_OFFSET UNITYSDK_OFFSET(0x966F2B0)
#define RPG_CLIENT_FATEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x966F270)
#define RPG_CLIENT_FATEBUFFDATA_SET_MODIFIEDSUBTRAITID_OFFSET UNITYSDK_OFFSET(0x966F8F0)
#define RPG_CLIENT_FATEBUFFDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x966EE90)
#define RPG_CLIENT_FATEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x966EBA0)
#define RPG_CLIENT_FATEBUFFDATA__SETNEEDEXPLIST_OFFSET UNITYSDK_OFFSET(0x966EFD0)
#define RPG_CLIENT_FATEBUFFDATA__SYNCLEVELEXP_OFFSET UNITYSDK_OFFSET(0x966ECD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffData_TypeDefinitionIndex = 51914;

	class FateBuffData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _AmplificationParamStartIndex = 0xA; // 0x0
		::Class_1_34E8D4945AB838AE* _Row; // 0x10
		::RPG::Client::FateTraitData* _MainTraitData; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NeedExpList; // 0x20
		::RPG::Client::FateTraitData* _SubTraitData; // 0x28
		::RPG::Client::FateBuffTraitInfo* _BelongBuffInfo; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>* _AllLevelBuffPreviewDict; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* _BuffCostArr; // 0x40
		::System::UInt32 _CurExp_k__BackingField; // 0x48
		::System::UInt32 _BuffID_k__BackingField; // 0x4C
		::System::UInt32 _LevelUpNeedExp_k__BackingField; // 0x50
		::System::UInt32 _CasterModifyMainTraitID; // 0x54
		::System::UInt32 _AllExp_k__BackingField; // 0x58
		::System::UInt32 _HaveCount_k__BackingField; // 0x5C
		::System::UInt32 _ModifiedSubTraitID_k__BackingField; // 0x60
		::System::UInt32 _MaxLevel; // 0x64
		::System::UInt32 _Level_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::FateBuffData* Create(::System::UInt32 id, ::RPG::Client::FateBuffTraitInfo* belongBuffInfo)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATE_OFFSET))(id, belongBuffInfo);
		}

		static ::RPG::Client::FateBuffData* CreateDisplayData(::System::UInt32 id, ::System::UInt32 cnt, ::RPG::Client::FateBuffTraitInfo* belongBuffInfo)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATA_OFFSET))(id, cnt, belongBuffInfo);
		}

		static ::RPG::Client::FateBuffData* CreateDisplayDataWithLevel(::System::UInt32 id, ::System::UInt32 level, ::RPG::Client::FateBuffTraitInfo* belongBuffInfo)
		{
			return ((::RPG::Client::FateBuffData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_CREATEDISPLAYDATAWITHLEVEL_OFFSET))(id, level, belongBuffInfo);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_275* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_275*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 GetLevelAfterAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GETLEVELAFTERADDEXP_OFFSET))(this, addExp);
		}

		::System::Void _SetNeedExpList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__SETNEEDEXPLIST_OFFSET))(this);
		}

		::System::Void _SyncLevelExp(::System::UInt32 syncBuffCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA__SYNCLEVELEXP_OFFSET))(this, syncBuffCnt);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_BUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_HaveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_HAVECOUNT_OFFSET))(this);
		}

		::System::Void set_HaveCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_HAVECOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISOWNED_OFFSET))(this);
		}

		::System::UInt32 get_AllExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ALLEXP_OFFSET))(this);
		}

		::System::Void set_AllExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_ALLEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_CUREXP_OFFSET))(this);
		}

		::System::Void set_CurExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_CUREXP_OFFSET))(this, value);
		}

		::System::UInt32 get_LevelUpNeedExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_LEVELUPNEEDEXP_OFFSET))(this);
		}

		::System::Void set_LevelUpNeedExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_LEVELUPNEEDEXP_OFFSET))(this, value);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::Class_1_34E8D4945AB838AE* get_Row()
		{
			return ((::Class_1_34E8D4945AB838AE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_GET_ROW_OFFSET))(this);
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

		::System::Void set_ModifiedSubTraitID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFDATA_SET_MODIFIEDSUBTRAITID_OFFSET))(this, value);
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
