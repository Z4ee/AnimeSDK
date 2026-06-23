#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FD18D05463449955_Struct_2_F6BDC7768A513B49.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_2EF780D6F2722BBD.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EParticleLodLevel.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_C14A0318DCE59ECF;
class Class_1_E3855AF859F1C128;
class Class_2_44D59DDDD1D4E4A6;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
class Class_3_D902FC5F64432838;
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { template <typename T1, typename T2> class IndexedList_2; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FD18D05463449955_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B96DA0)
#define CLASS_2_FD18D05463449955_METHOD_2_0035AECBFF4FCC17_OFFSET UNITYSDK_OFFSET(0x13B9F4B0)
#define CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_1_OFFSET UNITYSDK_OFFSET(0x13BA0990)
#define CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_OFFSET UNITYSDK_OFFSET(0x13B98ED0)
#define CLASS_2_FD18D05463449955_METHOD_2_09A9B238A71E35B3_OFFSET UNITYSDK_OFFSET(0x13B9A8D0)
#define CLASS_2_FD18D05463449955_METHOD_2_09B5B6C6398DBC2F_OFFSET UNITYSDK_OFFSET(0x13B98230)
#define CLASS_2_FD18D05463449955_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x13BA1920)
#define CLASS_2_FD18D05463449955_METHOD_2_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x13B9E8C0)
#define CLASS_2_FD18D05463449955_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x13B96EB0)
#define CLASS_2_FD18D05463449955_METHOD_2_1AF858573C3B2182_OFFSET UNITYSDK_OFFSET(0x13B99450)
#define CLASS_2_FD18D05463449955_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13B9EBB0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_10_OFFSET UNITYSDK_OFFSET(0x13B9EC30)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_11_OFFSET UNITYSDK_OFFSET(0x13B9ED80)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_12_OFFSET UNITYSDK_OFFSET(0x13B9EDE0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_13_OFFSET UNITYSDK_OFFSET(0x13B9EEA0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_14_OFFSET UNITYSDK_OFFSET(0x13BA0B40)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_15_OFFSET UNITYSDK_OFFSET(0x13BA0BA0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_16_OFFSET UNITYSDK_OFFSET(0x13BA10C0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_17_OFFSET UNITYSDK_OFFSET(0x13BA1120)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_18_OFFSET UNITYSDK_OFFSET(0x13BA11E0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_19_OFFSET UNITYSDK_OFFSET(0x13BA1CC0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_1_OFFSET UNITYSDK_OFFSET(0x13B9A450)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_2_OFFSET UNITYSDK_OFFSET(0x13B9A4B0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_3_OFFSET UNITYSDK_OFFSET(0x13B9A510)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_4_OFFSET UNITYSDK_OFFSET(0x13B9AD70)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_5_OFFSET UNITYSDK_OFFSET(0x13B9B2A0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_6_OFFSET UNITYSDK_OFFSET(0x13B9CA00)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_7_OFFSET UNITYSDK_OFFSET(0x13B9D240)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_8_OFFSET UNITYSDK_OFFSET(0x13B9EAF0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_9_OFFSET UNITYSDK_OFFSET(0x13B9EB50)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x13B97510)
#define CLASS_2_FD18D05463449955_METHOD_2_275C2C006FCC699C_OFFSET UNITYSDK_OFFSET(0x13B9D2A0)
#define CLASS_2_FD18D05463449955_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x13B99560)
#define CLASS_2_FD18D05463449955_METHOD_2_2AA60859E1992EFA_OFFSET UNITYSDK_OFFSET(0x13B9B410)
#define CLASS_2_FD18D05463449955_METHOD_2_2EB3D81FBA9AD850_OFFSET UNITYSDK_OFFSET(0x13B9AA10)
#define CLASS_2_FD18D05463449955_METHOD_2_39F1391889A50B62_OFFSET UNITYSDK_OFFSET(0x13B9E480)
#define CLASS_2_FD18D05463449955_METHOD_2_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x13B98050)
#define CLASS_2_FD18D05463449955_METHOD_2_3D8BC98C26AF647D_OFFSET UNITYSDK_OFFSET(0x13B97A50)
#define CLASS_2_FD18D05463449955_METHOD_2_41E2C4B8E0BC5C93_OFFSET UNITYSDK_OFFSET(0x13B99200)
#define CLASS_2_FD18D05463449955_METHOD_2_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x13B9BEA0)
#define CLASS_2_FD18D05463449955_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x13B9B5E0)
#define CLASS_2_FD18D05463449955_METHOD_2_467AC3F076594137_OFFSET UNITYSDK_OFFSET(0x13B9D4B0)
#define CLASS_2_FD18D05463449955_METHOD_2_56AFD15A3ABA3ABF_OFFSET UNITYSDK_OFFSET(0x13B983D0)
#define CLASS_2_FD18D05463449955_METHOD_2_56B5D60DAFD9B29E_OFFSET UNITYSDK_OFFSET(0x13B9D060)
#define CLASS_2_FD18D05463449955_METHOD_2_59836F8B63700F9A_OFFSET UNITYSDK_OFFSET(0x13B99190)
#define CLASS_2_FD18D05463449955_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x13B98C80)
#define CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_1_OFFSET UNITYSDK_OFFSET(0x13BA1B40)
#define CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x13B9A570)
#define CLASS_2_FD18D05463449955_METHOD_2_6B7B6B25D6DA0DF0_OFFSET UNITYSDK_OFFSET(0x13B98150)
#define CLASS_2_FD18D05463449955_METHOD_2_6D32E5C113DE8BB2_OFFSET UNITYSDK_OFFSET(0x13B97BC0)
#define CLASS_2_FD18D05463449955_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x13B9CFB0)
#define CLASS_2_FD18D05463449955_METHOD_2_71AB7687BD5863BC_OFFSET UNITYSDK_OFFSET(0x13B97E00)
#define CLASS_2_FD18D05463449955_METHOD_2_7CAE854AF1B68157_OFFSET UNITYSDK_OFFSET(0x13B9D5C0)
#define CLASS_2_FD18D05463449955_METHOD_2_875F03360B0C4201_OFFSET UNITYSDK_OFFSET(0x13B9CB20)
#define CLASS_2_FD18D05463449955_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x13B9C8F0)
#define CLASS_2_FD18D05463449955_METHOD_2_8C06673CB959B543_OFFSET UNITYSDK_OFFSET(0x13B9E340)
#define CLASS_2_FD18D05463449955_METHOD_2_937276A7175EFF36_OFFSET UNITYSDK_OFFSET(0x13B9FB70)
#define CLASS_2_FD18D05463449955_METHOD_2_9655F911610F6C9A_OFFSET UNITYSDK_OFFSET(0x13BA1750)
#define CLASS_2_FD18D05463449955_METHOD_2_97D481F1A9B51827_OFFSET UNITYSDK_OFFSET(0x13B9F1C0)
#define CLASS_2_FD18D05463449955_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x13B99B70)
#define CLASS_2_FD18D05463449955_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x13B969C0)
#define CLASS_2_FD18D05463449955_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x13BA1A70)
#define CLASS_2_FD18D05463449955_METHOD_2_B2F839F684C89BD4_OFFSET UNITYSDK_OFFSET(0x13B9E820)
#define CLASS_2_FD18D05463449955_METHOD_2_B4441DA2218099CA_OFFSET UNITYSDK_OFFSET(0x13B9B950)
#define CLASS_2_FD18D05463449955_METHOD_2_B623FB583E585B62_OFFSET UNITYSDK_OFFSET(0x13B9ECF0)
#define CLASS_2_FD18D05463449955_METHOD_2_B6D0677AF5E76CEC_OFFSET UNITYSDK_OFFSET(0x13B9BD50)
#define CLASS_2_FD18D05463449955_METHOD_2_B907DF5757167F27_OFFSET UNITYSDK_OFFSET(0x13B9A120)
#define CLASS_2_FD18D05463449955_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x13B9C120)
#define CLASS_2_FD18D05463449955_METHOD_2_BB339FC1181B5C4A_OFFSET UNITYSDK_OFFSET(0x13B9ADD0)
#define CLASS_2_FD18D05463449955_METHOD_2_BF05434D19601DE3_OFFSET UNITYSDK_OFFSET(0x13B9B300)
#define CLASS_2_FD18D05463449955_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x13B99EE0)
#define CLASS_2_FD18D05463449955_METHOD_2_BFD3F1C8946B5E66_OFFSET UNITYSDK_OFFSET(0x13B9EF60)
#define CLASS_2_FD18D05463449955_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x13B9ABC0)
#define CLASS_2_FD18D05463449955_METHOD_2_CA241200E605E58A_OFFSET UNITYSDK_OFFSET(0x13B988A0)
#define CLASS_2_FD18D05463449955_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B9BDF0)
#define CLASS_2_FD18D05463449955_METHOD_2_CCCE05E301783577_OFFSET UNITYSDK_OFFSET(0x13B99080)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_10_OFFSET UNITYSDK_OFFSET(0x13B9E9C0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_11_OFFSET UNITYSDK_OFFSET(0x13B9EA20)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_12_OFFSET UNITYSDK_OFFSET(0x13B9EC90)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_13_OFFSET UNITYSDK_OFFSET(0x13B9EE40)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_14_OFFSET UNITYSDK_OFFSET(0x13B9EF00)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_15_OFFSET UNITYSDK_OFFSET(0x13BA0CC0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_16_OFFSET UNITYSDK_OFFSET(0x13BA0D20)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_17_OFFSET UNITYSDK_OFFSET(0x13BA0D80)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_18_OFFSET UNITYSDK_OFFSET(0x13BA1060)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_19_OFFSET UNITYSDK_OFFSET(0x13BA1180)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x13B97990)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0x13B979F0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0x13B98370)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_4_OFFSET UNITYSDK_OFFSET(0x13B9A780)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_5_OFFSET UNITYSDK_OFFSET(0x13B9A7E0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_6_OFFSET UNITYSDK_OFFSET(0x13B9BE40)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_7_OFFSET UNITYSDK_OFFSET(0x13B9CA60)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_8_OFFSET UNITYSDK_OFFSET(0x13B9CAC0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_9_OFFSET UNITYSDK_OFFSET(0x13B9E960)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13B974B0)
#define CLASS_2_FD18D05463449955_METHOD_2_CFE9CAA14AD16815_OFFSET UNITYSDK_OFFSET(0x13BA0DE0)
#define CLASS_2_FD18D05463449955_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13B96F30)
#define CLASS_2_FD18D05463449955_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x13B9A6F0)
#define CLASS_2_FD18D05463449955_METHOD_2_E085759920253133_OFFSET UNITYSDK_OFFSET(0x13B9F910)
#define CLASS_2_FD18D05463449955_METHOD_2_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x13BA0C00)
#define CLASS_2_FD18D05463449955_METHOD_2_EA21110E104ACF9B_OFFSET UNITYSDK_OFFSET(0x13B9EA80)
#define CLASS_2_FD18D05463449955_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13B9C110)
#define CLASS_2_FD18D05463449955_METHOD_2_F3413F9D3146DA07_OFFSET UNITYSDK_OFFSET(0x13B9A840)
#define CLASS_2_FD18D05463449955_METHOD_2_F6E9D813BDC4DA1A_OFFSET UNITYSDK_OFFSET(0x13B97570)
#define CLASS_2_FD18D05463449955_METHOD_2_F9A0F51C719C9A1E_OFFSET UNITYSDK_OFFSET(0x13B98A60)
#define CLASS_2_FD18D05463449955_METHOD_2_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x13BA1240)
#define CLASS_2_FD18D05463449955_METHOD_2_FCEC49353B63FA90_OFFSET UNITYSDK_OFFSET(0x13B97860)
#define CLASS_2_FD18D05463449955_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13B96920)
#define CLASS_2_FD18D05463449955_UPDATE_OFFSET UNITYSDK_OFFSET(0x13B96960)
#define CLASS_2_FD18D05463449955__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B97450)
#define CLASS_2_FD18D05463449955__CTOR_OFFSET UNITYSDK_OFFSET(0x13B97010)

inline static constexpr unsigned int Class_2_FD18D05463449955_TypeDefinitionIndex = 61058;

class Class_2_FD18D05463449955 : public ::Foundation::SingletonDisposable_1<::Class_2_FD18D05463449955*>
{
public:
	static ::Class_1_E3855AF859F1C128** StaticGet_Field_2_21()
	{
		return (::Class_1_E3855AF859F1C128**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x35710);
	}
	static ::System::Boolean* StaticGet_Field_2_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD440);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD441);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD442);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD443);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD444);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD445);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD446);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD447);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD448);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD449);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44A);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44B);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44C);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44D);
	}
	static ::System::Boolean* StaticGet_Field_2_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44E);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD44F);
	}
	static ::System::Single* StaticGet_Field_2_39()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD450);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_2_24()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD458);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD468);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD469);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD46A);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD46B);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD46C);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0xD46D);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_44; // 0x10
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_29; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_40; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_2EF780D6F2722BBD>* Field_2_43; // 0x28
	::System::String* Field_2_42; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_26; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_32; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_33; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_C14A0318DCE59ECF*>* Field_2_27; // 0x50
	::System::Collections::Generic::List_1<::Class_1_E3855AF859F1C128*>* Field_2_25; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_30; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_45; // 0x68
	::Nap::NapECS::IndexedList_2<::MoleMole::MonoEffectPluginTransform*, ::Class_2_FD18D05463449955_Struct_2_F6BDC7768A513B49<::MoleMole::MonoEffectPluginTransform*>>* Field_2_35; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_38; // 0x78
	::System::Collections::Generic::Queue_1<::MoleMole::Battle::Entity*>* Field_2_49; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_36; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_41; // 0x90
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_34; // 0x98
	::Class_2_44D59DDDD1D4E4A6* Field_2_37; // 0xA0
	::System::Boolean Field_2_31; // 0xA8
	::System::Boolean Field_2_47; // 0xA9
	::System::Boolean Field_2_28; // 0xAA
	::System::Boolean Field_2_46; // 0xAB
	::System::Int32 Field_2_23; // 0xAC
	::System::Int32 Field_2_48; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	::System::Void Method_2_F6E9D813BDC4DA1A(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F6E9D813BDC4DA1A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FCEC49353B63FA90(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_FCEC49353B63FA90_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_2_OFFSET))();
	}

	static ::System::Void Method_2_3D8BC98C26AF647D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_3D8BC98C26AF647D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_3BC578EAB014DDA0_OFFSET))();
	}

	::System::Void Method_2_6B7B6B25D6DA0DF0(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6B7B6B25D6DA0DF0_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_3_OFFSET))();
	}

	::System::Void Method_2_56AFD15A3ABA3ABF(::System::String* a1, ::MoleMole::EntityHandle a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_56AFD15A3ABA3ABF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F9A0F51C719C9A1E(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F9A0F51C719C9A1E_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_64F0C85A431FBD69_OFFSET))();
	}

	::System::Void Method_2_59836F8B63700F9A(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_59836F8B63700F9A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_1AF858573C3B2182(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1AF858573C3B2182_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_71AB7687BD5863BC(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_71AB7687BD5863BC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_41E2C4B8E0BC5C93(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_41E2C4B8E0BC5C93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09B5B6C6398DBC2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09B5B6C6398DBC2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_B907DF5757167F27(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B907DF5757167F27_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_1_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_2_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_3_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_OFFSET))();
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_4_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_5()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_5_OFFSET))();
	}

	::System::Void Method_2_F3413F9D3146DA07(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F3413F9D3146DA07_OFFSET))(this, a1);
	}

	::System::Void Method_2_09A9B238A71E35B3(::System::UInt32 a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09A9B238A71E35B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2EB3D81FBA9AD850(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2EB3D81FBA9AD850_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_4_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_6D32E5C113DE8BB2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6D32E5C113DE8BB2_OFFSET))();
	}

	::System::Void Method_2_BB339FC1181B5C4A(::System::UInt32 a1, ::Class_3_D902FC5F64432838* a2, ::Class_3_D902FC5F64432838* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_D902FC5F64432838*, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BB339FC1181B5C4A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_5_OFFSET))(a1);
	}

	::System::Boolean Method_2_BF05434D19601DE3(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BF05434D19601DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2AA60859E1992EFA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2AA60859E1992EFA_OFFSET))(this, a1);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CCCE05E301783577()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CCCE05E301783577_OFFSET))();
	}

	::System::Boolean Method_2_B4441DA2218099CA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B4441DA2218099CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_6()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_6_OFFSET))();
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	static ::System::Boolean Method_2_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_449A7DD0254C81A3_OFFSET))();
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}

	static ::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_6_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_7_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_8_OFFSET))();
	}

	::System::Boolean Method_2_B6D0677AF5E76CEC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B6D0677AF5E76CEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_875F03360B0C4201(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_875F03360B0C4201_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA241200E605E58A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CA241200E605E58A_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B5D60DAFD9B29E(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_56B5D60DAFD9B29E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_7_OFFSET))(a1);
	}

	::System::Void Method_2_275C2C006FCC699C(::Class_2_44D59DDDD1D4E4A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_275C2C006FCC699C_OFFSET))(this, a1);
	}

	::System::Void Method_2_467AC3F076594137(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_467AC3F076594137_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CAE854AF1B68157(::Class_1_E3855AF859F1C128* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3855AF859F1C128*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_7CAE854AF1B68157_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_9()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_9_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_10()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_10_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_11()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_11_OFFSET))();
	}

	::System::Void Method_2_EA21110E104ACF9B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_EA21110E104ACF9B_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_8_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_9_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_2_8C06673CB959B543(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_8C06673CB959B543_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_C982C8295D29DA97_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_10(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_10_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_12()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_12_OFFSET))();
	}

	::System::Void Method_2_B623FB583E585B62(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B623FB583E585B62_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_11(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_11_OFFSET))(a1);
	}

	static ::System::Void Method_2_39F1391889A50B62(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_3_D6DA183EF60F02C8* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_39F1391889A50B62_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_12_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_13()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_13_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_13_OFFSET))(a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_14()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_14_OFFSET))();
	}

	::System::Void Method_2_BFD3F1C8946B5E66(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BFD3F1C8946B5E66_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D481F1A9B51827(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_97D481F1A9B51827_OFFSET))(this, a1);
	}

	::System::Void Method_2_0035AECBFF4FCC17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_0035AECBFF4FCC17_OFFSET))(this, a1);
	}

	::System::Void Method_2_E085759920253133(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_E085759920253133_OFFSET))(this, a1);
	}

	::Class_1_E3855AF859F1C128* Method_2_937276A7175EFF36(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_4875884AB352B34E* a3, ::Class_3_D6DA183EF60F02C8* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a7, ::System::Action_1<::MoleMole::Battle::Entity*>* a8)
	{
		return ((::Class_1_E3855AF859F1C128*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_937276A7175EFF36_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_1_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_14_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_15_OFFSET))(a1);
	}

	::System::Void Method_2_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_E5D433C7A574E387_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_15()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_15_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_16()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_16_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_17()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_17_OFFSET))();
	}

	::System::Boolean Method_2_CFE9CAA14AD16815(::System::String* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CFE9CAA14AD16815_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_18()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_18_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_16_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_17(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_17_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_19()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_19_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_18(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_18_OFFSET))(a1);
	}

	::System::Void Method_2_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_2_9655F911610F6C9A(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_9655F911610F6C9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B078C58C2CD24B5E_OFFSET))();
	}

	::System::Boolean Method_2_B2F839F684C89BD4(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B2F839F684C89BD4_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_1_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_19(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_19_OFFSET))(a1);
	}
};
