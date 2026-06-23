#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/NapRenderEntityFlags.h"
#include "unitysdk/Struct_2_25797252421662EF.h"
#include "unitysdk/Struct_2_395B739A1AC58399_2.h"
#include "unitysdk/Struct_2_68918411AEC7D5BB.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Struct_2_C2BA6C3A72B961AE.h"
#include "unitysdk/Struct_2_D88FF587540AB8AF.h"
#include "unitysdk/Struct_2_EEEBC33BDDF169CE.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_413B2BDBE645DB66;
class Class_1_B7E341C5F1A6F199;
class Class_2_659FD8D80237B753_9;
class Class_2_D1970C03380B1430;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_3_099113BEAFEE7B9D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x142CBB40)
#define CLASS_3_099113BEAFEE7B9D_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x142CD640)
#define CLASS_3_099113BEAFEE7B9D_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x142CDB30)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_02330A6D0B714DA9_1_OFFSET UNITYSDK_OFFSET(0x142D7670)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_02330A6D0B714DA9_OFFSET UNITYSDK_OFFSET(0x142D0C60)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_03CC7653040D2294_OFFSET UNITYSDK_OFFSET(0x142D59C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_064C5A8C2604B6DF_OFFSET UNITYSDK_OFFSET(0x142CFEC0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_0670E1DC645EAA78_OFFSET UNITYSDK_OFFSET(0x142D11F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_06C39E6456363849_OFFSET UNITYSDK_OFFSET(0x142D1650)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_07C911C46C9639E8_OFFSET UNITYSDK_OFFSET(0x142DF180)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x142D1C80)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x142CF600)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_141A0BCFCF8ADDFB_OFFSET UNITYSDK_OFFSET(0x142DE880)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_146BFAC3AFDB933C_OFFSET UNITYSDK_OFFSET(0x142D5620)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_14DE8FA094E9918F_OFFSET UNITYSDK_OFFSET(0x142DBF80)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x142D2BF0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_1D079636AB6B80A3_OFFSET UNITYSDK_OFFSET(0x142D8C70)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_1D0BEAC033AD1B84_OFFSET UNITYSDK_OFFSET(0x142DE340)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_23C5A27F079EA695_OFFSET UNITYSDK_OFFSET(0x142DC840)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_31B7D57439C0FED7_OFFSET UNITYSDK_OFFSET(0x142D4E60)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_36BABEFFF1166F4C_OFFSET UNITYSDK_OFFSET(0x142DF700)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x142DAA70)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x142DCA80)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_3D18F8A9381DBAE2_OFFSET UNITYSDK_OFFSET(0x142DBA20)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x142D0780)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_445D81FBF452EBB3_OFFSET UNITYSDK_OFFSET(0x142DD100)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_4489C3B3F646E413_OFFSET UNITYSDK_OFFSET(0x142D9F20)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_46400F958915BADC_OFFSET UNITYSDK_OFFSET(0x142D9930)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x142CE5B0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_476C5ED2CE01BB87_OFFSET UNITYSDK_OFFSET(0x142D33A0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_4993509E11AB834C_OFFSET UNITYSDK_OFFSET(0x142D4560)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x142D0260)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5209C005F46F37AB_OFFSET UNITYSDK_OFFSET(0x142DED00)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_581E41BC4B81D19F_1_OFFSET UNITYSDK_OFFSET(0x142D4FE0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_581E41BC4B81D19F_OFFSET UNITYSDK_OFFSET(0x142D6890)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5839C28D65BD9C1F_OFFSET UNITYSDK_OFFSET(0x142D2470)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_593F7847A94BDD52_OFFSET UNITYSDK_OFFSET(0x142D6010)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5A62C2F9A3F52CE1_1_OFFSET UNITYSDK_OFFSET(0x142E01F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5A62C2F9A3F52CE1_OFFSET UNITYSDK_OFFSET(0x142DFD70)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x142D1F20)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5D5ACA310A9B3D4E_OFFSET UNITYSDK_OFFSET(0x142DC2E0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_5D7A3209DB8F0A3C_OFFSET UNITYSDK_OFFSET(0x142D2EE0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_62A90A520E142884_OFFSET UNITYSDK_OFFSET(0x142D4DF0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0x142D13D0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6BAA2ADF5CA232E1_OFFSET UNITYSDK_OFFSET(0x142DEBD0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6CCC5FF90ECCCBD6_OFFSET UNITYSDK_OFFSET(0x142D3C20)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x142CCF90)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x142D0C10)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6EA53E21BF643EC7_OFFSET UNITYSDK_OFFSET(0x142DD950)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6F504CDF5C268E1E_OFFSET UNITYSDK_OFFSET(0x142D7CA0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_6F5B17D3B62A6AC4_OFFSET UNITYSDK_OFFSET(0x142D22A0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x142E0930)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_73EB171B85A9A3BE_OFFSET UNITYSDK_OFFSET(0x142D0EC0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7798EDDC4449888C_OFFSET UNITYSDK_OFFSET(0x142D2720)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7A6E75CE0CFA0015_OFFSET UNITYSDK_OFFSET(0x142D6360)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0x142CFAB0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7CFF2709956D699C_OFFSET UNITYSDK_OFFSET(0x142D5D20)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7EFD9B0DF7F1179D_OFFSET UNITYSDK_OFFSET(0x142E04A0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x142DB410)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x142CD940)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_88AA35F0EA7BDC9D_OFFSET UNITYSDK_OFFSET(0x142D8770)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_89DA04E9FA142523_OFFSET UNITYSDK_OFFSET(0x142D37D0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_8AC175EE11DDE09E_OFFSET UNITYSDK_OFFSET(0x142DC240)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_8C0A991B87BCB7E5_OFFSET UNITYSDK_OFFSET(0x142DF220)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_8E8BEC7C0106E690_OFFSET UNITYSDK_OFFSET(0x142D0490)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_8EB146EA43B94157_1_OFFSET UNITYSDK_OFFSET(0x142D86B0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_8EB146EA43B94157_OFFSET UNITYSDK_OFFSET(0x142D67D0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0x142DC200)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x142D58F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_99866264207E9AED_OFFSET UNITYSDK_OFFSET(0x142D5680)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_9A2E4360D82CD91D_OFFSET UNITYSDK_OFFSET(0x142E0890)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_9A63C6AE791A91AF_OFFSET UNITYSDK_OFFSET(0x142DDE00)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_9EF12507EBD5B742_OFFSET UNITYSDK_OFFSET(0x142E0010)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_A0088B2B8CC3AB38_OFFSET UNITYSDK_OFFSET(0x142DBDB0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_A11B3EB9A39E6B5A_OFFSET UNITYSDK_OFFSET(0x142D9D60)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_A256783BB3FB254A_OFFSET UNITYSDK_OFFSET(0x142CD9D0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_A68137F19A05D1E7_OFFSET UNITYSDK_OFFSET(0x142D7440)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0x142D55E0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_AC6135D8F63296DB_OFFSET UNITYSDK_OFFSET(0x142D49C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_AFA42DB8DA0B8A0F_OFFSET UNITYSDK_OFFSET(0x142E0560)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_B077487B71D80CA7_OFFSET UNITYSDK_OFFSET(0x142D3150)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_B1C521B1F374AFDB_OFFSET UNITYSDK_OFFSET(0x142D99F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0x142D3470)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x142E0990)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_BD933092E8837272_OFFSET UNITYSDK_OFFSET(0x142DFAC0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_C0AE5C56C07E6E1A_OFFSET UNITYSDK_OFFSET(0x142D8ED0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_C457E56BF9F49D46_1_OFFSET UNITYSDK_OFFSET(0x142DF8E0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_C457E56BF9F49D46_OFFSET UNITYSDK_OFFSET(0x142D7540)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_C4B3AA0C3AB32DAA_OFFSET UNITYSDK_OFFSET(0x142DF3A0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_C832863DF1687108_OFFSET UNITYSDK_OFFSET(0x142D8880)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x142D5930)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x142D7C10)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x142DC9F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x142E0160)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142D2060)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CACF7D8CB6FE2E2D_OFFSET UNITYSDK_OFFSET(0x142D0AE0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x142DC1A0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0x142DE710)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D40AEACBF23D3511_OFFSET UNITYSDK_OFFSET(0x142DF880)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D583DEDB2A029A22_OFFSET UNITYSDK_OFFSET(0x142DE630)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D5B572F8E62A1A24_OFFSET UNITYSDK_OFFSET(0x142DFA10)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D69FE076BDF3B283_OFFSET UNITYSDK_OFFSET(0x142DBE50)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x142D0B50)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_DA2A089BF5579DDE_OFFSET UNITYSDK_OFFSET(0x142D38C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_DA810CB4E50A16C3_OFFSET UNITYSDK_OFFSET(0x142D78C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x142DB170)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_DFA0A5E96EA7A533_OFFSET UNITYSDK_OFFSET(0x142D2C90)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_E0328B2B33960A55_OFFSET UNITYSDK_OFFSET(0x142D20F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_E30239949C1C730B_OFFSET UNITYSDK_OFFSET(0x142DC710)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x142D5AA0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_E860BCF30C7DC270_OFFSET UNITYSDK_OFFSET(0x142DC5C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_EBE680E9A2BB62FE_OFFSET UNITYSDK_OFFSET(0x142D80F0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0x142DCD50)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_F5E83CDB06B1B175_OFFSET UNITYSDK_OFFSET(0x142DE7C0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_F8DFB7D745706C51_OFFSET UNITYSDK_OFFSET(0x142D2990)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_F91919B4C7FE5221_OFFSET UNITYSDK_OFFSET(0x142D0A50)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_F94FE4BEF0AC8EB2_OFFSET UNITYSDK_OFFSET(0x142D16D0)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_FA464556A431EF21_OFFSET UNITYSDK_OFFSET(0x142DD600)
#define CLASS_3_099113BEAFEE7B9D_METHOD_3_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x142CF5B0)
#define CLASS_3_099113BEAFEE7B9D_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x142CBF00)
#define CLASS_3_099113BEAFEE7B9D_START_OFFSET UNITYSDK_OFFSET(0x142CBA70)
#define CLASS_3_099113BEAFEE7B9D_UPDATE_OFFSET UNITYSDK_OFFSET(0x142CC830)
#define CLASS_3_099113BEAFEE7B9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x142CE990)
#define CLASS_3_099113BEAFEE7B9D__CTOR_OFFSET UNITYSDK_OFFSET(0x142CE940)

inline static constexpr unsigned int Class_3_099113BEAFEE7B9D_TypeDefinitionIndex = 66388;

class Class_3_099113BEAFEE7B9D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::Class_3_FFD0045B4597F294*>** StaticGet_Field_3_20()
	{
		return (::System::Collections::Generic::List_1<::Class_3_FFD0045B4597F294*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD50);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_3_26()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD58);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_413B2BDBE645DB66*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_413B2BDBE645DB66*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD60);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD68);
	}
	static ::Class_3_099113BEAFEE7B9D** StaticGet_Field_3_22()
	{
		return (::Class_3_099113BEAFEE7B9D**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_2>** StaticGet_Field_3_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_2>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD78);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>** StaticGet_Field_3_10()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD80);
	}
	static ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>** StaticGet_Field_3_13()
	{
		return (::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD88);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD90);
	}
	static ::Unity::Collections::ManagedBlockQueue_1<::Struct_2_68918411AEC7D5BB>** StaticGet_Field_3_14()
	{
		return (::Unity::Collections::ManagedBlockQueue_1<::Struct_2_68918411AEC7D5BB>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DD98);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>** StaticGet_Field_3_24()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*>** StaticGet_Field_3_17()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_18()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet_Field_3_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDB8);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_EEEBC33BDDF169CE>** StaticGet_Field_3_7()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_EEEBC33BDDF169CE>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*>** StaticGet_Field_3_15()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDC8);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_413B2BDBE645DB66*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_413B2BDBE645DB66*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_16()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0x2DDD8);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_0()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA010);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_25()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA020);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_8()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA030);
	}
	static ::System::Boolean* StaticGet_Field_3_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA040);
	}
	static ::System::Boolean* StaticGet_Field_3_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA041);
	}
	static ::System::Single* StaticGet_Field_3_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA044);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_21()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA048);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_4()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_099113BEAFEE7B9D_TypeDefinitionIndex)->GetStaticField(0xA058);
	}
	::Nap::NapECS::EcsFilter* Field_3_23; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_START_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_FD647A48096EB173_OFFSET))(this);
	}

	static ::System::Void Method_3_064C5A8C2604B6DF(::Class_3_FFD0045B4597F294* a1, ::Class_2_D1970C03380B1430* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::Class_2_D1970C03380B1430*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_064C5A8C2604B6DF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	static ::System::Void Method_3_F91919B4C7FE5221(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_F91919B4C7FE5221_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_CACF7D8CB6FE2E2D(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CACF7D8CB6FE2E2D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_02330A6D0B714DA9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_0670E1DC645EAA78(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_0670E1DC645EAA78_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_06C39E6456363849(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_06C39E6456363849_OFFSET))(a1);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_E0328B2B33960A55(::UnityEngine::Renderer* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_E0328B2B33960A55_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_7798EDDC4449888C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7798EDDC4449888C_OFFSET))(a1);
	}

	static ::System::Void Method_3_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_3_DFA0A5E96EA7A533(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_DFA0A5E96EA7A533_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_5D7A3209DB8F0A3C(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5D7A3209DB8F0A3C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_476C5ED2CE01BB87(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_476C5ED2CE01BB87_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_B3BCFE72DF2C5725(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_89DA04E9FA142523(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_89DA04E9FA142523_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DA2A089BF5579DDE(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_DA2A089BF5579DDE_OFFSET))(a1);
	}

	static ::System::Void Method_3_6CCC5FF90ECCCBD6(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6CCC5FF90ECCCBD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC6135D8F63296DB(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_AC6135D8F63296DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_62A90A520E142884(::Class_3_FFD0045B4597F294* a1, ::System::Func_2<::System::String*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Func_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_62A90A520E142884_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_31B7D57439C0FED7(::Class_3_FFD0045B4597F294* a1, ::Struct_2_25797252421662EF a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::Struct_2_25797252421662EF))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_31B7D57439C0FED7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_146BFAC3AFDB933C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_146BFAC3AFDB933C_OFFSET))(a1);
	}

	static ::System::Void Method_3_99866264207E9AED(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_99866264207E9AED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_A256783BB3FB254A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_A256783BB3FB254A_OFFSET))(this);
	}

	static ::System::Void Method_3_03CC7653040D2294(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_03CC7653040D2294_OFFSET))(a1);
	}

	static ::System::Void Method_3_E67FA6A042436B76()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_E67FA6A042436B76_OFFSET))();
	}

	::System::Void Method_3_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7B32E6463125895B_OFFSET))(this);
	}

	static ::System::Void Method_3_8EB146EA43B94157(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_8EB146EA43B94157_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6F5B17D3B62A6AC4(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6F5B17D3B62A6AC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_581E41BC4B81D19F(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_581E41BC4B81D19F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_C457E56BF9F49D46(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_C457E56BF9F49D46_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9_1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_02330A6D0B714DA9_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_86026B47A3027B67_OFFSET))();
	}

	static ::System::Int32 Method_3_DA810CB4E50A16C3(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_DA810CB4E50A16C3_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_F94FE4BEF0AC8EB2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_F94FE4BEF0AC8EB2_OFFSET))(a1);
	}

	static ::System::Void Method_3_6E10DBA521A04356()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6E10DBA521A04356_OFFSET))();
	}

	static ::System::Void Method_3_C832863DF1687108(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_C832863DF1687108_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D079636AB6B80A3(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_1D079636AB6B80A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0AE5C56C07E6E1A(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_C0AE5C56C07E6E1A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_46400F958915BADC(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_46400F958915BADC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B1C521B1F374AFDB(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_B1C521B1F374AFDB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A11B3EB9A39E6B5A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_A11B3EB9A39E6B5A_OFFSET))(a1);
	}

	static ::System::Void Method_3_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5D3D37F2BAE9FB65_OFFSET))();
	}

	static ::System::Boolean Method_3_3D18F8A9381DBAE2(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_3D18F8A9381DBAE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0088B2B8CC3AB38(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_A0088B2B8CC3AB38_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags> Method_3_D69FE076BDF3B283(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D69FE076BDF3B283_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_14DE8FA094E9918F(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_14DE8FA094E9918F_OFFSET))(a1);
	}

	static ::System::Void Method_3_A68137F19A05D1E7(::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_099113BEAFEE7B9D_Struct_2_19C29BBD9B967D96>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_A68137F19A05D1E7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_3_4489C3B3F646E413(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_4489C3B3F646E413_OFFSET))(a1);
	}

	static ::System::Void Method_3_E860BCF30C7DC270(::Class_2_659FD8D80237B753_9* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_659FD8D80237B753_9*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_E860BCF30C7DC270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4993509E11AB834C(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_4993509E11AB834C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7F29568EA964E563()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7F29568EA964E563_OFFSET))();
	}

	static ::System::Void Method_3_23C5A27F079EA695(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_23C5A27F079EA695_OFFSET))(a1);
	}

	::System::Void Method_3_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_11A5396029C33A57_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_3_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_3C029C534AE1FB6B_OFFSET))(this);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6EA53E21BF643EC7(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6EA53E21BF643EC7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::MoleMole::MonoRenderHandler* Method_3_9A63C6AE791A91AF(::Il2CppArray<::UnityEngine::Material*>*& a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::Il2CppArray<::UnityEngine::Material*>*&, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_9A63C6AE791A91AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D0BEAC033AD1B84(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_1D0BEAC033AD1B84_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_D583DEDB2A029A22(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D583DEDB2A029A22_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8AC175EE11DDE09E(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_8AC175EE11DDE09E_OFFSET))(a1);
	}

	static ::System::Void Method_3_7A6E75CE0CFA0015(::Class_1_413B2BDBE645DB66* a1)
	{
		return ((::System::Void(*)(::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7A6E75CE0CFA0015_OFFSET))(a1);
	}

	static ::System::Void Method_3_8E8BEC7C0106E690(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_8E8BEC7C0106E690_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_F5E83CDB06B1B175(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_F5E83CDB06B1B175_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B077487B71D80CA7(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_B077487B71D80CA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_141A0BCFCF8ADDFB(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_141A0BCFCF8ADDFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F8DFB7D745706C51(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_F8DFB7D745706C51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4BDCD8817E21E5A1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_4BDCD8817E21E5A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5839C28D65BD9C1F(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5839C28D65BD9C1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6BAA2ADF5CA232E1(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6BAA2ADF5CA232E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5209C005F46F37AB(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5209C005F46F37AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_88AA35F0EA7BDC9D(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_88AA35F0EA7BDC9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73EB171B85A9A3BE(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_73EB171B85A9A3BE_OFFSET))(a1);
	}

	static ::System::Void Method_3_8EB146EA43B94157_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_8EB146EA43B94157_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_E30239949C1C730B(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_E30239949C1C730B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C0A991B87BCB7E5(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_8C0A991B87BCB7E5_OFFSET))(a1);
	}

	static ::System::Void Method_3_C4B3AA0C3AB32DAA(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_C4B3AA0C3AB32DAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_36BABEFFF1166F4C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_36BABEFFF1166F4C_OFFSET))(a1, a2);
	}

	static ::Class_3_099113BEAFEE7B9D* Method_3_D40AEACBF23D3511()
	{
		return ((::Class_3_099113BEAFEE7B9D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D40AEACBF23D3511_OFFSET))();
	}

	static ::System::Void Method_3_5D5ACA310A9B3D4E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5D5ACA310A9B3D4E_OFFSET))(a1);
	}

	static ::System::Void Method_3_C457E56BF9F49D46_1(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_C457E56BF9F49D46_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D5B572F8E62A1A24(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_D5B572F8E62A1A24_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BD933092E8837272(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_BD933092E8837272_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5A62C2F9A3F52CE1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5A62C2F9A3F52CE1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6F504CDF5C268E1E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_6F504CDF5C268E1E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DAEB67F34AF80609()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_DAEB67F34AF80609_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	static ::System::Void Method_3_07C911C46C9639E8(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::Class_1_413B2BDBE645DB66*>*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_07C911C46C9639E8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7CFF2709956D699C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7CFF2709956D699C_OFFSET))(a1);
	}

	static ::System::Void Method_3_5A62C2F9A3F52CE1_1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_5A62C2F9A3F52CE1_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FA464556A431EF21(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_FA464556A431EF21_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_9EF12507EBD5B742(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_9EF12507EBD5B742_OFFSET))(a1);
	}

	static ::System::Void Method_3_63500C779D0E514F(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_63500C779D0E514F_OFFSET))(a1);
	}

	static ::System::Void Method_3_7EFD9B0DF7F1179D(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_7EFD9B0DF7F1179D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_EBE680E9A2BB62FE(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_EBE680E9A2BB62FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4679E7840A7526E1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_4679E7840A7526E1_OFFSET))();
	}

	static ::System::Void Method_3_AFA42DB8DA0B8A0F(::MoleMole::Config::CharacterSize a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::CharacterSize, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_AFA42DB8DA0B8A0F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_3BCF0226A6CDC13B_OFFSET))();
	}

	static ::System::Void Method_3_9A2E4360D82CD91D(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_9A2E4360D82CD91D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_099113BEAFEE7B9D* a1)
	{
		return ((::System::Void(*)(::Class_3_099113BEAFEE7B9D*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_445D81FBF452EBB3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::Class_3_F2DAD7F45F518868* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_445D81FBF452EBB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_581E41BC4B81D19F_1(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_581E41BC4B81D19F_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_593F7847A94BDD52(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_099113BEAFEE7B9D_METHOD_3_593F7847A94BDD52_OFFSET))(a1);
	}
};
