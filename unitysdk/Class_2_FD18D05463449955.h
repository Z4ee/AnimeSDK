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

#define CLASS_2_FD18D05463449955_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8AB040)
#define CLASS_2_FD18D05463449955_METHOD_2_0035AECBFF4FCC17_OFFSET UNITYSDK_OFFSET(0xE8B1400)
#define CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_1_OFFSET UNITYSDK_OFFSET(0xE8AB940)
#define CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_OFFSET UNITYSDK_OFFSET(0xE8B0340)
#define CLASS_2_FD18D05463449955_METHOD_2_09A9B238A71E35B3_OFFSET UNITYSDK_OFFSET(0xE8B59D0)
#define CLASS_2_FD18D05463449955_METHOD_2_09B5B6C6398DBC2F_OFFSET UNITYSDK_OFFSET(0xE8AD2D0)
#define CLASS_2_FD18D05463449955_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0xE8B3F30)
#define CLASS_2_FD18D05463449955_METHOD_2_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xE8B58D0)
#define CLASS_2_FD18D05463449955_METHOD_2_1AF858573C3B2182_OFFSET UNITYSDK_OFFSET(0xE8B4160)
#define CLASS_2_FD18D05463449955_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE8B22A0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_10_OFFSET UNITYSDK_OFFSET(0xE8B2040)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_11_OFFSET UNITYSDK_OFFSET(0xE8B20A0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_12_OFFSET UNITYSDK_OFFSET(0xE8B2320)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_13_OFFSET UNITYSDK_OFFSET(0xE8B32B0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_14_OFFSET UNITYSDK_OFFSET(0xE8B3ED0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_15_OFFSET UNITYSDK_OFFSET(0xE8B5230)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_16_OFFSET UNITYSDK_OFFSET(0xE8B5350)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_17_OFFSET UNITYSDK_OFFSET(0xE8B5B10)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_18_OFFSET UNITYSDK_OFFSET(0xE8B5B70)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_19_OFFSET UNITYSDK_OFFSET(0xE8B5C30)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_1_OFFSET UNITYSDK_OFFSET(0xE8AD7B0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_2_OFFSET UNITYSDK_OFFSET(0xE8ADD90)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_3_OFFSET UNITYSDK_OFFSET(0xE8AE140)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_4_OFFSET UNITYSDK_OFFSET(0xE8B0280)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_5_OFFSET UNITYSDK_OFFSET(0xE8B0760)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_6_OFFSET UNITYSDK_OFFSET(0xE8B07C0)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_7_OFFSET UNITYSDK_OFFSET(0xE8B0820)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_8_OFFSET UNITYSDK_OFFSET(0xE8B1A10)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_9_OFFSET UNITYSDK_OFFSET(0xE8B1A70)
#define CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0xE8ABDC0)
#define CLASS_2_FD18D05463449955_METHOD_2_275C2C006FCC699C_OFFSET UNITYSDK_OFFSET(0xE8AE770)
#define CLASS_2_FD18D05463449955_METHOD_2_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xE8B0E00)
#define CLASS_2_FD18D05463449955_METHOD_2_2AA60859E1992EFA_OFFSET UNITYSDK_OFFSET(0xE8B09B0)
#define CLASS_2_FD18D05463449955_METHOD_2_2EB3D81FBA9AD850_OFFSET UNITYSDK_OFFSET(0xE8B1860)
#define CLASS_2_FD18D05463449955_METHOD_2_39F1391889A50B62_OFFSET UNITYSDK_OFFSET(0xE8AEAC0)
#define CLASS_2_FD18D05463449955_METHOD_2_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0xE8AC420)
#define CLASS_2_FD18D05463449955_METHOD_2_3D8BC98C26AF647D_OFFSET UNITYSDK_OFFSET(0xE8ABE20)
#define CLASS_2_FD18D05463449955_METHOD_2_41E2C4B8E0BC5C93_OFFSET UNITYSDK_OFFSET(0xE8ABB60)
#define CLASS_2_FD18D05463449955_METHOD_2_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0xE8B04F0)
#define CLASS_2_FD18D05463449955_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xE8B33D0)
#define CLASS_2_FD18D05463449955_METHOD_2_467AC3F076594137_OFFSET UNITYSDK_OFFSET(0xE8AE1A0)
#define CLASS_2_FD18D05463449955_METHOD_2_56AFD15A3ABA3ABF_OFFSET UNITYSDK_OFFSET(0xE8ACC40)
#define CLASS_2_FD18D05463449955_METHOD_2_56B5D60DAFD9B29E_OFFSET UNITYSDK_OFFSET(0xE8B5050)
#define CLASS_2_FD18D05463449955_METHOD_2_59836F8B63700F9A_OFFSET UNITYSDK_OFFSET(0xE8ABAF0)
#define CLASS_2_FD18D05463449955_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0xE8B3C30)
#define CLASS_2_FD18D05463449955_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0xE8AD810)
#define CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_1_OFFSET UNITYSDK_OFFSET(0xE8B4AC0)
#define CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0xE8B3740)
#define CLASS_2_FD18D05463449955_METHOD_2_6B7B6B25D6DA0DF0_OFFSET UNITYSDK_OFFSET(0xE8AD4A0)
#define CLASS_2_FD18D05463449955_METHOD_2_6D32E5C113DE8BB2_OFFSET UNITYSDK_OFFSET(0xE8ABF90)
#define CLASS_2_FD18D05463449955_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xE8AF350)
#define CLASS_2_FD18D05463449955_METHOD_2_71AB7687BD5863BC_OFFSET UNITYSDK_OFFSET(0xE8AC1D0)
#define CLASS_2_FD18D05463449955_METHOD_2_7CAE854AF1B68157_OFFSET UNITYSDK_OFFSET(0xE8B23D0)
#define CLASS_2_FD18D05463449955_METHOD_2_875F03360B0C4201_OFFSET UNITYSDK_OFFSET(0xE8AC580)
#define CLASS_2_FD18D05463449955_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0xE8AD580)
#define CLASS_2_FD18D05463449955_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xE8B38C0)
#define CLASS_2_FD18D05463449955_METHOD_2_8C06673CB959B543_OFFSET UNITYSDK_OFFSET(0xE8AB800)
#define CLASS_2_FD18D05463449955_METHOD_2_937276A7175EFF36_OFFSET UNITYSDK_OFFSET(0xE8AF400)
#define CLASS_2_FD18D05463449955_METHOD_2_9655F911610F6C9A_OFFSET UNITYSDK_OFFSET(0xE8AF180)
#define CLASS_2_FD18D05463449955_METHOD_2_97D481F1A9B51827_OFFSET UNITYSDK_OFFSET(0xE8ADE50)
#define CLASS_2_FD18D05463449955_METHOD_2_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xE8AAC40)
#define CLASS_2_FD18D05463449955_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0xE8B21D0)
#define CLASS_2_FD18D05463449955_METHOD_2_B2F839F684C89BD4_OFFSET UNITYSDK_OFFSET(0xE8B3150)
#define CLASS_2_FD18D05463449955_METHOD_2_B4441DA2218099CA_OFFSET UNITYSDK_OFFSET(0xE8B4C40)
#define CLASS_2_FD18D05463449955_METHOD_2_B623FB583E585B62_OFFSET UNITYSDK_OFFSET(0xE8AD410)
#define CLASS_2_FD18D05463449955_METHOD_2_B6D0677AF5E76CEC_OFFSET UNITYSDK_OFFSET(0xE8AB760)
#define CLASS_2_FD18D05463449955_METHOD_2_B907DF5757167F27_OFFSET UNITYSDK_OFFSET(0xE8AEE60)
#define CLASS_2_FD18D05463449955_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xE8B4270)
#define CLASS_2_FD18D05463449955_METHOD_2_BB339FC1181B5C4A_OFFSET UNITYSDK_OFFSET(0xE8AE2B0)
#define CLASS_2_FD18D05463449955_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xE8AB150)
#define CLASS_2_FD18D05463449955_METHOD_2_BF05434D19601DE3_OFFSET UNITYSDK_OFFSET(0xE8AD690)
#define CLASS_2_FD18D05463449955_METHOD_2_BFD3F1C8946B5E66_OFFSET UNITYSDK_OFFSET(0xE8B5660)
#define CLASS_2_FD18D05463449955_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xE8ACA80)
#define CLASS_2_FD18D05463449955_METHOD_2_CA241200E605E58A_OFFSET UNITYSDK_OFFSET(0xE8AD110)
#define CLASS_2_FD18D05463449955_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE8B2380)
#define CLASS_2_FD18D05463449955_METHOD_2_CCCE05E301783577_OFFSET UNITYSDK_OFFSET(0xE8ADA60)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_10_OFFSET UNITYSDK_OFFSET(0xE8B3310)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_11_OFFSET UNITYSDK_OFFSET(0xE8B3370)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_12_OFFSET UNITYSDK_OFFSET(0xE8B3E70)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_13_OFFSET UNITYSDK_OFFSET(0xE8B4100)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_14_OFFSET UNITYSDK_OFFSET(0xE8B5290)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_15_OFFSET UNITYSDK_OFFSET(0xE8B52F0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_16_OFFSET UNITYSDK_OFFSET(0xE8B5600)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_17_OFFSET UNITYSDK_OFFSET(0xE8B5970)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_18_OFFSET UNITYSDK_OFFSET(0xE8B5BD0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_19_OFFSET UNITYSDK_OFFSET(0xE8B5F80)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xE8ACA20)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0xE8ADDF0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0xE8AE970)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_4_OFFSET UNITYSDK_OFFSET(0xE8AEA60)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_5_OFFSET UNITYSDK_OFFSET(0xE8B0220)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_6_OFFSET UNITYSDK_OFFSET(0xE8B02E0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_7_OFFSET UNITYSDK_OFFSET(0xE8B1AD0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_8_OFFSET UNITYSDK_OFFSET(0xE8B31F0)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_9_OFFSET UNITYSDK_OFFSET(0xE8B3250)
#define CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xE8AC520)
#define CLASS_2_FD18D05463449955_METHOD_2_CFE9CAA14AD16815_OFFSET UNITYSDK_OFFSET(0xE8B0B80)
#define CLASS_2_FD18D05463449955_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xE8AB1D0)
#define CLASS_2_FD18D05463449955_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xE8B4080)
#define CLASS_2_FD18D05463449955_METHOD_2_E085759920253133_OFFSET UNITYSDK_OFFSET(0xE8B53B0)
#define CLASS_2_FD18D05463449955_METHOD_2_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0xE8B2100)
#define CLASS_2_FD18D05463449955_METHOD_2_EA21110E104ACF9B_OFFSET UNITYSDK_OFFSET(0xE8B4A50)
#define CLASS_2_FD18D05463449955_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE8ACC30)
#define CLASS_2_FD18D05463449955_METHOD_2_F3413F9D3146DA07_OFFSET UNITYSDK_OFFSET(0xE8AE9D0)
#define CLASS_2_FD18D05463449955_METHOD_2_F6E9D813BDC4DA1A_OFFSET UNITYSDK_OFFSET(0xE8B5C90)
#define CLASS_2_FD18D05463449955_METHOD_2_F9A0F51C719C9A1E_OFFSET UNITYSDK_OFFSET(0xE8ADB70)
#define CLASS_2_FD18D05463449955_METHOD_2_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0xE8B1B30)
#define CLASS_2_FD18D05463449955_METHOD_2_FCEC49353B63FA90_OFFSET UNITYSDK_OFFSET(0xE8B0880)
#define CLASS_2_FD18D05463449955_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE8AABA0)
#define CLASS_2_FD18D05463449955_UPDATE_OFFSET UNITYSDK_OFFSET(0xE8AABE0)
#define CLASS_2_FD18D05463449955__CCTOR_OFFSET UNITYSDK_OFFSET(0xE8AB6F0)
#define CLASS_2_FD18D05463449955__CTOR_OFFSET UNITYSDK_OFFSET(0xE8AB2B0)

inline static constexpr unsigned int Class_2_FD18D05463449955_TypeDefinitionIndex = 48949;

class Class_2_FD18D05463449955 : public ::Foundation::SingletonDisposable_1<::Class_2_FD18D05463449955*>
{
public:
	static ::Class_1_E3855AF859F1C128** StaticGet_Field_2_21()
	{
		return (::Class_1_E3855AF859F1C128**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x2BAF0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_2_24()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F10);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F20);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F21);
	}
	static ::System::Boolean* StaticGet_Field_2_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F22);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F23);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F24);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F25);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F26);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F27);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F28);
	}
	static ::System::Boolean* StaticGet_Field_2_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F29);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F2A);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F2B);
	}
	static ::System::Single* StaticGet_Field_2_39()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F2C);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F30);
	}
	static ::System::Boolean* StaticGet_Field_2_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F31);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F32);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F33);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F34);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F35);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F36);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F37);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F38);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD18D05463449955_TypeDefinitionIndex)->GetStaticField(0x9F39);
	}
	::System::Collections::Generic::List_1<::Class_1_E3855AF859F1C128*>* Field_2_25; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_26; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_41; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_33; // 0x28
	::System::Collections::Generic::Queue_1<::MoleMole::Battle::Entity*>* Field_2_49; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_C14A0318DCE59ECF*>* Field_2_27; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_36; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_34; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_38; // 0x50
	::Nap::NapECS::IndexedList_2<::MoleMole::MonoEffectPluginTransform*, ::Class_2_FD18D05463449955_Struct_2_F6BDC7768A513B49<::MoleMole::MonoEffectPluginTransform*>>* Field_2_35; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_44; // 0x60
	::Class_2_44D59DDDD1D4E4A6* Field_2_37; // 0x68
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Field_2_29; // 0x70
	::System::String* Field_2_42; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_32; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_40; // 0x88
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_30; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*>* Field_2_45; // 0x98
	::System::Collections::Generic::List_1<::Struct_2_2EF780D6F2722BBD>* Field_2_43; // 0xA0
	::System::Int32 Field_2_23; // 0xA8
	::System::Boolean Field_2_47; // 0xAC
	::System::Boolean Field_2_46; // 0xAD
	::System::Boolean Field_2_31; // 0xAE
	::System::Boolean Field_2_28; // 0xAF
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

	::System::Boolean Method_2_B6D0677AF5E76CEC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B6D0677AF5E76CEC_OFFSET))(this, a1);
	}

	static ::UnityEngine::GameObject* Method_2_8C06673CB959B543(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_8C06673CB959B543_OFFSET))(a1, a2);
	}

	::System::Void Method_2_59836F8B63700F9A(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_59836F8B63700F9A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Void Method_2_3D8BC98C26AF647D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_3D8BC98C26AF647D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_3BC578EAB014DDA0_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_2_875F03360B0C4201(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_875F03360B0C4201_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_C982C8295D29DA97_OFFSET))();
	}

	::System::Void Method_2_56AFD15A3ABA3ABF(::System::String* a1, ::MoleMole::EntityHandle a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_56AFD15A3ABA3ABF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B623FB583E585B62(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B623FB583E585B62_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B7B6B25D6DA0DF0(::MoleMole::Battle::Entity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6B7B6B25D6DA0DF0_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))();
	}

	::System::Boolean Method_2_BF05434D19601DE3(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BF05434D19601DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_1_OFFSET))(a1);
	}

	::System::Void Method_2_CA241200E605E58A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CA241200E605E58A_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_6D32E5C113DE8BB2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6D32E5C113DE8BB2_OFFSET))();
	}

	static ::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_64F0C85A431FBD69_OFFSET))();
	}

	::System::Void Method_2_09B5B6C6398DBC2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09B5B6C6398DBC2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9A0F51C719C9A1E(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F9A0F51C719C9A1E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_2_OFFSET))();
	}

	::System::Void Method_2_97D481F1A9B51827(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_97D481F1A9B51827_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_3_OFFSET))(a1);
	}

	::System::Void Method_2_467AC3F076594137(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_467AC3F076594137_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB339FC1181B5C4A(::System::UInt32 a1, ::Class_3_D902FC5F64432838* a2, ::Class_3_D902FC5F64432838* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_D902FC5F64432838*, ::Class_3_D902FC5F64432838*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BB339FC1181B5C4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_275C2C006FCC699C(::Class_2_44D59DDDD1D4E4A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_44D59DDDD1D4E4A6*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_275C2C006FCC699C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_3_OFFSET))();
	}

	::System::Void Method_2_F3413F9D3146DA07(::MoleMole::MonoEffectPluginTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F3413F9D3146DA07_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_4_OFFSET))();
	}

	static ::System::Void Method_2_39F1391889A50B62(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3, ::System::Boolean a4, ::System::Int32 a5, ::Class_3_D6DA183EF60F02C8* a6)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_39F1391889A50B62_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_9655F911610F6C9A(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_9655F911610F6C9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::Class_1_E3855AF859F1C128* Method_2_937276A7175EFF36(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_4875884AB352B34E* a3, ::Class_3_D6DA183EF60F02C8* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* a7, ::System::Action_1<::MoleMole::Battle::Entity*>* a8)
	{
		return ((::Class_1_E3855AF859F1C128*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_937276A7175EFF36_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_2_71AB7687BD5863BC(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_71AB7687BD5863BC_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_CCCE05E301783577()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CCCE05E301783577_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_5()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_5_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_4_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_6()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_6_OFFSET))();
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_5_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_6_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_7_OFFSET))(a1);
	}

	::System::Void Method_2_FCEC49353B63FA90(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_FCEC49353B63FA90_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_449A7DD0254C81A3_OFFSET))();
	}

	::System::Void Method_2_2AA60859E1992EFA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2AA60859E1992EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CFE9CAA14AD16815(::System::String* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CFE9CAA14AD16815_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2839AE123F8ECAA7_OFFSET))(this);
	}

	::System::Void Method_2_0035AECBFF4FCC17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_0035AECBFF4FCC17_OFFSET))(this, a1);
	}

	::System::Void Method_2_2EB3D81FBA9AD850(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_2EB3D81FBA9AD850_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_8_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_9_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_7_OFFSET))();
	}

	::System::Void Method_2_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_FAADEE08E4E52BA5_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_10(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_10_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_11(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_11_OFFSET))(a1);
	}

	::System::Void Method_2_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_E5D433C7A574E387_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B078C58C2CD24B5E_OFFSET))();
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_12(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_12_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7CAE854AF1B68157(::Class_1_E3855AF859F1C128* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3855AF859F1C128*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_7CAE854AF1B68157_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_8_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_9()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_9_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_13(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_13_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_10()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_10_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_11()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_11_OFFSET))();
	}

	::System::Void Method_2_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B06F516E4459C742_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_OFFSET))();
	}

	::System::Void Method_2_41E2C4B8E0BC5C93(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_41E2C4B8E0BC5C93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_12()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_12_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_14_OFFSET))(a1);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_13()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_13_OFFSET))();
	}

	::System::Int32 Method_2_1AF858573C3B2182(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1AF858573C3B2182_OFFSET))(this, a1);
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F0088C88851A7DFB_OFFSET))();
	}

	::System::Void Method_2_EA21110E104ACF9B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_EA21110E104ACF9B_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_6AA581BE0B50758A_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_6AA581BE0B50758A_1_OFFSET))();
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Boolean Method_2_B4441DA2218099CA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B4441DA2218099CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_56B5D60DAFD9B29E(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_56B5D60DAFD9B29E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_15_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_14()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_14_OFFSET))();
	}

	::System::Void Method_2_B907DF5757167F27(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B907DF5757167F27_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_15()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_15_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_16_OFFSET))(a1);
	}

	::System::Void Method_2_E085759920253133(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_E085759920253133_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_16()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_16_OFFSET))();
	}

	::System::Void Method_2_BFD3F1C8946B5E66(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_BFD3F1C8946B5E66_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D_17()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_17_OFFSET))();
	}

	::System::Void Method_2_09A9B238A71E35B3(::System::UInt32 a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_09A9B238A71E35B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_17(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_17_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF_18(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_18_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_18()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_18_OFFSET))();
	}

	::System::Boolean Method_2_B2F839F684C89BD4(::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::GraphicSettings_EParticleLodLevel))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_B2F839F684C89BD4_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_07A640FA3CABD3A7_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_07A640FA3CABD3A7_1_OFFSET))();
	}

	static ::System::Void Method_2_1DA89DF9585853CF_19(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_1DA89DF9585853CF_19_OFFSET))(a1);
	}

	::System::Void Method_2_F6E9D813BDC4DA1A(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_F6E9D813BDC4DA1A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_CE34EA208837238D_19()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD18D05463449955_METHOD_2_CE34EA208837238D_19_OFFSET))();
	}
};
