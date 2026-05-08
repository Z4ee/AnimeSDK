#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/NapRenderEntityFlags.h"
#include "unitysdk/Struct_2_25797252421662EF.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/Struct_2_C2BA6C3A72B961AE.h"
#include "unitysdk/Struct_2_D88FF587540AB8AF.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9610394F487FC231;
class Class_1_B7E341C5F1A6F199;
class Class_2_659FD8D80237B753_4;
class Class_2_A7BCFF3A4359DD5D;
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
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_3_41A27529628F742C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xECCC720)
#define CLASS_3_41A27529628F742C_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xECCD1B0)
#define CLASS_3_41A27529628F742C_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xECCD4A0)
#define CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_1_OFFSET UNITYSDK_OFFSET(0xECD6D30)
#define CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_OFFSET UNITYSDK_OFFSET(0xECD6950)
#define CLASS_3_41A27529628F742C_METHOD_3_03CC7653040D2294_OFFSET UNITYSDK_OFFSET(0xECD0370)
#define CLASS_3_41A27529628F742C_METHOD_3_0670E1DC645EAA78_OFFSET UNITYSDK_OFFSET(0xECD6F80)
#define CLASS_3_41A27529628F742C_METHOD_3_06C39E6456363849_OFFSET UNITYSDK_OFFSET(0xECD8FD0)
#define CLASS_3_41A27529628F742C_METHOD_3_07C911C46C9639E8_OFFSET UNITYSDK_OFFSET(0xECD9050)
#define CLASS_3_41A27529628F742C_METHOD_3_141A0BCFCF8ADDFB_OFFSET UNITYSDK_OFFSET(0xECD5720)
#define CLASS_3_41A27529628F742C_METHOD_3_146BFAC3AFDB933C_OFFSET UNITYSDK_OFFSET(0xECD2B30)
#define CLASS_3_41A27529628F742C_METHOD_3_14DE8FA094E9918F_OFFSET UNITYSDK_OFFSET(0xECD88F0)
#define CLASS_3_41A27529628F742C_METHOD_3_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xECD9E00)
#define CLASS_3_41A27529628F742C_METHOD_3_1D079636AB6B80A3_OFFSET UNITYSDK_OFFSET(0xECDAEE0)
#define CLASS_3_41A27529628F742C_METHOD_3_2066B693D3D0F431_OFFSET UNITYSDK_OFFSET(0xECD16C0)
#define CLASS_3_41A27529628F742C_METHOD_3_23C5A27F079EA695_OFFSET UNITYSDK_OFFSET(0xECD2B90)
#define CLASS_3_41A27529628F742C_METHOD_3_31B7D57439C0FED7_OFFSET UNITYSDK_OFFSET(0xECD6BB0)
#define CLASS_3_41A27529628F742C_METHOD_3_36BABEFFF1166F4C_OFFSET UNITYSDK_OFFSET(0xECD6210)
#define CLASS_3_41A27529628F742C_METHOD_3_3D18F8A9381DBAE2_OFFSET UNITYSDK_OFFSET(0xECD5B30)
#define CLASS_3_41A27529628F742C_METHOD_3_445D81FBF452EBB3_OFFSET UNITYSDK_OFFSET(0xECDA3A0)
#define CLASS_3_41A27529628F742C_METHOD_3_46400F958915BADC_OFFSET UNITYSDK_OFFSET(0xECD5410)
#define CLASS_3_41A27529628F742C_METHOD_3_476C5ED2CE01BB87_OFFSET UNITYSDK_OFFSET(0xECCF760)
#define CLASS_3_41A27529628F742C_METHOD_3_4993509E11AB834C_OFFSET UNITYSDK_OFFSET(0xECD7EE0)
#define CLASS_3_41A27529628F742C_METHOD_3_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0xECD86C0)
#define CLASS_3_41A27529628F742C_METHOD_3_5209C005F46F37AB_OFFSET UNITYSDK_OFFSET(0xECD90F0)
#define CLASS_3_41A27529628F742C_METHOD_3_581E41BC4B81D19F_OFFSET UNITYSDK_OFFSET(0xECD2530)
#define CLASS_3_41A27529628F742C_METHOD_3_5839C28D65BD9C1F_OFFSET UNITYSDK_OFFSET(0xECCE800)
#define CLASS_3_41A27529628F742C_METHOD_3_5A62C2F9A3F52CE1_1_OFFSET UNITYSDK_OFFSET(0xECD9EA0)
#define CLASS_3_41A27529628F742C_METHOD_3_5A62C2F9A3F52CE1_OFFSET UNITYSDK_OFFSET(0xECD4EF0)
#define CLASS_3_41A27529628F742C_METHOD_3_5D5ACA310A9B3D4E_OFFSET UNITYSDK_OFFSET(0xECD83E0)
#define CLASS_3_41A27529628F742C_METHOD_3_5D7A3209DB8F0A3C_OFFSET UNITYSDK_OFFSET(0xECD66E0)
#define CLASS_3_41A27529628F742C_METHOD_3_62A90A520E142884_OFFSET UNITYSDK_OFFSET(0xECD0710)
#define CLASS_3_41A27529628F742C_METHOD_3_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0xECD7160)
#define CLASS_3_41A27529628F742C_METHOD_3_681BE4EA1EC95071_OFFSET UNITYSDK_OFFSET(0xECD1EA0)
#define CLASS_3_41A27529628F742C_METHOD_3_6BAA2ADF5CA232E1_OFFSET UNITYSDK_OFFSET(0xECD9CD0)
#define CLASS_3_41A27529628F742C_METHOD_3_6CCC5FF90ECCCBD6_OFFSET UNITYSDK_OFFSET(0xECD3680)
#define CLASS_3_41A27529628F742C_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xECCF830)
#define CLASS_3_41A27529628F742C_METHOD_3_6EA53E21BF643EC7_OFFSET UNITYSDK_OFFSET(0xECD2080)
#define CLASS_3_41A27529628F742C_METHOD_3_6F5B17D3B62A6AC4_OFFSET UNITYSDK_OFFSET(0xECCE630)
#define CLASS_3_41A27529628F742C_METHOD_3_7798EDDC4449888C_OFFSET UNITYSDK_OFFSET(0xECD51A0)
#define CLASS_3_41A27529628F742C_METHOD_3_7EFD9B0DF7F1179D_OFFSET UNITYSDK_OFFSET(0xECD5A70)
#define CLASS_3_41A27529628F742C_METHOD_3_80D45502CDCBE059_OFFSET UNITYSDK_OFFSET(0xECD0D40)
#define CLASS_3_41A27529628F742C_METHOD_3_8231AFE9C45B461F_OFFSET UNITYSDK_OFFSET(0xECDA150)
#define CLASS_3_41A27529628F742C_METHOD_3_88AA35F0EA7BDC9D_OFFSET UNITYSDK_OFFSET(0xECD0600)
#define CLASS_3_41A27529628F742C_METHOD_3_89DA04E9FA142523_OFFSET UNITYSDK_OFFSET(0xECDA940)
#define CLASS_3_41A27529628F742C_METHOD_3_8AC175EE11DDE09E_OFFSET UNITYSDK_OFFSET(0xECD8340)
#define CLASS_3_41A27529628F742C_METHOD_3_8C0A991B87BCB7E5_OFFSET UNITYSDK_OFFSET(0xECCF880)
#define CLASS_3_41A27529628F742C_METHOD_3_8E8BEC7C0106E690_OFFSET UNITYSDK_OFFSET(0xECD4AD0)
#define CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0xECD32E0)
#define CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0xECD0330)
#define CLASS_3_41A27529628F742C_METHOD_3_99866264207E9AED_OFFSET UNITYSDK_OFFSET(0xECDB140)
#define CLASS_3_41A27529628F742C_METHOD_3_9A2E4360D82CD91D_OFFSET UNITYSDK_OFFSET(0xECDA8A0)
#define CLASS_3_41A27529628F742C_METHOD_3_9A63C6AE791A91AF_OFFSET UNITYSDK_OFFSET(0xECCFA00)
#define CLASS_3_41A27529628F742C_METHOD_3_A0088B2B8CC3AB38_OFFSET UNITYSDK_OFFSET(0xECD9570)
#define CLASS_3_41A27529628F742C_METHOD_3_A8518C4D4078676C_OFFSET UNITYSDK_OFFSET(0xECDAA30)
#define CLASS_3_41A27529628F742C_METHOD_3_A8BCB11044E64D80_OFFSET UNITYSDK_OFFSET(0xECD0070)
#define CLASS_3_41A27529628F742C_METHOD_3_AC6135D8F63296DB_OFFSET UNITYSDK_OFFSET(0xECD8BA0)
#define CLASS_3_41A27529628F742C_METHOD_3_AD51FCBC198BA114_OFFSET UNITYSDK_OFFSET(0xECD1180)
#define CLASS_3_41A27529628F742C_METHOD_3_AFA42DB8DA0B8A0F_OFFSET UNITYSDK_OFFSET(0xECD1B70)
#define CLASS_3_41A27529628F742C_METHOD_3_B077487B71D80CA7_OFFSET UNITYSDK_OFFSET(0xECD1480)
#define CLASS_3_41A27529628F742C_METHOD_3_B1C521B1F374AFDB_OFFSET UNITYSDK_OFFSET(0xECD0E10)
#define CLASS_3_41A27529628F742C_METHOD_3_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0xECD4770)
#define CLASS_3_41A27529628F742C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xECD8B10)
#define CLASS_3_41A27529628F742C_METHOD_3_BD933092E8837272_OFFSET UNITYSDK_OFFSET(0xECD5ED0)
#define CLASS_3_41A27529628F742C_METHOD_3_C0AE5C56C07E6E1A_OFFSET UNITYSDK_OFFSET(0xECCED10)
#define CLASS_3_41A27529628F742C_METHOD_3_C457E56BF9F49D46_1_OFFSET UNITYSDK_OFFSET(0xECD4DC0)
#define CLASS_3_41A27529628F742C_METHOD_3_C457E56BF9F49D46_OFFSET UNITYSDK_OFFSET(0xECCFF40)
#define CLASS_3_41A27529628F742C_METHOD_3_C4B3AA0C3AB32DAA_OFFSET UNITYSDK_OFFSET(0xECD9840)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xECD6180)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xECDA310)
#define CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xECD46E0)
#define CLASS_3_41A27529628F742C_METHOD_3_CE742D772F61C581_OFFSET UNITYSDK_OFFSET(0xECD73E0)
#define CLASS_3_41A27529628F742C_METHOD_3_D2570AA6795434FE_OFFSET UNITYSDK_OFFSET(0xECD1AC0)
#define CLASS_3_41A27529628F742C_METHOD_3_D583DEDB2A029A22_OFFSET UNITYSDK_OFFSET(0xECD9610)
#define CLASS_3_41A27529628F742C_METHOD_3_D5B572F8E62A1A24_OFFSET UNITYSDK_OFFSET(0xECD4630)
#define CLASS_3_41A27529628F742C_METHOD_3_D69FE076BDF3B283_OFFSET UNITYSDK_OFFSET(0xECD04D0)
#define CLASS_3_41A27529628F742C_METHOD_3_DA2A089BF5579DDE_OFFSET UNITYSDK_OFFSET(0xECD3320)
#define CLASS_3_41A27529628F742C_METHOD_3_DA810CB4E50A16C3_OFFSET UNITYSDK_OFFSET(0xECD3F40)
#define CLASS_3_41A27529628F742C_METHOD_3_DFA0A5E96EA7A533_OFFSET UNITYSDK_OFFSET(0xECD54D0)
#define CLASS_3_41A27529628F742C_METHOD_3_E0328B2B33960A55_OFFSET UNITYSDK_OFFSET(0xECCE480)
#define CLASS_3_41A27529628F742C_METHOD_3_E30239949C1C730B_OFFSET UNITYSDK_OFFSET(0xECD9BA0)
#define CLASS_3_41A27529628F742C_METHOD_3_E860BCF30C7DC270_OFFSET UNITYSDK_OFFSET(0xECD96F0)
#define CLASS_3_41A27529628F742C_METHOD_3_EBE680E9A2BB62FE_OFFSET UNITYSDK_OFFSET(0xECD0780)
#define CLASS_3_41A27529628F742C_METHOD_3_ECB85B16B5A30336_OFFSET UNITYSDK_OFFSET(0xECD0440)
#define CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0xECDAA70)
#define CLASS_3_41A27529628F742C_METHOD_3_F5E83CDB06B1B175_OFFSET UNITYSDK_OFFSET(0xECDAE20)
#define CLASS_3_41A27529628F742C_METHOD_3_F8DFB7D745706C51_OFFSET UNITYSDK_OFFSET(0xECCEAB0)
#define CLASS_3_41A27529628F742C_METHOD_3_F94FE4BEF0AC8EB2_OFFSET UNITYSDK_OFFSET(0xECD2D40)
#define CLASS_3_41A27529628F742C_METHOD_3_FA464556A431EF21_OFFSET UNITYSDK_OFFSET(0xECD6390)
#define CLASS_3_41A27529628F742C_METHOD_3_FD82E2949A18DDB4_OFFSET UNITYSDK_OFFSET(0xECD4290)
#define CLASS_3_41A27529628F742C_UPDATE_OFFSET UNITYSDK_OFFSET(0xECCCAD0)
#define CLASS_3_41A27529628F742C__CCTOR_OFFSET UNITYSDK_OFFSET(0xECCDC50)
#define CLASS_3_41A27529628F742C__CTOR_OFFSET UNITYSDK_OFFSET(0xECCDC00)

inline static constexpr unsigned int Class_3_41A27529628F742C_TypeDefinitionIndex = 68645;

class Class_3_41A27529628F742C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB00);
	}
	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>** StaticGet_Field_3_8()
	{
		return (::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB08);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_9610394F487FC231*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_9610394F487FC231*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB10);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_3_10()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_1>** StaticGet_Field_3_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_395B739A1AC58399_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB20);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_1_9610394F487FC231*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>** StaticGet_Field_3_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_9610394F487FC231*, ::System::Collections::Generic::List_1<::Struct_2_D88FF587540AB8AF>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB28);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>** StaticGet_Field_3_5()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_C2BA6C3A72B961AE>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0x3DB30);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_0()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xF090);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_9()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xF0A0);
	}
	static ::Unity::Jobs::JobHandle* StaticGet_Field_3_4()
	{
		return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_3_41A27529628F742C_TypeDefinitionIndex)->GetStaticField(0xF0B0);
	}
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_UPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_LATEUPDATE_OFFSET))(this);
	}

	::System::Boolean Method_3_E0328B2B33960A55(::UnityEngine::Renderer* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E0328B2B33960A55_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_F8DFB7D745706C51(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F8DFB7D745706C51_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0AE5C56C07E6E1A(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_C0AE5C56C07E6E1A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_476C5ED2CE01BB87(::Class_3_FFD0045B4597F294* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_476C5ED2CE01BB87_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8C0A991B87BCB7E5(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_8C0A991B87BCB7E5_OFFSET))(a1);
	}

	static ::MoleMole::MonoRenderHandler* Method_3_9A63C6AE791A91AF(::Il2CppArray<::UnityEngine::Material*>*& a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::MoleMole::MonoRenderHandler*(*)(::Il2CppArray<::UnityEngine::Material*>*&, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9A63C6AE791A91AF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C457E56BF9F49D46(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_C457E56BF9F49D46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_03CC7653040D2294(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_03CC7653040D2294_OFFSET))(a1);
	}

	static ::System::Void Method_3_ECB85B16B5A30336(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_ECB85B16B5A30336_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags> Method_3_D69FE076BDF3B283(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::NapRenderEntityFlags>(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D69FE076BDF3B283_OFFSET))(a1);
	}

	static ::System::Void Method_3_88AA35F0EA7BDC9D(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_88AA35F0EA7BDC9D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_62A90A520E142884(::Class_3_FFD0045B4597F294* a1, ::System::Func_2<::System::String*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Func_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_62A90A520E142884_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EBE680E9A2BB62FE(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_EBE680E9A2BB62FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_80D45502CDCBE059(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_80D45502CDCBE059_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B1C521B1F374AFDB(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B1C521B1F374AFDB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AD51FCBC198BA114(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_FFD0045B4597F294* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_AD51FCBC198BA114_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_B077487B71D80CA7(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B077487B71D80CA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2066B693D3D0F431(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_2066B693D3D0F431_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_D2570AA6795434FE(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D2570AA6795434FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AFA42DB8DA0B8A0F(::MoleMole::Config::CharacterSize a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::CharacterSize, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_AFA42DB8DA0B8A0F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_681BE4EA1EC95071(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_681BE4EA1EC95071_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_146BFAC3AFDB933C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_146BFAC3AFDB933C_OFFSET))(a1);
	}

	static ::System::Void Method_3_23C5A27F079EA695(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_23C5A27F079EA695_OFFSET))(a1);
	}

	static ::System::Void Method_3_F94FE4BEF0AC8EB2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F94FE4BEF0AC8EB2_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_DA810CB4E50A16C3(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_DA810CB4E50A16C3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D5B572F8E62A1A24(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D5B572F8E62A1A24_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B3BCFE72DF2C5725(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8E8BEC7C0106E690(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_8E8BEC7C0106E690_OFFSET))(a1);
	}

	static ::System::Void Method_3_C457E56BF9F49D46_1(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_C457E56BF9F49D46_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5A62C2F9A3F52CE1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5A62C2F9A3F52CE1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7798EDDC4449888C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_7798EDDC4449888C_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_46400F958915BADC(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_46400F958915BADC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_DFA0A5E96EA7A533(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_DFA0A5E96EA7A533_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_141A0BCFCF8ADDFB(::Class_3_DFD5D1FDB9D2A4AC* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_141A0BCFCF8ADDFB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7EFD9B0DF7F1179D(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_7EFD9B0DF7F1179D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_3D18F8A9381DBAE2(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_3D18F8A9381DBAE2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BD933092E8837272(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_BD933092E8837272_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_36BABEFFF1166F4C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_36BABEFFF1166F4C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FA464556A431EF21(::Class_3_F2DAD7F45F518868* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_FA464556A431EF21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5D7A3209DB8F0A3C(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5D7A3209DB8F0A3C_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_31B7D57439C0FED7(::Class_3_FFD0045B4597F294* a1, ::Struct_2_25797252421662EF a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::Struct_2_25797252421662EF))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_31B7D57439C0FED7_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_02330A6D0B714DA9_1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_02330A6D0B714DA9_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_0670E1DC645EAA78(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_0670E1DC645EAA78_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CE742D772F61C581(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CE742D772F61C581_OFFSET))(a1);
	}

	static ::System::Void Method_3_4BDCD8817E21E5A1(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4BDCD8817E21E5A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_14DE8FA094E9918F(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_14DE8FA094E9918F_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_A8BCB11044E64D80(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_A8BCB11044E64D80_OFFSET))(a1);
	}

	static ::System::Void Method_3_AC6135D8F63296DB(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_AC6135D8F63296DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_06C39E6456363849(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_06C39E6456363849_OFFSET))(a1);
	}

	static ::System::Void Method_3_07C911C46C9639E8(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>* a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::List_1<::Class_1_9610394F487FC231*>*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_07C911C46C9639E8_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5209C005F46F37AB(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5209C005F46F37AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6CCC5FF90ECCCBD6(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6CCC5FF90ECCCBD6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D583DEDB2A029A22(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_D583DEDB2A029A22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_63500C779D0E514F(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_63500C779D0E514F_OFFSET))(a1);
	}

	static ::System::Void Method_3_4993509E11AB834C(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_4993509E11AB834C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_6F5B17D3B62A6AC4(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6F5B17D3B62A6AC4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4B3AA0C3AB32DAA(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_C4B3AA0C3AB32DAA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E30239949C1C730B(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E30239949C1C730B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6BAA2ADF5CA232E1(::Class_3_FFD0045B4597F294* a1, ::MoleMole::Config::MaterialPropertyType a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6BAA2ADF5CA232E1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_163DC9A61F1D3AF0_OFFSET))();
	}

	static ::System::Void Method_3_581E41BC4B81D19F(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_581E41BC4B81D19F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_8AC175EE11DDE09E(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_8AC175EE11DDE09E_OFFSET))(a1);
	}

	static ::System::Void Method_3_5A62C2F9A3F52CE1_1(::Class_3_FFD0045B4597F294* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5A62C2F9A3F52CE1_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DA2A089BF5579DDE(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_DA2A089BF5579DDE_OFFSET))(a1);
	}

	static ::System::Void Method_3_8231AFE9C45B461F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_8231AFE9C45B461F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_445D81FBF452EBB3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::Class_3_F2DAD7F45F518868* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_445D81FBF452EBB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9A2E4360D82CD91D(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_9A2E4360D82CD91D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_89DA04E9FA142523(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_89DA04E9FA142523_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A8518C4D4078676C(::Class_3_FFD0045B4597F294* a1)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_A8518C4D4078676C_OFFSET))(a1);
	}

	static ::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F5B50F2A74C670C4_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_6EA53E21BF643EC7(::Class_3_FFD0045B4597F294* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_6EA53E21BF643EC7_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_3_5839C28D65BD9C1F(::Class_3_FFD0045B4597F294* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_3_FFD0045B4597F294*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5839C28D65BD9C1F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E860BCF30C7DC270(::Class_2_659FD8D80237B753_4* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_659FD8D80237B753_4*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_E860BCF30C7DC270_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FD82E2949A18DDB4(::Class_3_FFD0045B4597F294* a1, ::Class_2_A7BCFF3A4359DD5D* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::Class_2_A7BCFF3A4359DD5D*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_FD82E2949A18DDB4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_F5E83CDB06B1B175(::Class_3_FFD0045B4597F294* a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_F5E83CDB06B1B175_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0088B2B8CC3AB38(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_A0088B2B8CC3AB38_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1D079636AB6B80A3(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_1D079636AB6B80A3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99866264207E9AED(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_99866264207E9AED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5D5ACA310A9B3D4E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_41A27529628F742C_METHOD_3_5D5ACA310A9B3D4E_OFFSET))(a1);
	}
};
