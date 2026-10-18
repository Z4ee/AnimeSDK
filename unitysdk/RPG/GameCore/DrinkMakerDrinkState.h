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

#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_ADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE627840)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_BINDPHYICE_OFFSET UNITYSDK_OFFSET(0xE629A50)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_CLEARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xE628B30)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETCURRENTCUPMODEL_OFFSET UNITYSDK_OFFSET(0xE628CE0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETDRINKMAKERGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xE627070)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDLOCALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE6299A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDTOTALHEIGHT_OFFSET UNITYSDK_OFFSET(0xE629A00)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETLIQUIDWORLDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE629900)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GETMAXCAPACITY_OFFSET UNITYSDK_OFFSET(0xE627600)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_ADDINGINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE627000)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xE626FC0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xE626FE0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_GET__OPERATING_OFFSET UNITYSDK_OFFSET(0xE627010)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_MIX_OFFSET UNITYSDK_OFFSET(0xE6280E0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xE629B40)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xE626F10)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SELECTCUP_OFFSET UNITYSDK_OFFSET(0xE6271D0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SETMEASURINGCUPEFF_OFFSET UNITYSDK_OFFSET(0xE627B00)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xE626FD0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xE626FF0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHDECORATION_OFFSET UNITYSDK_OFFSET(0xE627780)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_SWITCHICE_OFFSET UNITYSDK_OFFSET(0xE6276C0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKADDINGREDIENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xE629750)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE_TICKANIMATION_OFFSET UNITYSDK_OFFSET(0xE628D20)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE629C60)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE626E50)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONADDINGREDIENTEND_OFFSET UNITYSDK_OFFSET(0xE629860)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__ONMIXEND_OFFSET UNITYSDK_OFFSET(0xE6298B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__PREVIEWTICKANIMATION_OFFSET UNITYSDK_OFFSET(0xE6296B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDCOLOR_OFFSET UNITYSDK_OFFSET(0xE628260)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUIDHEIGHT_OFFSET UNITYSDK_OFFSET(0xE628660)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHLIQUID_OFFSET UNITYSDK_OFFSET(0xE627650)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__REFRESHMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xE6289B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__RESETMIXFACTOR_OFFSET UNITYSDK_OFFSET(0xE628BE0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKADDINGREDIENT_OFFSET UNITYSDK_OFFSET(0xE6292B0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKDEFAULTMIXING_OFFSET UNITYSDK_OFFSET(0xE628DC0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKMIXING_OFFSET UNITYSDK_OFFSET(0xE6293A0)
#define RPG_GAMECORE_DRINKMAKERDRINKSTATE__TICKSURFACEDISTRIBEDSTATE_OFFSET UNITYSDK_OFFSET(0xE629040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDrinkState_TypeDefinitionIndex = 52737;

	class DrinkMakerDrinkState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet__SP_Liquid()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer3()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFD8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Mix()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFE0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer4()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFE8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer5()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFF0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5BFF8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__SP_Layer1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x5C000);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DD0);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DD4);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DD8);
		}
		static ::System::Int32* StaticGet__SP_Layer2_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DDC);
		}
		static ::System::Int32* StaticGet__SP_Mix_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DE0);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DE4);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MaxHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DE8);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DEC);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_AddLiquid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DF0);
		}
		static ::System::Int32* StaticGet__SP_Mix_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DF4);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DF8);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13DFC);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E00);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E04);
		}
		static ::System::Int32* StaticGet__SP_Mix_34()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E08);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E0C);
		}
		static ::System::Int32* StaticGet__SP_Layer1_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E10);
		}
		static ::System::Int32* StaticGet__SP_Liquid_MinHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E14);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E18);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E1C);
		}
		static ::System::Int32* StaticGet__SP_Mix_45()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E20);
		}
		static ::System::Int32* StaticGet__SP_Liquid_HeightFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E24);
		}
		static ::System::Int32* StaticGet__SP_Layer4_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E28);
		}
		static ::System::Int32* StaticGet__SP_Layer5_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E2C);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E30);
		}
		static ::System::Int32* StaticGet__SP_Surface_DisturbedState_Mode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E34);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E38);
		}
		static ::System::Int32* StaticGet__SP_Layer3_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E3C);
		}
		static ::System::Int32* StaticGet__SP_Layer3_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E40);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E44);
		}
		static ::System::Int32* StaticGet__SP_Layer2_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E48);
		}
		static ::System::Int32* StaticGet__SP_Layer5_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E4C);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Attr2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E50);
		}
		static ::System::Int32* StaticGet__SP_Layer1_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E54);
		}
		static ::System::Int32* StaticGet__SP_Layer4_Attr1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerDrinkState_TypeDefinitionIndex)->GetStaticField(0x13E58);
		}
		::RPG::GameCore::DrinkMakerCupRow* _CurrentCupRow; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _IngredientList_k__BackingField; // 0x18
		::UnityEngine::Transform* _IceSimParentNode; // 0x20
		::RPG::Client::DrinkMakerGlobalConfig* _GlobalConfig; // 0x28
		::UnityEngine::Material* _CurrentLiquidMaterial; // 0x30
		::UnityEngine::GameObject* _CurrentCupModel; // 0x38
		::System::Collections::Generic::List_1<::Class_1_8A0D924C14430663_2*>* _MixFactor; // 0x40
		::System::Int32 _SurfaceDistribedState; // 0x48
		::System::Single _LastLayerHeight; // 0x4C
		::System::Single _LiquidMeshHighestPoint; // 0x50
		::System::Single _MixTime; // 0x54
		::System::Single LastMixTime; // 0x58
		::System::Single _TotalLiquidHeightRatio; // 0x5C
		::System::Int32 _MixLayer_k__BackingField; // 0x60
		::System::Single _AddIngredientTime; // 0x64
		::System::Single _SurfaceDistribedStateTimer; // 0x68
		::System::Boolean _Mixing; // 0x6C
		::System::Boolean _AddingIngredient; // 0x6D
		::System::Single _LiquidMeshLowestPoint; // 0x70

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
