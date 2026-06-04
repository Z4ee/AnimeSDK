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

#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xCD93450)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET UNITYSDK_OFFSET(0xCD95670)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xCD94750)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET UNITYSDK_OFFSET(0xCD94900)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xCD92CD0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET UNITYSDK_OFFSET(0xCD955C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xCD95620)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0xCD95520)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xCD93210)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET UNITYSDK_OFFSET(0xCD92C60)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xCD92C20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xCD92C40)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET UNITYSDK_OFFSET(0xCD92C70)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET UNITYSDK_OFFSET(0xCD93D00)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xCD95760)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xCD92B70)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET UNITYSDK_OFFSET(0xCD92E30)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET UNITYSDK_OFFSET(0xCD93720)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xCD92C30)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xCD92C50)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET UNITYSDK_OFFSET(0xCD93390)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET UNITYSDK_OFFSET(0xCD932D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xCD95370)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET UNITYSDK_OFFSET(0xCD94940)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD95880)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD92AB0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET UNITYSDK_OFFSET(0xCD95480)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET UNITYSDK_OFFSET(0xCD954D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET UNITYSDK_OFFSET(0xCD952D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET UNITYSDK_OFFSET(0xCD93E80)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET UNITYSDK_OFFSET(0xCD94280)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET UNITYSDK_OFFSET(0xCD93260)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xCD945D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xCD94800)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xCD94ED0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET UNITYSDK_OFFSET(0xCD949E0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET UNITYSDK_OFFSET(0xCD94FC0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET UNITYSDK_OFFSET(0xCD94C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDrinkState_TypeDefinitionIndex = 49333;

	class DrinkMakerDrinkState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67440);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet__SP_Liquid()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67448);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer4()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67450);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer3()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67458);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer5()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67460);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67468);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Mix()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x67470);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13ED0);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13ED4);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13ED8);
		}
		static ::System::Int32* StaticGet__SP_Mix_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EDC);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EE0);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EE4);
		}
		static ::System::Int32* StaticGet__SP_Mix_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EE8);
		}
		static ::System::Int32* StaticGet__SP_Layer4_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EEC);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EF0);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MinHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EF4);
		}
		static ::System::Int32* StaticGet__SP_Layer5_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EF8);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MaxHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13EFC);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F00);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F04);
		}
		static ::System::Int32* StaticGet__SP_Mix_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F08);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F0C);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F10);
		}
		static ::System::Int32* StaticGet__SP_Liquid_HeightFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F14);
		}
		static ::System::Int32* StaticGet__SP_Layer1_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F18);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F1C);
		}
		static ::System::Int32* StaticGet__SP_Layer2_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F20);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F24);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F28);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F2C);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F30);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F34);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F38);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F3C);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F40);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F44);
		}
		static ::System::Int32* StaticGet__SP_Mix_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F48);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F4C);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F50);
		}
		static ::System::Int32* StaticGet__SP_Layer3_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F54);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_AddLiquid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13F58);
		}
		::UnityEngine::GameObject* _CurrentCupModel; // 0x10
		::System::Collections::Generic::List_1<::Class_1_8A0D924C14430663_2*>* _MixFactor; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientList_k__BackingField; // 0x20
		::UnityEngine::Transform* _IceSimParentNode; // 0x28
		::RPG::GameCore::DrinkMakerCupRow* _CurrentCupRow; // 0x30
		::UnityEngine::Material* _CurrentLiquidMaterial; // 0x38
		::RPG::Client::DrinkMakerGlobalConfig* _GlobalConfig; // 0x40
		::System::Single _LiquidMeshHighestPoint; // 0x48
		::System::Boolean _Mixing; // 0x4C
		::System::Boolean _AddingIngredient; // 0x4D
		::System::Int32 _MixLayer_k__BackingField; // 0x50
		::System::Single _AddIngredientTime; // 0x54
		::System::Single LastMixTime; // 0x58
		::System::Single _MixTime; // 0x5C
		::System::Single _LastLayerHeight; // 0x60
		::System::Single _LiquidMeshLowestPoint; // 0x64
		::System::Single _SurfaceDistribedStateTimer; // 0x68
		::System::Int32 _SurfaceDistribedState; // 0x6C
		::System::Single _TotalLiquidHeightRatio; // 0x70

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
