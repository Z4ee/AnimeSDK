#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A0D924C14430663_2;
namespace RPG::Client { class DrinkMakerBartender_Cup; }
namespace RPG::Client { class DrinkMakerGlobalConfig; }
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE59A0F0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET UNITYSDK_OFFSET(0xE5DD7C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xE59B3F0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET UNITYSDK_OFFSET(0xE59B5A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xE599920)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE5DD710)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE5DD770)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE5DD670)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xE599EB0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE5998B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xE599870)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xE599890)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET UNITYSDK_OFFSET(0xE5998C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET UNITYSDK_OFFSET(0xE59A9A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xE5DD8B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xE5997C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET UNITYSDK_OFFSET(0xE599A80)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET UNITYSDK_OFFSET(0xE59A3C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xE599880)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xE5998A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET UNITYSDK_OFFSET(0xE59A030)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET UNITYSDK_OFFSET(0xE599F70)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xE5DD0C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET UNITYSDK_OFFSET(0xE59B5E0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5DD9D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE599700)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET UNITYSDK_OFFSET(0xE5DD2C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET UNITYSDK_OFFSET(0xE5DD620)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET UNITYSDK_OFFSET(0xE59B680)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET UNITYSDK_OFFSET(0xE59AB20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE59AF20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET UNITYSDK_OFFSET(0xE599F00)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xE59B270)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xE59B4A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE5DD1D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET UNITYSDK_OFFSET(0xE5DCBD0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET UNITYSDK_OFFSET(0xE5DD310)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET UNITYSDK_OFFSET(0xE5DCE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDrinkState_TypeDefinitionIndex = 53011;

	class DrinkMakerDrinkState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet__SP_Liquid()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67120);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer4()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67128);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer3()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67130);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67138);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67140);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer5()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67148);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Mix()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67150);
		}
		static ::System::Int32* StaticGet__SP_Mix_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154B0);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154B4);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154B8);
		}
		static ::System::Int32* StaticGet__SP_Liquid_HeightFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154BC);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154C0);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154C4);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154C8);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154CC);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154D0);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154D4);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154D8);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154DC);
		}
		static ::System::Int32* StaticGet__SP_Layer1_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154E0);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154E4);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154E8);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154EC);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154F0);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154F4);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154F8);
		}
		static ::System::Int32* StaticGet__SP_Layer3_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x154FC);
		}
		static ::System::Int32* StaticGet__SP_Mix_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15500);
		}
		static ::System::Int32* StaticGet__SP_Layer2_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15504);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15508);
		}
		static ::System::Int32* StaticGet__SP_Mix_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x1550C);
		}
		static ::System::Int32* StaticGet__SP_Mix_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15510);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15514);
		}
		static ::System::Int32* StaticGet__SP_Layer4_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15518);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_AddLiquid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x1551C);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MinHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15520);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15524);
		}
		static ::System::Int32* StaticGet__SP_Layer5_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15528);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x1552C);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15530);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15534);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MaxHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x15538);
		}
		::UnityEngine::GameObject* _CurrentCupModel; // 0x10
		::RPG::GameCore::DrinkMakerCupRow* _CurrentCupRow; // 0x18
		::System::Collections::Generic::List_1<::Class_1_8A0D924C14430663_2*>* _MixFactor; // 0x20
		::RPG::Client::DrinkMakerGlobalConfig* _GlobalConfig; // 0x28
		::UnityEngine::Material* _CurrentLiquidMaterial; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientList_k__BackingField; // 0x38
		::UnityEngine::Transform* _IceSimParentNode; // 0x40
		::System::Int32 _MixLayer_k__BackingField; // 0x48
		::System::Int32 _SurfaceDistribedState; // 0x4C
		::System::Single _TotalLiquidHeightRatio; // 0x50
		::System::Boolean _AddingIngredient; // 0x54
		::System::Boolean _Mixing; // 0x55
		::System::Single _MixTime; // 0x58
		::System::Single LastMixTime; // 0x5C
		::System::Single _LiquidMeshLowestPoint; // 0x60
		::System::Single _AddIngredientTime; // 0x64
		::System::Single _LiquidMeshHighestPoint; // 0x68
		::System::Single _LastLayerHeight; // 0x6C
		::System::Single _SurfaceDistribedStateTimer; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_IngredientList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::Void set_IngredientList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_MixLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET))(this);
		}

		::System::Void set_MixLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_AddingIngredient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET))(this);
		}

		::System::Boolean get__Operating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerGlobalConfig* GetDrinkMakerGlobalConfig()
		{
			return ((::RPG::Client::DrinkMakerGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET))(this);
		}

		::System::Void SelectCup(::UnityEngine::GameObject* a1, ::RPG::Client::DrinkMakerBartender_Cup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::DrinkMakerBartender_Cup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchIce(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET))(this, a1);
		}

		::System::Void SwitchDecoration(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET))(this, a1);
		}

		::System::Void AddIngredient(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET))(this, a1);
		}

		::System::Void SetMeasuringCupEff(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Mix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET))(this);
		}

		::System::Void _RefreshLiquidColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET))(this);
		}

		::System::Void _RefreshLiquidHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET))(this);
		}

		::System::Void _RefreshMixFactor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET))(this);
		}

		::System::Void _RefreshLiquid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET))(this);
		}

		::System::Int32 GetMaxCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET))(this);
		}

		::System::Void ClearIngredients()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET))(this);
		}

		::System::Void _ResetMixFactor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCurrentCupModel()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET))(this);
		}

		::System::Void TickAnimation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET))(this, a1);
		}

		::System::Void _PreviewTickAnimation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET))(this, a1);
		}

		::System::Void _TickDefaultMixing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET))(this, a1);
		}

		::System::Void _TickSurfaceDistribedState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET))(this, a1);
		}

		::System::Void TickAddIngredientHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET))(this, a1);
		}

		::System::Void _TickAddIngredient(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET))(this, a1);
		}

		::System::Void _OnAddIngredientEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET))(this);
		}

		::System::Void _TickMixing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET))(this, a1);
		}

		::System::Void _OnMixEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET))(this);
		}

		::System::Single GetLiquidWorldHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET))(this);
		}

		::System::Single GetLiquidLocalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET))(this);
		}

		::System::Single GetLiquidTotalHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET))(this);
		}

		::System::Void BindPhyIce(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET))(this, a1);
		}

		::System::Void Preview(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Int32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
