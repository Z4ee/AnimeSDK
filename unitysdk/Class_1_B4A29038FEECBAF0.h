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

class Class_1_0BF4BC17BA691114;
class Class_1_5F96B92B05C740DB;
class Class_1_8345B8E9167A0BA3;
class Class_1_B4A29038FEECBAF0_Class_3_EC9ABC3448F7394B;
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0x10AD4B80)
#define CLASS_1_B4A29038FEECBAF0_GET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x10AD55C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_09D785A1CEE43CAE_OFFSET UNITYSDK_OFFSET(0x10ADB4A0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_0A7DEF48D99F9E5C_OFFSET UNITYSDK_OFFSET(0x10ADB410)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_1_OFFSET UNITYSDK_OFFSET(0x10ADA9E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_OFFSET UNITYSDK_OFFSET(0x10AD7D30)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1278CA6F92325A9E_OFFSET UNITYSDK_OFFSET(0x10AD55E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x10AD7C70)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10AD4720)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x10AD5170)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x10AD54D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10AD4E10)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10AD69B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x10AD4320)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10AD4780)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10AD5810)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_435ED0DF0D110228_1_OFFSET UNITYSDK_OFFSET(0x10ADDA30)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_435ED0DF0D110228_OFFSET UNITYSDK_OFFSET(0x10ADD770)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_45BF4801780476BA_1_OFFSET UNITYSDK_OFFSET(0x10ADD310)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_45BF4801780476BA_OFFSET UNITYSDK_OFFSET(0x10ADD050)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x10AD4F80)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x10AD52E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x10AD4C20)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_1_OFFSET UNITYSDK_OFFSET(0x10ADEEF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_OFFSET UNITYSDK_OFFSET(0x10ADEEA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_50FEEAEEA11D9013_OFFSET UNITYSDK_OFFSET(0x10ADD000)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_569116DEF09001C2_OFFSET UNITYSDK_OFFSET(0x10AD67B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6365A2D69460636F_OFFSET UNITYSDK_OFFSET(0x10ADB5E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6564F93385278581_OFFSET UNITYSDK_OFFSET(0x10ADB7D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_1_OFFSET UNITYSDK_OFFSET(0x10AD5020)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_2_OFFSET UNITYSDK_OFFSET(0x10AD5380)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_OFFSET UNITYSDK_OFFSET(0x10AD4CC0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6DB361889C24FBD3_OFFSET UNITYSDK_OFFSET(0x10AD6890)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_7283533EEFFC0592_OFFSET UNITYSDK_OFFSET(0x10AD4A80)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_732819450D0821F6_OFFSET UNITYSDK_OFFSET(0x10AD4800)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_825CE5C00F84B850_OFFSET UNITYSDK_OFFSET(0x10AD64C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_9378AF093D93025E_OFFSET UNITYSDK_OFFSET(0x10AD65B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x10ADF020)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_98D7093BF0BFE607_OFFSET UNITYSDK_OFFSET(0x10AD7260)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_99FB98A476F57A75_OFFSET UNITYSDK_OFFSET(0x10AD6AD0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10ADEF40)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_A54F00FB44F90508_OFFSET UNITYSDK_OFFSET(0x10ADE890)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x10AD4860)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B2B64B49465CFE00_OFFSET UNITYSDK_OFFSET(0x10AD5880)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x10AD61B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B936777D193F4FE5_OFFSET UNITYSDK_OFFSET(0x10AD47F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BCD7154E8CFB9A17_OFFSET UNITYSDK_OFFSET(0x10ADDFD0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x10ADFB90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_C3212B409AB7C7C1_OFFSET UNITYSDK_OFFSET(0x10AD5DF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_C4105A93988097BA_OFFSET UNITYSDK_OFFSET(0x10ADE2C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_C528FD8BEA603EC2_OFFSET UNITYSDK_OFFSET(0x10ADD5D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CA3545C7EA8E5E69_OFFSET UNITYSDK_OFFSET(0x10ADEB70)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10AD57C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_1_OFFSET UNITYSDK_OFFSET(0x10AD8FA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_2_OFFSET UNITYSDK_OFFSET(0x10AD9860)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_3_OFFSET UNITYSDK_OFFSET(0x10ADA120)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_OFFSET UNITYSDK_OFFSET(0x10AD86E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_D5CE193952477FF2_OFFSET UNITYSDK_OFFSET(0x10ADDCF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_DD9D4DABC831BEFE_OFFSET UNITYSDK_OFFSET(0x10ADD6A0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E269295B2D24712F_OFFSET UNITYSDK_OFFSET(0x10ADCFB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x10AD5250)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x10AD55B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x10AD4EF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E846D8AD7D406794_OFFSET UNITYSDK_OFFSET(0x10ADB9C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_1_OFFSET UNITYSDK_OFFSET(0x10AD4C40)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_2_OFFSET UNITYSDK_OFFSET(0x10AD4F00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_3_OFFSET UNITYSDK_OFFSET(0x10AD4FA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_4_OFFSET UNITYSDK_OFFSET(0x10AD5260)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_5_OFFSET UNITYSDK_OFFSET(0x10AD5300)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x10AD4BA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x10AD5F30)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x10AD4E90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x10AD5110)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x10AD51F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x10AD5470)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_5_OFFSET UNITYSDK_OFFSET(0x10AD5550)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x10AD4DB0)
#define CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0x10AD4B90)
#define CLASS_1_B4A29038FEECBAF0_SET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x10AD55D0)
#define CLASS_1_B4A29038FEECBAF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AE66D0)
#define CLASS_1_B4A29038FEECBAF0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD4410)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET UNITYSDK_OFFSET(0x10AE6870)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET UNITYSDK_OFFSET(0x10AE6960)

inline static constexpr unsigned int Class_1_B4A29038FEECBAF0_TypeDefinitionIndex = 64738;

class Class_1_B4A29038FEECBAF0 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_54()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14840);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_57()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14848);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_59()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14850);
	}
	static ::Class_1_B4A29038FEECBAF0** StaticGet_Field_1_0()
	{
		return (::Class_1_B4A29038FEECBAF0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14858);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_58()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14860);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_52()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14868);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_55()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14870);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_62()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14878);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_63()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14880);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_51()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14888);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_53()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14890);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_60()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x14898);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_56()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x148A0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_61()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x148A8);
	}
	::Il2CppArray<::UnityEngine::Plane>* Field_1_24; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* Field_1_15; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>* Field_1_18; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>* Field_1_16; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior*>* Field_1_19; // 0x40
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_13; // 0x50
	::Il2CppArray<::UnityEngine::Plane>* Field_1_21; // 0x58
	::Class_1_B4A29038FEECBAF0_Class_3_EC9ABC3448F7394B* Field_1_47; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* Field_1_14; // 0x68
	::Il2CppArray<::UnityEngine::Plane>* Field_1_22; // 0x70
	::Il2CppArray<::UnityEngine::Plane>* Field_1_20; // 0x78
	::Class_1_8345B8E9167A0BA3* Field_1_6; // 0x80
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*>* Field_1_17; // 0x88
	::Il2CppArray<::UnityEngine::Plane>* Field_1_25; // 0x90
	::Class_1_8345B8E9167A0BA3* Field_1_5; // 0x98
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* Field_1_2; // 0xA0
	::Il2CppArray<::UnityEngine::Plane>* Field_1_23; // 0xA8
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* Field_1_3; // 0xB0
	::System::Int32 Field_1_28; // 0xB8
	::System::Int32 Field_1_27; // 0xBC
	::System::Boolean Field_1_43; // 0xC0
	::System::Boolean _FrozeDefaultState_k__BackingField; // 0xC1
	::System::Boolean Field_1_49; // 0xC2
	::System::Boolean Field_1_50; // 0xC3
	::System::Single Field_1_32; // 0xC4
	::System::Single Field_1_36; // 0xC8
	::UnityEngine::Vector3 Field_1_38; // 0xCC
	::System::Int32 Field_1_9; // 0xD8
	::System::Int32 Field_1_7; // 0xDC
	::UnityEngine::Vector3 Field_1_35; // 0xE0
	::UnityEngine::Vector3 Field_1_39; // 0xEC
	::UnityEngine::Vector3 Field_1_30; // 0xF8
	::UnityEngine::Vector3 Field_1_31; // 0x104
	::System::Boolean Field_1_46; // 0x110
	::System::Boolean Field_1_44; // 0x111
	::System::Boolean Field_1_8; // 0x112
	::System::Boolean Field_1_48; // 0x113
	::System::Single Field_1_40; // 0x114
	::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState Field_1_26; // 0x118
	::System::Single Field_1_33; // 0x11C
	::System::Single Field_1_37; // 0x120
	::System::Boolean Field_1_45; // 0x124
	::System::Boolean Field_1_11; // 0x125
	::System::Boolean _ForceSyncNextActive_k__BackingField; // 0x126
	::System::Nullable_1<::System::Boolean> Field_1_10; // 0x127
	::System::Single Field_1_41; // 0x12C
	::UnityEngine::Vector3 Field_1_34; // 0x130

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

	::System::Void Method_1_732819450D0821F6(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_732819450D0821F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7283533EEFFC0592()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_7283533EEFFC0592_OFFSET))(this);
	}

	::System::Boolean get_ForceSyncNextActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET))(this);
	}

	::System::Void set_ForceSyncNextActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_1_OFFSET))(this);
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

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_2_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_3_OFFSET))(this);
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

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_4_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4_5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_5_OFFSET))(this);
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

	::System::Void set_FrozeDefaultState(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_SET_FROZEDEFAULTSTATE_OFFSET))(this, value);
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

	::System::Void Method_1_B2B64B49465CFE00(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B2B64B49465CFE00_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>* Method_1_C3212B409AB7C7C1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_C3212B409AB7C7C1_OFFSET))(this);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_825CE5C00F84B850(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_825CE5C00F84B850_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9378AF093D93025E(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_9378AF093D93025E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_569116DEF09001C2(::System::Boolean a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_569116DEF09001C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6DB361889C24FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_6DB361889C24FBD3_OFFSET))(this);
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

	::System::Void Method_1_45BF4801780476BA(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_45BF4801780476BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_45BF4801780476BA_1(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_45BF4801780476BA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C528FD8BEA603EC2(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_C528FD8BEA603EC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD9D4DABC831BEFE(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_DD9D4DABC831BEFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_435ED0DF0D110228(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_435ED0DF0D110228_OFFSET))(this, a1);
	}

	::System::Void Method_1_435ED0DF0D110228_1(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_435ED0DF0D110228_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5CE193952477FF2(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_D5CE193952477FF2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BCD7154E8CFB9A17(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BCD7154E8CFB9A17_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C4105A93988097BA(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_C4105A93988097BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A54F00FB44F90508(::System::Collections::Generic::List_1<::Class_1_0BF4BC17BA691114*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0BF4BC17BA691114*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_A54F00FB44F90508_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA3545C7EA8E5E69(::System::Collections::Generic::List_1<::Class_1_0BF4BC17BA691114*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0BF4BC17BA691114*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_CA3545C7EA8E5E69_OFFSET))(this, a1);
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

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B00A1D822E6F5C31_OFFSET))(this);
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
