#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DrinkMakerBartendProcedure.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_7E9AC8675DA072FB_1;
namespace RPG::Client { class DrinkMakerBarDrinkMakingStep; }
namespace RPG::Client { class DrinkMakerBartendRequestData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersBartendRequestData; }
namespace RPG::Client { class DrinkMakerTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0x1B8E9830)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFCURPROCEDURECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B8EA8A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFMATERIALISFULL_OFFSET UNITYSDK_OFFSET(0x1B8EA960)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHEERSCONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0x1B8EACE0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B8EA570)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0x1B8EA9C0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONVERTTOPROTODATA_OFFSET UNITYSDK_OFFSET(0x1B8EB8B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLMIXTAGS_OFFSET UNITYSDK_OFFSET(0x1B8EB4F0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLTAGIDS_OFFSET UNITYSDK_OFFSET(0x1B8E6620)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLVISIBLETAGS_OFFSET UNITYSDK_OFFSET(0x1B8E6170)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMAXMIXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8EB850)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMOSTCOMMONCOLORBYHSV_OFFSET UNITYSDK_OFFSET(0x1B8EB970)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTIFYTAGBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B8EB3F0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTITYBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B8EB7A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CHEERSCURRENTDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1B8ECBC0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CUPID_OFFSET UNITYSDK_OFFSET(0x1B8ECAA0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CURPROCEDURE_OFFSET UNITYSDK_OFFSET(0x1B8ECBA0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_DECORATIONID_OFFSET UNITYSDK_OFFSET(0x1B8ECB00)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_ICEID_OFFSET UNITYSDK_OFFSET(0x1B8ECAC0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_INGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0x1B8ECAE0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8ECB40)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LEFTMIXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8ECB60)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B8ECB20)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MIXINDEX_OFFSET UNITYSDK_OFFSET(0x1B8ECB80)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_HASINGREDIENTINDRINK_OFFSET UNITYSDK_OFFSET(0x1B8EB210)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MIX_OFFSET UNITYSDK_OFFSET(0x1B8E9F40)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B8E9F00)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_REPORTGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1B8EAE10)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1B8EA800)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETCUP_OFFSET UNITYSDK_OFFSET(0x1B8E9710)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETDECORATION_OFFSET UNITYSDK_OFFSET(0x1B8E97E0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETICE_OFFSET UNITYSDK_OFFSET(0x1B8E9790)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CHEERSCURRENTDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1B8ECBD0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CUPID_OFFSET UNITYSDK_OFFSET(0x1B8ECAB0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CURPROCEDURE_OFFSET UNITYSDK_OFFSET(0x1B8ECBB0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_DECORATIONID_OFFSET UNITYSDK_OFFSET(0x1B8ECB10)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_ICEID_OFFSET UNITYSDK_OFFSET(0x1B8ECAD0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_INGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0x1B8ECAF0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8ECB50)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LEFTMIXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8ECB70)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B8ECB30)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MIXINDEX_OFFSET UNITYSDK_OFFSET(0x1B8ECB90)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1B8E5E30)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_UPDATECHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0x1B8EAD60)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__BLENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8EC1D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATELAYER_OFFSET UNITYSDK_OFFSET(0x1B8E99B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEMIXTAGS_OFFSET UNITYSDK_OFFSET(0x1B8E9FC0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTIFYTAGS_OFFSET UNITYSDK_OFFSET(0x1B8E9B40)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTITY_OFFSET UNITYSDK_OFFSET(0x1B8E9A40)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8ECBE0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CMYK2RGBCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8EC660)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E5C40)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__FINDMOSTCOMMONINGREDIENT_OFFSET UNITYSDK_OFFSET(0x1B8EBBD0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETINGREDIENTRGBCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8EC090)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETMIXCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8EBE90)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETNONINGREDIENTTAGIDS_OFFSET UNITYSDK_OFFSET(0x1B8EB270)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETQUANTITYCORRESPONDINGTAG_OFFSET UNITYSDK_OFFSET(0x1B8EC7D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1B8E9340)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__RGB2CMYKCOLOR_OFFSET UNITYSDK_OFFSET(0x1B8EC390)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__SATURATE_OFFSET UNITYSDK_OFFSET(0x1B8EC580)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendDrinkData_TypeDefinitionIndex = 63658;

	class DrinkMakerBartendDrinkData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MaxMixCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData_TypeDefinitionIndex)->GetStaticField(0x12B20);
		}
		static ::System::UInt32* StaticGet__DefaultEmptyValue()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData_TypeDefinitionIndex)->GetStaticField(0x12B24);
		}
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _QuantifyTags; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::DrinkMakerTag*>*>* _QuantityMap; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientIDs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _CurQuantities; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _MixTags; // 0x30
		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* _CheersCurrentDrinkData_k__BackingField; // 0x38
		::System::UInt32 _DecorationID_k__BackingField; // 0x40
		::RPG::Client::DrinkMakerBartendProcedure _CurProcedure_k__BackingField; // 0x44
		::System::UInt32 _MixIndex_k__BackingField; // 0x48
		::System::UInt32 _CupID_k__BackingField; // 0x4C
		::System::UInt32 _IceID_k__BackingField; // 0x50
		::System::UInt32 _MaxCapacity_k__BackingField; // 0x54
		::System::UInt32 _LayerCount_k__BackingField; // 0x58
		::System::UInt32 _LeftMixCount_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CCTOR_OFFSET))();
		}

		::System::Void SetCup(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETCUP_OFFSET))(this, a1);
		}

		::System::Void SetIce(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETICE_OFFSET))(this, a1);
		}

		::System::Void SetDecoration(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETDECORATION_OFFSET))(this, a1);
		}

		::System::Void AddIngredient(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_ADDINGREDIENT_OFFSET))(this, a1);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MOVENEXT_OFFSET))(this);
		}

		::System::Void Mix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MIX_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_RESET_OFFSET))(this);
		}

		::System::Boolean CheckIfCurProcedureComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFCURPROCEDURECOMPLETE_OFFSET))(this);
		}

		::System::Boolean CheckIfMaterialIsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFMATERIALISFULL_OFFSET))(this);
		}

		::System::Void ConfirmMakingDrink(::RPG::Client::DrinkMakerBartendRequestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONFIRMMAKINGDRINK_OFFSET))(this, a1);
		}

		::System::Void CheersConfirmMakingDrink(::RPG::Client::DrinkMakerCheersBartendRequestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendRequestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHEERSCONFIRMMAKINGDRINK_OFFSET))(this, a1);
		}

		::System::Void ReportGameplayData(::RPG::Client::DrinkMakerBartendRequestData* a1, ::System::Boolean a2, ::System::Single a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendRequestData*, ::System::Boolean, ::System::Single, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_REPORTGAMEPLAYDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HasIngredientInDrink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_HASINGREDIENTINDRINK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetAllVisibleTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLVISIBLETAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllTagIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLTAGIDS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerTag* GetQuantifyTagByType(::RPG::GameCore::DrinkMakerQuantifyTagType a1)
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTIFYTAGBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetAllMixTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLMIXTAGS_OFFSET))(this);
		}

		::System::Int32 GetQuantityByType(::RPG::GameCore::DrinkMakerQuantifyTagType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTITYBYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetMaxMixCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMAXMIXCOUNT_OFFSET))(this);
		}

		::System::Void Simulate(::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrinkMakingStep*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SIMULATE_OFFSET))(this, a1);
		}

		::Class_1_7E9AC8675DA072FB_1* ConvertToProtoData()
		{
			return ((::Class_1_7E9AC8675DA072FB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONVERTTOPROTODATA_OFFSET))(this);
		}

		::System::Void UpdateCheersDrinkData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_UPDATECHEERSDRINKDATA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetMostCommonColorByHSV()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMOSTCOMMONCOLORBYHSV_OFFSET))(this);
		}

		::System::Int32 _FindMostCommonIngredient()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__FINDMOSTCOMMONINGREDIENT_OFFSET))(this);
		}

		::UnityEngine::Color _GetMixColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETMIXCOLOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 _RGB2CMYKColor(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__RGB2CMYKCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color _CMYK2RGBColor(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CMYK2RGBCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color _BlendColor(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__BLENDCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color _Saturate(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__SATURATE_OFFSET))(this, a1);
		}

		::UnityEngine::Color _GetIngredientRGBColor(::System::UInt32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETINGREDIENTRGBCOLOR_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__INIT_OFFSET))(this);
		}

		::System::Void _CalculateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATELAYER_OFFSET))(this);
		}

		::System::Void _CalculateQuantity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTITY_OFFSET))(this, a1);
		}

		::System::Void _CalculateQuantifyTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTIFYTAGS_OFFSET))(this);
		}

		::System::Void _CalculateMixTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEMIXTAGS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerTag* _GetQuantityCorrespondingTag(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::DrinkMakerTag*>* a2)
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::DrinkMakerTag*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETQUANTITYCORRESPONDINGTAG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetNonIngredientTagIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETNONINGREDIENTTAGIDS_OFFSET))(this);
		}

		::System::UInt32 get_CupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CUPID_OFFSET))(this);
		}

		::System::Void set_CupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_IceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_ICEID_OFFSET))(this);
		}

		::System::Void set_IceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_ICEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_IngredientIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_INGREDIENTIDS_OFFSET))(this);
		}

		::System::Void set_IngredientIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_INGREDIENTIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_DecorationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_DECORATIONID_OFFSET))(this);
		}

		::System::Void set_DecorationID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_DECORATIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MAXCAPACITY_OFFSET))(this);
		}

		::System::Void set_MaxCapacity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MAXCAPACITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Void set_LayerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LAYERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftMixCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LEFTMIXCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftMixCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LEFTMIXCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MixIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MIXINDEX_OFFSET))(this);
		}

		::System::Void set_MixIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MIXINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBartendProcedure get_CurProcedure()
		{
			return ((::RPG::Client::DrinkMakerBartendProcedure(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CURPROCEDURE_OFFSET))(this);
		}

		::System::Void set_CurProcedure(::RPG::Client::DrinkMakerBartendProcedure a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBartendProcedure))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CURPROCEDURE_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* get_CheersCurrentDrinkData()
		{
			return ((::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CHEERSCURRENTDRINKDATA_OFFSET))(this);
		}

		::System::Void set_CheersCurrentDrinkData(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CHEERSCURRENTDRINKDATA_OFFSET))(this, a1);
		}
	};
}
