#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConeIntersectResult.h"
#include "unitysdk/RPG/Client/TSCRenderStateNegative.h"
#include "unitysdk/RPG/Client/TSCRenderStatePositive.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2FF4295849ECC7AF;
class Class_1_5F96B92B05C740DB;
class Class_1_8345B8E9167A0BA3;
class Class_1_B4A29038FEECBAF0_Class_3_EC9ABC3448F7394B;
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0xABB5A90)
#define CLASS_1_B4A29038FEECBAF0_GET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0xABB64C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_039C3470E560B603_OFFSET UNITYSDK_OFFSET(0xABB7450)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0xABB6E40)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_09D785A1CEE43CAE_OFFSET UNITYSDK_OFFSET(0xABBC0F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_0A7DEF48D99F9E5C_OFFSET UNITYSDK_OFFSET(0xABBC060)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_1_OFFSET UNITYSDK_OFFSET(0xABBB680)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_OFFSET UNITYSDK_OFFSET(0xABB8C60)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1278CA6F92325A9E_OFFSET UNITYSDK_OFFSET(0xABB64E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_15CE32CB6EACE958_OFFSET UNITYSDK_OFFSET(0xABBE0A0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xABB8BA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1AE6E89E920E7F99_OFFSET UNITYSDK_OFFSET(0xABBF2D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xABB5620)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1FBCE2A8402F6728_OFFSET UNITYSDK_OFFSET(0xABBDEE0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0xABB7100)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xABB6070)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0xABB63D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xABB5D20)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0xABC0C90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_302B8AB317D3FFD7_OFFSET UNITYSDK_OFFSET(0xABBDB80)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xABB7940)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xABB50C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xABB5680)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xABB6710)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_459B892B58605C8F_OFFSET UNITYSDK_OFFSET(0xABBE210)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0xABB5740)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0xABB5E90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0xABB61F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0xABB5B30)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_1_OFFSET UNITYSDK_OFFSET(0xABC0240)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_OFFSET UNITYSDK_OFFSET(0xABC01F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_50FEEAEEA11D9013_OFFSET UNITYSDK_OFFSET(0xABBD610)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_52163657AD24F738_OFFSET UNITYSDK_OFFSET(0xABB56E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_569116DEF09001C2_OFFSET UNITYSDK_OFFSET(0xABB7770)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_5B4A2D726ACC6CD5_OFFSET UNITYSDK_OFFSET(0xABBD660)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_5D09FA5A7543C4B5_OFFSET UNITYSDK_OFFSET(0xABBEA90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_5D8597AABA65F4CC_OFFSET UNITYSDK_OFFSET(0xABBEEB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6365A2D69460636F_OFFSET UNITYSDK_OFFSET(0xABBC220)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6564F93385278581_OFFSET UNITYSDK_OFFSET(0xABBC3C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_690254C4B3C33267_OFFSET UNITYSDK_OFFSET(0xABB7530)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_1_OFFSET UNITYSDK_OFFSET(0xABB5F30)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_2_OFFSET UNITYSDK_OFFSET(0xABB6290)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_OFFSET UNITYSDK_OFFSET(0xABB5BE0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6D4C5C3A4A0B6E9B_OFFSET UNITYSDK_OFFSET(0xABB5960)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xABC0370)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_98D7093BF0BFE607_OFFSET UNITYSDK_OFFSET(0xABB8210)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_995A1AC63FE02698_OFFSET UNITYSDK_OFFSET(0xABB6D20)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_99FB98A476F57A75_OFFSET UNITYSDK_OFFSET(0xABB7A80)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_9C13D7AC0395A639_OFFSET UNITYSDK_OFFSET(0xABBE730)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xABC0290)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B280CE45C98AD449_OFFSET UNITYSDK_OFFSET(0xABB6780)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B936777D193F4FE5_OFFSET UNITYSDK_OFFSET(0xABB56D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_1_OFFSET UNITYSDK_OFFSET(0xABB6160)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0xABB5B50)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_C4CB609A54AECC5A_OFFSET UNITYSDK_OFFSET(0xABBFE00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xABB66C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_1_OFFSET UNITYSDK_OFFSET(0xABB9DF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_2_OFFSET UNITYSDK_OFFSET(0xABBA620)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_3_OFFSET UNITYSDK_OFFSET(0xABBAE50)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_OFFSET UNITYSDK_OFFSET(0xABB95C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E269295B2D24712F_OFFSET UNITYSDK_OFFSET(0xABBD5C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xABB6150)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0xABB64B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xABB5E00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E846D8AD7D406794_OFFSET UNITYSDK_OFFSET(0xABBC570)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_F2454CE0B2CBB4CA_OFFSET UNITYSDK_OFFSET(0xABB7840)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_1_OFFSET UNITYSDK_OFFSET(0xABB5E10)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_2_OFFSET UNITYSDK_OFFSET(0xABB5EB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_3_OFFSET UNITYSDK_OFFSET(0xABB6210)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0xABB5AB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FD83315127618831_OFFSET UNITYSDK_OFFSET(0xABBFA60)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xABB5DA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0xABB6010)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0xABB60F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0xABB6370)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_5_OFFSET UNITYSDK_OFFSET(0xABB6450)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xABB5CC0)
#define CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0xABB5AA0)
#define CLASS_1_B4A29038FEECBAF0_SET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0xABB64D0)
#define CLASS_1_B4A29038FEECBAF0__CCTOR_OFFSET UNITYSDK_OFFSET(0xABC6360)
#define CLASS_1_B4A29038FEECBAF0__CTOR_OFFSET UNITYSDK_OFFSET(0xABB51B0)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET UNITYSDK_OFFSET(0xABC6500)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET UNITYSDK_OFFSET(0xABC6620)

inline static constexpr unsigned int Class_1_B4A29038FEECBAF0_TypeDefinitionIndex = 65660;

class Class_1_B4A29038FEECBAF0 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF050);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF058);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF060);
	}
	static ::Class_1_B4A29038FEECBAF0** StaticGet_Field_1_3()
	{
		return (::Class_1_B4A29038FEECBAF0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF068);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF070);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF078);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF080);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF088);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF090);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_9()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF098);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_10()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF0A0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_11()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF0A8);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_12()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF0B0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_13()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0xF0B8);
	}
	::Class_1_8345B8E9167A0BA3* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>* Field_1_15; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* Field_1_16; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*>* Field_1_17; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>* Field_1_18; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* Field_1_19; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* Field_1_20; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_21; // 0x48
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* Field_1_22; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* Field_1_23; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_24; // 0x60
	::Il2CppArray<::UnityEngine::Plane>* Field_1_25; // 0x68
	::Class_1_B4A29038FEECBAF0_Class_3_EC9ABC3448F7394B* Field_1_26; // 0x70
	::Il2CppArray<::UnityEngine::Plane>* Field_1_27; // 0x78
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior*>* Field_1_28; // 0x80
	::Il2CppArray<::UnityEngine::Plane>* Field_1_29; // 0x88
	::Class_1_8345B8E9167A0BA3* Field_1_30; // 0x90
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* Field_1_31; // 0x98
	::Il2CppArray<::UnityEngine::Plane>* Field_1_32; // 0xA0
	::Il2CppArray<::UnityEngine::Plane>* Field_1_33; // 0xA8
	::Il2CppArray<::UnityEngine::Plane>* Field_1_34; // 0xB0
	::UnityEngine::Vector3 Field_1_35; // 0xB8
	::System::Boolean _ForceSyncNextActive_k__BackingField; // 0xC4
	::System::Boolean Field_1_37; // 0xC5
	::System::Boolean _FrozeDefaultState_k__BackingField; // 0xC6
	::System::Boolean Field_1_39; // 0xC7
	::System::Int32 Field_1_40; // 0xC8
	::System::Single Field_1_41; // 0xCC
	::System::Single Field_1_42; // 0xD0
	::System::Int32 Field_1_43; // 0xD4
	::UnityEngine::Vector3 Field_1_44; // 0xD8
	::UnityEngine::Vector3 Field_1_45; // 0xE4
	::UnityEngine::Vector3 Field_1_46; // 0xF0
	::System::Int32 Field_1_47; // 0xFC
	::System::Single Field_1_48; // 0x100
	::System::Single Field_1_49; // 0x104
	::System::Boolean Field_1_50; // 0x108
	::System::Boolean Field_1_51; // 0x109
	::System::Boolean Field_1_52; // 0x10A
	::System::Boolean Field_1_53; // 0x10B
	::System::Int32 Field_1_54; // 0x10C
	::UnityEngine::Vector3 Field_1_55; // 0x110
	::UnityEngine::Vector3 Field_1_56; // 0x11C
	::System::Single Field_1_57; // 0x128
	::System::Single Field_1_58; // 0x12C
	::System::Boolean Field_1_59; // 0x130
	::System::Boolean Field_1_60; // 0x131
	::System::Boolean Field_1_61; // 0x132
	::System::Nullable_1<::System::Boolean> Field_1_62; // 0x133
	::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState Field_1_63; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0__CCTOR_OFFSET))();
	}

	static ::Class_1_B4A29038FEECBAF0* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_B4A29038FEECBAF0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState Method_1_B936777D193F4FE5()
	{
		return ((::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B936777D193F4FE5_OFFSET))(this);
	}

	::System::Void Method_1_52163657AD24F738(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_52163657AD24F738_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D4C5C3A4A0B6E9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6D4C5C3A4A0B6E9B_OFFSET))(this);
	}

	::System::Boolean get_ForceSyncNextActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET))(this);
	}

	::System::Void set_ForceSyncNextActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_1_6BC2B6A3A1B088CA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_1_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_2_OFFSET))(this);
	}

	::System::Void Method_1_6BC2B6A3A1B088CA_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_2_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_3_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_1_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_3_OFFSET))(this);
	}

	::System::Void Method_1_6BC2B6A3A1B088CA_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_4_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_5_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Boolean get_FrozeDefaultState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_GET_FROZEDEFAULTSTATE_OFFSET))(this);
	}

	::System::Void set_FrozeDefaultState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_SET_FROZEDEFAULTSTATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1278CA6F92325A9E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a16)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1278CA6F92325A9E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B280CE45C98AD449(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B280CE45C98AD449_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>* Method_1_995A1AC63FE02698()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_995A1AC63FE02698_OFFSET))(this);
	}

	::System::Void Method_1_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_039C3470E560B603(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_039C3470E560B603_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_690254C4B3C33267(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_690254C4B3C33267_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_569116DEF09001C2(::System::Boolean a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_569116DEF09001C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F2454CE0B2CBB4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_F2454CE0B2CBB4CA_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_99FB98A476F57A75(::Il2CppArray<::System::Single>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_99FB98A476F57A75_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_1_1183719A2F72092B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Plane>*& a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_98D7093BF0BFE607(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::System::Single>*& a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_98D7093BF0BFE607_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_CD0ABA7246E94CDC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CD0ABA7246E94CDC_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CD0ABA7246E94CDC_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CD0ABA7246E94CDC_3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1183719A2F72092B_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::Plane>*& a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::Client::ConeIntersectResult Method_1_0A7DEF48D99F9E5C(::UnityEngine::Bounds a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3)
	{
		return ((::RPG::Client::ConeIntersectResult(*)(::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_0A7DEF48D99F9E5C_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::ConeIntersectResult Method_1_09D785A1CEE43CAE(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4)
	{
		return ((::RPG::Client::ConeIntersectResult(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_09D785A1CEE43CAE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6365A2D69460636F(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::System::Single>*& a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6365A2D69460636F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_6564F93385278581(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6564F93385278581_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::ConeIntersectResult Method_1_E846D8AD7D406794(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::Il2CppArray<::UnityEngine::Vector3>* a4)
	{
		return ((::RPG::Client::ConeIntersectResult(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_E846D8AD7D406794_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::TSCRenderStatePositive Method_1_E269295B2D24712F(::RPG::Client::ConeIntersectResult a1)
	{
		return ((::RPG::Client::TSCRenderStatePositive(*)(::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_E269295B2D24712F_OFFSET))(a1);
	}

	static ::RPG::Client::TSCRenderStateNegative Method_1_50FEEAEEA11D9013(::RPG::Client::ConeIntersectResult a1)
	{
		return ((::RPG::Client::TSCRenderStateNegative(*)(::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_50FEEAEEA11D9013_OFFSET))(a1);
	}

	::System::Void Method_1_5B4A2D726ACC6CD5(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_5B4A2D726ACC6CD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_302B8AB317D3FFD7(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_302B8AB317D3FFD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FBCE2A8402F6728(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1FBCE2A8402F6728_OFFSET))(this, a1);
	}

	::System::Void Method_1_15CE32CB6EACE958(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_15CE32CB6EACE958_OFFSET))(this, a1);
	}

	::System::Void Method_1_459B892B58605C8F(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_459B892B58605C8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C13D7AC0395A639(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_9C13D7AC0395A639_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D09FA5A7543C4B5(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_5D09FA5A7543C4B5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5D8597AABA65F4CC(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_5D8597AABA65F4CC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1AE6E89E920E7F99(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1AE6E89E920E7F99_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD83315127618831(::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FD83315127618831_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4CB609A54AECC5A(::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_C4CB609A54AECC5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4FBA20393E8FEB15(::RPG::Client::ConeIntersectResult a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4FBA20393E8FEB15_1(::RPG::Client::ConeIntersectResult a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void _MarkForceSyncNextActive_b__115_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET))(this);
	}

	::System::Void _MarkForceSyncNextActive_b__115_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET))(this);
	}
};
