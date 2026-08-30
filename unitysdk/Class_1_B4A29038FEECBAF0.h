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

#define CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0x178A8070)
#define CLASS_1_B4A29038FEECBAF0_GET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x178A8AB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_039C3470E560B603_OFFSET UNITYSDK_OFFSET(0x178AA120)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_09D785A1CEE43CAE_OFFSET UNITYSDK_OFFSET(0x178AED90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_0A7DEF48D99F9E5C_OFFSET UNITYSDK_OFFSET(0x178AED00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_1_OFFSET UNITYSDK_OFFSET(0x178AE320)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1183719A2F72092B_OFFSET UNITYSDK_OFFSET(0x178AB940)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1278CA6F92325A9E_OFFSET UNITYSDK_OFFSET(0x178A8AD0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x178AB880)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1655B698CBDB2306_OFFSET UNITYSDK_OFFSET(0x178A9420)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x178A7BF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x178A8650)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x178A89C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x178A8300)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x178AA620)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x178A7690)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x178A7C50)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x178A8D00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4415438F01BFF800_OFFSET UNITYSDK_OFFSET(0x178B0300)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x178A7D10)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x178A8470)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x178A87D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x178A8120)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_1_OFFSET UNITYSDK_OFFSET(0x178B3030)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_4FBA20393E8FEB15_OFFSET UNITYSDK_OFFSET(0x178B2FE0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_50FEEAEEA11D9013_OFFSET UNITYSDK_OFFSET(0x178B02B0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_52163657AD24F738_OFFSET UNITYSDK_OFFSET(0x178A7CB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_526B58D1E3712AEF_OFFSET UNITYSDK_OFFSET(0x178B0AB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_569116DEF09001C2_OFFSET UNITYSDK_OFFSET(0x178AA450)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_5D09FA5A7543C4B5_OFFSET UNITYSDK_OFFSET(0x178B1470)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_5D8597AABA65F4CC_OFFSET UNITYSDK_OFFSET(0x178B1890)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_60A71203F9A368CF_OFFSET UNITYSDK_OFFSET(0x178B1180)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6365A2D69460636F_OFFSET UNITYSDK_OFFSET(0x178AEEC0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6564F93385278581_OFFSET UNITYSDK_OFFSET(0x178AF060)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_690254C4B3C33267_OFFSET UNITYSDK_OFFSET(0x178AA200)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_1_OFFSET UNITYSDK_OFFSET(0x178A8510)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_2_OFFSET UNITYSDK_OFFSET(0x178A8880)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_6BC2B6A3A1B088CA_OFFSET UNITYSDK_OFFSET(0x178A81C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x178B3160)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_78FF00B329775E15_OFFSET UNITYSDK_OFFSET(0x178B07C0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_91B1D0230882FAE3_OFFSET UNITYSDK_OFFSET(0x178B3A90)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_98D7093BF0BFE607_OFFSET UNITYSDK_OFFSET(0x178AAEF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_995A1AC63FE02698_OFFSET UNITYSDK_OFFSET(0x178A9300)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_99FB98A476F57A75_OFFSET UNITYSDK_OFFSET(0x178AA760)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x178B3080)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_AFD252B1F7254920_OFFSET UNITYSDK_OFFSET(0x178B2B10)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B280CE45C98AD449_OFFSET UNITYSDK_OFFSET(0x178A8D70)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x178A7F40)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B81DDD331C035BB9_OFFSET UNITYSDK_OFFSET(0x178B1CB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_B936777D193F4FE5_OFFSET UNITYSDK_OFFSET(0x178A7CA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_1_OFFSET UNITYSDK_OFFSET(0x178A8740)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_2_OFFSET UNITYSDK_OFFSET(0x178A87F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x178A8090)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178A8CB0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_1_OFFSET UNITYSDK_OFFSET(0x178ACAC0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_2_OFFSET UNITYSDK_OFFSET(0x178AD2E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_3_OFFSET UNITYSDK_OFFSET(0x178ADB00)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_CD0ABA7246E94CDC_OFFSET UNITYSDK_OFFSET(0x178AC2A0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_D41A3A0A73690310_OFFSET UNITYSDK_OFFSET(0x178B0BF0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E269295B2D24712F_OFFSET UNITYSDK_OFFSET(0x178B0260)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x178A8730)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x178A8AA0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x178A83E0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_E846D8AD7D406794_OFFSET UNITYSDK_OFFSET(0x178AF210)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_F199800985F61112_OFFSET UNITYSDK_OFFSET(0x178B0CC0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_F2454CE0B2CBB4CA_OFFSET UNITYSDK_OFFSET(0x178AA520)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_1_OFFSET UNITYSDK_OFFSET(0x178A83F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_2_OFFSET UNITYSDK_OFFSET(0x178A8490)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET UNITYSDK_OFFSET(0x178A8140)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x178A9910)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FD83315127618831_OFFSET UNITYSDK_OFFSET(0x178B2770)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x178A8380)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x178A85F0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_3_OFFSET UNITYSDK_OFFSET(0x178A86D0)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_4_OFFSET UNITYSDK_OFFSET(0x178A8960)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_5_OFFSET UNITYSDK_OFFSET(0x178A8A40)
#define CLASS_1_B4A29038FEECBAF0_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x178A82A0)
#define CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0x178A8080)
#define CLASS_1_B4A29038FEECBAF0_SET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x178A8AC0)
#define CLASS_1_B4A29038FEECBAF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B9960)
#define CLASS_1_B4A29038FEECBAF0__CTOR_OFFSET UNITYSDK_OFFSET(0x178A7780)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET UNITYSDK_OFFSET(0x178B9B00)
#define CLASS_1_B4A29038FEECBAF0__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET UNITYSDK_OFFSET(0x178B9C30)

inline static constexpr unsigned int Class_1_B4A29038FEECBAF0_TypeDefinitionIndex = 70184;

class Class_1_B4A29038FEECBAF0 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_IGFHCHFLMFB()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59DF0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_FADEFDJMBLO()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59DF8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_HDMHNGAPHLP()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E00);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_IIPFLMHGFMF()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E08);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_AFAHFFLMJIG()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E10);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CAEGGMGHCCD()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E18);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_OCPKGMLOCIF()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E20);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_OCNLGOLJLDD()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E28);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_DBGFHFGAGGD()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E30);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GGHAIBHMLFF()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E38);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_DIFAMJALMLP()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E40);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GOMEBNCBCHK()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E48);
	}
	static ::Class_1_B4A29038FEECBAF0** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_B4A29038FEECBAF0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E50);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GMBALOHHHKL()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4A29038FEECBAF0_TypeDefinitionIndex)->GetStaticField(0x59E58);
	}
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* JJEAPIDNKMI; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState>>* HMAHGBIPPFP; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* ABBGHDGBBJC; // 0x20
	::Il2CppArray<::UnityEngine::Plane>* EMOAIEBLNAC; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* BJGOFKIKKFO; // 0x30
	::Class_1_8345B8E9167A0BA3* IPNBNINLMMO; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* NOMKCGIDCII; // 0x40
	::Il2CppArray<::UnityEngine::Plane>* GBCDMIMDFGL; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior*>* PHGEHEAPIIG; // 0x50
	::Il2CppArray<::UnityEngine::Plane>* APKNBFGLEMN; // 0x58
	::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>* PECIDMCNMFB; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_5F96B92B05C740DB*>*>* INPFKLBJLDO; // 0x68
	::Class_1_B4A29038FEECBAF0_Class_3_EC9ABC3448F7394B* KJIBBAPBLGL; // 0x70
	::Il2CppArray<::UnityEngine::Plane>* OICHPCDBBED; // 0x78
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* ELMOGLNJAEM; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ENLFFEHBBKP; // 0x88
	::Class_1_8345B8E9167A0BA3* DFBDOBLCOLK; // 0x90
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*>* GBHFBCOAGMG; // 0x98
	::Il2CppArray<::UnityEngine::Plane>* PJEEFHBPODN; // 0xA0
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>* ACOMDJCHHHB; // 0xA8
	::Il2CppArray<::UnityEngine::Plane>* CJGMCEMKDHM; // 0xB0
	::System::Single KLICCHKDFDO; // 0xB8
	::UnityEngine::Vector3 GCECKEIJMIB; // 0xBC
	::UnityEngine::Vector3 HGKPODIFKHK; // 0xC8
	::UnityEngine::Vector3 KEIBOLNBIKF; // 0xD4
	::System::Single ECPFFCLLDDM; // 0xE0
	::System::Single FDFMOOGFJML; // 0xE4
	::System::Single CIMGLDKHFGA; // 0xE8
	::System::Int32 JCJPKMPDJPB; // 0xEC
	::System::Single CACJJCPBFGK; // 0xF0
	::System::Boolean ALEPDCLFIMM; // 0xF4
	::System::Boolean GDNCKELOLMM; // 0xF5
	::System::Boolean IGMAILJPJDO; // 0xF6
	::System::Boolean MAJKPNJEDFG; // 0xF7
	::System::Int32 OFGACCPLHJF; // 0xF8
	::UnityEngine::Vector3 EINHBNEHECB; // 0xFC
	::System::Single AMFMDINBGLC; // 0x108
	::System::Boolean IBEMPNANEHP; // 0x10C
	::System::Boolean OJBFFIECFML; // 0x10D
	::System::Boolean JMLFCNLGLGC; // 0x10E
	::System::Boolean _ForceSyncNextActive_k__BackingField; // 0x10F
	::System::Int32 ONLGEPCKMPI; // 0x110
	::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState HBJENOFOBKP; // 0x114
	::UnityEngine::Vector3 FHLCEELANFI; // 0x118
	::System::Int32 DNGPKCMPFIO; // 0x124
	::System::Nullable_1<::System::Boolean> PGEDJOOPPJA; // 0x128
	::System::Boolean BIANLKIBCHF; // 0x12A
	::System::Boolean _FrozeDefaultState_k__BackingField; // 0x12B
	::System::Boolean JJIAMHINBFH; // 0x12C
	::UnityEngine::Vector3 BPLELFECBOM; // 0x130

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

	::System::Boolean Method_1_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B549F04EA33A764B_OFFSET))(this);
	}

	::System::Boolean get_ForceSyncNextActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_GET_FORCESYNCNEXTACTIVE_OFFSET))(this);
	}

	::System::Void set_ForceSyncNextActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_SET_FORCESYNCNEXTACTIVE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FC26FA0DD9B4AAF4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FC26FA0DD9B4AAF4_OFFSET))(this);
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

	::UnityEngine::Vector3 Method_1_BF972395CC722BF9_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_BF972395CC722BF9_2_OFFSET))(this);
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

	::System::Void Method_1_1655B698CBDB2306()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_1655B698CBDB2306_OFFSET))(this);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
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

	::System::Void Method_1_4415438F01BFF800(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_4415438F01BFF800_OFFSET))(this, a1);
	}

	::System::Void Method_1_78FF00B329775E15(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_78FF00B329775E15_OFFSET))(this, a1);
	}

	::System::Void Method_1_526B58D1E3712AEF(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_526B58D1E3712AEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41A3A0A73690310(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_D41A3A0A73690310_OFFSET))(this, a1);
	}

	::System::Void Method_1_F199800985F61112(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_F199800985F61112_OFFSET))(this, a1);
	}

	::System::Void Method_1_60A71203F9A368CF(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_60A71203F9A368CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D09FA5A7543C4B5(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_5D09FA5A7543C4B5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5D8597AABA65F4CC(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_5D8597AABA65F4CC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B81DDD331C035BB9(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_B81DDD331C035BB9_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD83315127618831(::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_FD83315127618831_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFD252B1F7254920(::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>*))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_AFD252B1F7254920_OFFSET))(this, a1);
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

	::System::Void Method_1_91B1D0230882FAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A29038FEECBAF0_METHOD_1_91B1D0230882FAE3_OFFSET))(this);
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
