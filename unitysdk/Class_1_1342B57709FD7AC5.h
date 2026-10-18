#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_3D92459BEEC82DA8;
class Class_1_F0D462198B262603;
namespace RPG::Client { class RendererMaterialCache; }
namespace RPG::GameCore { class ShaderPropertyConfig; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define CLASS_1_1342B57709FD7AC5_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4FCF40)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_0AFD1D50235199BC_OFFSET UNITYSDK_OFFSET(0xE4F9ED0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_0D46FF90CEAF73F3_OFFSET UNITYSDK_OFFSET(0xE4F7560)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_10E7212CA3B456C6_OFFSET UNITYSDK_OFFSET(0xE4FB5D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_11AC706BA50CACDE_OFFSET UNITYSDK_OFFSET(0xE4F90C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_16FE35BA8F40A382_OFFSET UNITYSDK_OFFSET(0xE4FDF30)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_17168FC6520538CE_OFFSET UNITYSDK_OFFSET(0xE4F8CD0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1AF8EFBCCDF911AE_OFFSET UNITYSDK_OFFSET(0xE4F9990)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xE4FDE30)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE4F6250)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_23C3681AC9E5D438_OFFSET UNITYSDK_OFFSET(0xE4FD5C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_26D3E11E8F31C710_OFFSET UNITYSDK_OFFSET(0xE4F87C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2721A6C3F6C53AA5_OFFSET UNITYSDK_OFFSET(0xE4F96F0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0xE4F8C70)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_2F2C465C43536C2C_OFFSET UNITYSDK_OFFSET(0xE4FDEB0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_331792DB7A7A7274_OFFSET UNITYSDK_OFFSET(0xE4F6F00)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_338A4B0C4FC058BE_OFFSET UNITYSDK_OFFSET(0xE4F7F60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_33E38367D69D2421_OFFSET UNITYSDK_OFFSET(0xE4FBEF0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE4FD8B0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A01E345E6EA0DB_OFFSET UNITYSDK_OFFSET(0xE4F8940)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0xE4FDBC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE4FDA00)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE4FD860)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE4FCEF0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_44044DFC79037A53_OFFSET UNITYSDK_OFFSET(0xE4FC520)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_47B2B31A9614D0A7_OFFSET UNITYSDK_OFFSET(0xE4F7330)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4CC98A6C8FCB337C_OFFSET UNITYSDK_OFFSET(0xE4FAE10)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_4DB04FABDA8C0D0C_OFFSET UNITYSDK_OFFSET(0xE4F8DE0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xE4FDFC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_52A453FDDF9F650F_OFFSET UNITYSDK_OFFSET(0xE4FBA00)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xE4FBEA0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xE4F92C0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xE4F80E0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_66E01EDD5B6C8BEA_OFFSET UNITYSDK_OFFSET(0xE4F3960)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_6777F35EE465A3D7_OFFSET UNITYSDK_OFFSET(0xE4F6AE0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_69DD8D30CC011166_OFFSET UNITYSDK_OFFSET(0xE4FA590)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_6AFA89C8304981EB_OFFSET UNITYSDK_OFFSET(0xE4F8260)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_78ED2E5CBDFB328D_OFFSET UNITYSDK_OFFSET(0xE4FA8D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_1_OFFSET UNITYSDK_OFFSET(0xE4FB4A0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_OFFSET UNITYSDK_OFFSET(0xE4FB370)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xE4FD480)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0xE4F7DC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_8E5EF61295E47B41_OFFSET UNITYSDK_OFFSET(0xE4FD560)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_8F8087B1298412E5_OFFSET UNITYSDK_OFFSET(0xE4F6D60)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xE4FC590)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xE4FD310)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xE4FDE90)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_A15B87BEC14B6AED_OFFSET UNITYSDK_OFFSET(0xE4F7180)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_A8BEA81740818411_OFFSET UNITYSDK_OFFSET(0xE4FB0D0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0xE4FD8F0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xE4FC3A0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B3BB2D98AE5057E3_OFFSET UNITYSDK_OFFSET(0xE4F7B40)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_B7CB9F6D4F8CE62F_OFFSET UNITYSDK_OFFSET(0xE4F9C30)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BA21645B2BA53720_OFFSET UNITYSDK_OFFSET(0xE4FBB40)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BF54EEDF1489BF9B_OFFSET UNITYSDK_OFFSET(0xE4FB800)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xE4FCB90)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C23F7A96EBA0C99F_OFFSET UNITYSDK_OFFSET(0xE4FC2F0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C67E095FA185ACCC_OFFSET UNITYSDK_OFFSET(0xE4F85B0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE4FDEA0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xE4F9030)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_C9ACDD08A0027186_OFFSET UNITYSDK_OFFSET(0xE4F8720)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_CA22867231F3BB14_OFFSET UNITYSDK_OFFSET(0xE4FAB70)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4FD520)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_CF044021AB77CADF_OFFSET UNITYSDK_OFFSET(0xE4F77E0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_CFC9163EC5CCDB7F_OFFSET UNITYSDK_OFFSET(0xE4F7970)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_D1E9468F473A8CB2_OFFSET UNITYSDK_OFFSET(0xE4F44F0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_D9B49437BED81855_OFFSET UNITYSDK_OFFSET(0xE4F6910)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E14D6DFF657BA3C8_OFFSET UNITYSDK_OFFSET(0xE4FDC80)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0xE4FD730)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_E90591B7EBC622D6_OFFSET UNITYSDK_OFFSET(0xE4F9430)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0xE4FDAC0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xE4F8C00)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xE4FCDE0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xE4FDFF0)
#define CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE4FDFB0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET UNITYSDK_OFFSET(0xE4F6470)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET UNITYSDK_OFFSET(0xE4F64C0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET UNITYSDK_OFFSET(0xE4F6510)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE4F63D0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0xE4F6460)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET UNITYSDK_OFFSET(0xE4F6600)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F6860)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F6790)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET UNITYSDK_OFFSET(0xE4F62B0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET UNITYSDK_OFFSET(0xE4F6560)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET UNITYSDK_OFFSET(0xE4F65B0)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET UNITYSDK_OFFSET(0xE4F6650)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET UNITYSDK_OFFSET(0xE4F6380)
#define CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE4F66A0)
#define CLASS_1_1342B57709FD7AC5__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4FE1E0)
#define CLASS_1_1342B57709FD7AC5__CTOR_OFFSET UNITYSDK_OFFSET(0xE4FE000)

inline static constexpr unsigned int Class_1_1342B57709FD7AC5_TypeDefinitionIndex = 69807;

class Class_1_1342B57709FD7AC5 : public ::System::Object
{
public:
	static ::RPG::GameCore::ShaderPropertyConfig** StaticGet_PMNHIHBHOAC()
	{
		return (::RPG::GameCore::ShaderPropertyConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x13510);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>** StaticGet_AEDPMEMAOLJ()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x13518);
	}
	static ::System::String** StaticGet_FKIDOIFJIMA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x13520);
	}
	static ::System::Int32* StaticGet_JKJONNMOIKE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3EF0);
	}
	static ::System::Int32* StaticGet_DIEADHNHKJA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3EF4);
	}
	static ::System::Int32* StaticGet_EKNCJMGEHOA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3EF8);
	}
	static ::System::Int32* StaticGet_ADHIPFFFGGI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3EFC);
	}
	static ::System::Int32* StaticGet_EHCMKACDPJF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F00);
	}
	static ::System::Int32* StaticGet_CBJHNGBICBN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F04);
	}
	static ::System::Int32* StaticGet_CDGFIKJNHNA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F08);
	}
	static ::System::Int32* StaticGet_AANJNJBLFFH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F0C);
	}
	static ::System::Int32* StaticGet_CAOPPHCHJFO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F10);
	}
	static ::System::Int32* StaticGet_HMKIEFNFGKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F14);
	}
	static ::System::Int32* StaticGet_EFDNLAEOIMG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F18);
	}
	static ::System::Int32* StaticGet_PNHMCAEEDPE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F1C);
	}
	static ::System::Int32* StaticGet_OEPDDMJBLPB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F20);
	}
	static ::System::Int32* StaticGet_MBBBICPKKBI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F24);
	}
	static ::System::Int32* StaticGet_GCIINKMBHIG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F28);
	}
	static ::System::Int32* StaticGet_NBEJCPIEGFG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F2C);
	}
	static ::System::Int32* StaticGet_LLNFHLGFCMH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F30);
	}
	static ::System::Int32* StaticGet_GGDDHINEJIG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F34);
	}
	static ::System::Int32* StaticGet_MIMKCFPHJMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F38);
	}
	static ::System::Int32* StaticGet_OICOKAKGHMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F3C);
	}
	static ::System::Int32* StaticGet_HHCOEBMFIBI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F40);
	}
	static ::System::Int32* StaticGet_NHCHGFJIJMG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F44);
	}
	static ::System::Int32* StaticGet_DHAFKJICLJB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F48);
	}
	static ::System::Int32* StaticGet_MNLAMBLPBCE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F4C);
	}
	static ::System::Int32* StaticGet_AOGKIFGCBDN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F50);
	}
	static ::System::Int32* StaticGet_FDCCJAHAABJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F54);
	}
	static ::System::Int32* StaticGet_PNGHKPCCPOG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1342B57709FD7AC5_TypeDefinitionIndex)->GetStaticField(0x3F58);
	}
	// static const ::System::Single IJAEBCJNJLP; // 0x0
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>* EKLIFAPHNJM; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* MGNAMBGJIPJ; // 0x18
	::UnityEngine::GameObject* GNGICBBHKEJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* FGINEHOENBH; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF>* BONDNLPAFBN; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* CDGLCCCOMJM; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* JFEIIBIJFLL; // 0x40
	::Class_1_3D92459BEEC82DA8* PNNOBGKOKEL; // 0x48
	::Class_1_1342B57709FD7AC5* BNLCCCCMABF; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5_Struct_2_3223310B200982FF>*>* EGPGIGCOEAN; // 0x58
	::System::Boolean JGNOEBMAMBB; // 0x60
	::System::UInt32 FNCIFNADMDK; // 0x64
	::System::Int32 JGGDKOCIEGH; // 0x68
	::System::Boolean FCKAKJMPLLF; // 0x6C
	::System::Boolean JPPEPFGGGEG; // 0x6D
	::System::Boolean AHIPPHLHGCO; // 0x6E
	::System::Boolean FKJPJKOEKEE; // 0x6F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5__CCTOR_OFFSET))();
	}

	::System::Void Method_1_66E01EDD5B6C8BEA(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_66E01EDD5B6C8BEA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D1E9468F473A8CB2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_D1E9468F473A8CB2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* System_Collections_Generic_IList_UnityEngine_Renderer__get_Item(::System::Int32 a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__set_Item(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_ICollection_UnityEngine_Renderer__get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__Add(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET))(this, a1);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Contains(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__CopyTo(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_IList_UnityEngine_Renderer__IndexOf(::UnityEngine::Renderer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__Insert(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET))(this, a1, a2);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Remove(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__RemoveAt(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>* System_Collections_Generic_IEnumerable_UnityEngine_Renderer__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>* System_Collections_Generic_IEnumerable_UnityEngine_Material__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_D9B49437BED81855(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_D9B49437BED81855_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6777F35EE465A3D7(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_6777F35EE465A3D7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8F8087B1298412E5(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_8F8087B1298412E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_331792DB7A7A7274(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_331792DB7A7A7274_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A15B87BEC14B6AED(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_A15B87BEC14B6AED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_47B2B31A9614D0A7(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_47B2B31A9614D0A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D46FF90CEAF73F3(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_0D46FF90CEAF73F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CF044021AB77CADF(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_CF044021AB77CADF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CFC9163EC5CCDB7F(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_CFC9163EC5CCDB7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B3BB2D98AE5057E3(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B3BB2D98AE5057E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_1_338A4B0C4FC058BE(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_338A4B0C4FC058BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C67E095FA185ACCC(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C67E095FA185ACCC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_C9ACDD08A0027186(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C9ACDD08A0027186_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A01E345E6EA0DB(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A01E345E6EA0DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2DA8F7A684C1DC34_OFFSET))(this);
	}

	static ::System::Void Method_1_6AFA89C8304981EB(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a2, ::UnityEngine::Renderer* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>*, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_6AFA89C8304981EB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_26D3E11E8F31C710(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_26D3E11E8F31C710_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_17168FC6520538CE(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Material*, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_17168FC6520538CE_OFFSET))(a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_4DB04FABDA8C0D0C(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4DB04FABDA8C0D0C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E90591B7EBC622D6(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E90591B7EBC622D6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2721A6C3F6C53AA5(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2721A6C3F6C53AA5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1AF8EFBCCDF911AE(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1AF8EFBCCDF911AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B7CB9F6D4F8CE62F(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B7CB9F6D4F8CE62F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0AFD1D50235199BC(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_0AFD1D50235199BC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_69DD8D30CC011166(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_69DD8D30CC011166_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_78ED2E5CBDFB328D(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_78ED2E5CBDFB328D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA22867231F3BB14(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_CA22867231F3BB14_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4CC98A6C8FCB337C(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4CC98A6C8FCB337C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A8BEA81740818411(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_A8BEA81740818411_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7F8FBC5D3D292138(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7F8FBC5D3D292138_1(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_7F8FBC5D3D292138_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_10E7212CA3B456C6(::UnityEngine::PassTagID& a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_10E7212CA3B456C6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BF54EEDF1489BF9B(::System::String* a1, ::System::Boolean a2, ::RPG::Client::MaterialProppertySetWay a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BF54EEDF1489BF9B_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ShaderPropertyConfig* Method_1_52A453FDDF9F650F()
	{
		return ((::RPG::GameCore::ShaderPropertyConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_52A453FDDF9F650F_OFFSET))();
	}

	::System::UInt32 Method_1_BA21645B2BA53720(::System::UInt32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BA21645B2BA53720_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33E38367D69D2421(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_33E38367D69D2421_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::UInt32 Method_1_C23F7A96EBA0C99F(::UnityEngine::Renderer* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C23F7A96EBA0C99F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_44044DFC79037A53(::Class_1_F0D462198B262603* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0D462198B262603*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_44044DFC79037A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8E5EF61295E47B41(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_8E5EF61295E47B41_OFFSET))(this, a1);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Void Method_1_23C3681AC9E5D438()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_23C3681AC9E5D438_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_1_11AC706BA50CACDE(::System::Int32 a1, ::RPG::Client::MaterialProppertySetWay a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_11AC706BA50CACDE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* Method_1_E14D6DFF657BA3C8(::System::String* a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_E14D6DFF657BA3C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_2F2C465C43536C2C()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_2F2C465C43536C2C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Method_1_16FE35BA8F40A382()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_16FE35BA8F40A382_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_F0D462198B262603* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_F0D462198B262603*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
