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

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xCD862A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFCURPROCEDURECOMPLETE_OFFSET UNITYSDK_OFFSET(0xCD87310)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHECKIFMATERIALISFULL_OFFSET UNITYSDK_OFFSET(0xCD873D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CHEERSCONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0xCD876D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCD86FE0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONFIRMMAKINGDRINK_OFFSET UNITYSDK_OFFSET(0xCD87430)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_CONVERTTOPROTODATA_OFFSET UNITYSDK_OFFSET(0xCD88240)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLMIXTAGS_OFFSET UNITYSDK_OFFSET(0xCD87E80)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLTAGIDS_OFFSET UNITYSDK_OFFSET(0xCD83090)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETALLVISIBLETAGS_OFFSET UNITYSDK_OFFSET(0xCD82BE0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMAXMIXCOUNT_OFFSET UNITYSDK_OFFSET(0xCD881E0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETMOSTCOMMONCOLORBYHSV_OFFSET UNITYSDK_OFFSET(0xCD88300)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTIFYTAGBYTYPE_OFFSET UNITYSDK_OFFSET(0xCD87D90)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GETQUANTITYBYTYPE_OFFSET UNITYSDK_OFFSET(0xCD88130)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CHEERSCURRENTDRINKDATA_OFFSET UNITYSDK_OFFSET(0xCD89550)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CUPID_OFFSET UNITYSDK_OFFSET(0xCD89430)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_CURPROCEDURE_OFFSET UNITYSDK_OFFSET(0xCD89530)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_DECORATIONID_OFFSET UNITYSDK_OFFSET(0xCD89490)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_ICEID_OFFSET UNITYSDK_OFFSET(0xCD89450)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_INGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0xCD89470)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xCD894D0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_LEFTMIXCOUNT_OFFSET UNITYSDK_OFFSET(0xCD894F0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xCD894B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_GET_MIXINDEX_OFFSET UNITYSDK_OFFSET(0xCD89510)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_HASINGREDIENTINDRINK_OFFSET UNITYSDK_OFFSET(0xCD87BB0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MIX_OFFSET UNITYSDK_OFFSET(0xCD869B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCD86970)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_REPORTGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCD87800)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_RESET_OFFSET UNITYSDK_OFFSET(0xCD87270)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETCUP_OFFSET UNITYSDK_OFFSET(0xCD86180)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETDECORATION_OFFSET UNITYSDK_OFFSET(0xCD86250)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SETICE_OFFSET UNITYSDK_OFFSET(0xCD86200)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CHEERSCURRENTDRINKDATA_OFFSET UNITYSDK_OFFSET(0xCD89560)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CUPID_OFFSET UNITYSDK_OFFSET(0xCD89440)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_CURPROCEDURE_OFFSET UNITYSDK_OFFSET(0xCD89540)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_DECORATIONID_OFFSET UNITYSDK_OFFSET(0xCD894A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_ICEID_OFFSET UNITYSDK_OFFSET(0xCD89460)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_INGREDIENTIDS_OFFSET UNITYSDK_OFFSET(0xCD89480)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xCD894E0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_LEFTMIXCOUNT_OFFSET UNITYSDK_OFFSET(0xCD89500)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xCD894C0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SET_MIXINDEX_OFFSET UNITYSDK_OFFSET(0xCD89520)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_SIMULATE_OFFSET UNITYSDK_OFFSET(0xCD828A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA_UPDATECHEERSDRINKDATA_OFFSET UNITYSDK_OFFSET(0xCD87750)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__BLENDCOLOR_OFFSET UNITYSDK_OFFSET(0xCD88B60)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATELAYER_OFFSET UNITYSDK_OFFSET(0xCD86420)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEMIXTAGS_OFFSET UNITYSDK_OFFSET(0xCD86A30)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTIFYTAGS_OFFSET UNITYSDK_OFFSET(0xCD865B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CALCULATEQUANTITY_OFFSET UNITYSDK_OFFSET(0xCD864B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD89570)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CMYK2RGBCOLOR_OFFSET UNITYSDK_OFFSET(0xCD88FF0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD826B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__FINDMOSTCOMMONINGREDIENT_OFFSET UNITYSDK_OFFSET(0xCD88560)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETINGREDIENTRGBCOLOR_OFFSET UNITYSDK_OFFSET(0xCD88A20)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETMIXCOLOR_OFFSET UNITYSDK_OFFSET(0xCD88820)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETNONINGREDIENTTAGIDS_OFFSET UNITYSDK_OFFSET(0xCD87C10)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__GETQUANTITYCORRESPONDINGTAG_OFFSET UNITYSDK_OFFSET(0xCD89160)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__INIT_OFFSET UNITYSDK_OFFSET(0xCD85DB0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__RGB2CMYKCOLOR_OFFSET UNITYSDK_OFFSET(0xCD88D20)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA__SATURATE_OFFSET UNITYSDK_OFFSET(0xCD88F10)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendDrinkData_TypeDefinitionIndex = 63658;

	class DrinkMakerBartendDrinkData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MaxMixCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData_TypeDefinitionIndex)->GetStaticField(0x14140);
		}
		static ::System::UInt32* StaticGet__DefaultEmptyValue()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerBartendDrinkData_TypeDefinitionIndex)->GetStaticField(0x14144);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _CurQuantities; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _QuantifyTags; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* _MixTags; // 0x20
		::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* _CheersCurrentDrinkData_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::DrinkMakerTag*>*>* _QuantityMap; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientIDs_k__BackingField; // 0x38
		::RPG::Client::DrinkMakerBartendProcedure _CurProcedure_k__BackingField; // 0x40
		::System::UInt32 _LayerCount_k__BackingField; // 0x44
		::System::UInt32 _LeftMixCount_k__BackingField; // 0x48
		::System::UInt32 _DecorationID_k__BackingField; // 0x4C
		::System::UInt32 _CupID_k__BackingField; // 0x50
		::System::UInt32 _MaxCapacity_k__BackingField; // 0x54
		::System::UInt32 _MixIndex_k__BackingField; // 0x58
		::System::UInt32 _IceID_k__BackingField; // 0x5C

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
