#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CBC71DC5240DC00_Struct_2_3223310B200982FF.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_824B5C4036A7D338;
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

#define CLASS_1_9CBC71DC5240DC00_CLEAR_OFFSET UNITYSDK_OFFSET(0x119741F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_00B3DEE0F5490F85_OFFSET UNITYSDK_OFFSET(0x11974980)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_0148BFAC0C63966A_OFFSET UNITYSDK_OFFSET(0x11974F00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_06062FA849176A18_OFFSET UNITYSDK_OFFSET(0x1196F0D0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x11974D60)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_0F34F47CEAF78018_OFFSET UNITYSDK_OFFSET(0x11970390)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x11974E50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11974CB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_16FE35BA8F40A382_OFFSET UNITYSDK_OFFSET(0x11975180)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1CBBC8344E774B98_OFFSET UNITYSDK_OFFSET(0x11970E20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11975080)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_21701B78FED706A8_OFFSET UNITYSDK_OFFSET(0x11971D40)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2F2C465C43536C2C_OFFSET UNITYSDK_OFFSET(0x11975100)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2F8032B4F8CBCF5B_OFFSET UNITYSDK_OFFSET(0x11970670)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2FDE7C9B5717DD91_OFFSET UNITYSDK_OFFSET(0x1196FB80)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_337912C9639D14C1_OFFSET UNITYSDK_OFFSET(0x11972E10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_1_OFFSET UNITYSDK_OFFSET(0x11972B10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_OFFSET UNITYSDK_OFFSET(0x119729F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11974B70)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_3FC7139913228E02_OFFSET UNITYSDK_OFFSET(0x119722A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x119740A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_422C580260E7B5C6_OFFSET UNITYSDK_OFFSET(0x1196F3E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x11974B20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x119741A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_44044DFC79037A53_OFFSET UNITYSDK_OFFSET(0x11973930)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_44D5795D283CE6B1_OFFSET UNITYSDK_OFFSET(0x11971570)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x11974840)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4D9B0A64AE6E92B0_OFFSET UNITYSDK_OFFSET(0x1196BDD0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4DE6F89919D1BC70_OFFSET UNITYSDK_OFFSET(0x11971310)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_51410153DA05B62A_OFFSET UNITYSDK_OFFSET(0x11972C30)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x11975210)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_52A453FDDF9F650F_OFFSET UNITYSDK_OFFSET(0x11972FF0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_544D9C964D846F19_OFFSET UNITYSDK_OFFSET(0x1196F520)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_59A54607F93BE05C_OFFSET UNITYSDK_OFFSET(0x11970AE0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5AA6C059AEE13CC8_OFFSET UNITYSDK_OFFSET(0x11970310)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x119733F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x11970CB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_66C8A374E0913D6C_OFFSET UNITYSDK_OFFSET(0x1196C930)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_7B4A205C38FE24BC_OFFSET UNITYSDK_OFFSET(0x11973440)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_867C14BDEC2D5EFC_OFFSET UNITYSDK_OFFSET(0x1196ED90)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11974750)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x11974BB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_8ECD64FB1B545166_OFFSET UNITYSDK_OFFSET(0x1196FE70)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x1196FD50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119705A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9AC0D0C4BADE8CFB_OFFSET UNITYSDK_OFFSET(0x11972040)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x119745E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x119739A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x119750E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9EB3DE6A99EC3193_OFFSET UNITYSDK_OFFSET(0x119710B0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x119737C0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x11970A50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B80134F1E6615855_OFFSET UNITYSDK_OFFSET(0x1196EF00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C23F7A96EBA0C99F_OFFSET UNITYSDK_OFFSET(0x11973700)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C60F021334642BAA_OFFSET UNITYSDK_OFFSET(0x11972500)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C6ED34BDA53E098F_OFFSET UNITYSDK_OFFSET(0x11972790)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x119750F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C9057979287B4EDD_OFFSET UNITYSDK_OFFSET(0x11970740)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_CAA50BD50598C2DA_OFFSET UNITYSDK_OFFSET(0x1196F210)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x11973EF0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D105A4A0431FFDBD_OFFSET UNITYSDK_OFFSET(0x119747F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D1859D627382F499_OFFSET UNITYSDK_OFFSET(0x11973130)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x1196E690)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_DCF071F324ACA205_OFFSET UNITYSDK_OFFSET(0x119717D0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E1F54EFEAB67EAF6_OFFSET UNITYSDK_OFFSET(0x1196FA10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x11970610)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E9D1FAEB95897B21_OFFSET UNITYSDK_OFFSET(0x1196F700)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_EACE2BEA9AF79B88_OFFSET UNITYSDK_OFFSET(0x11970180)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x11970040)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_ED4A53581FA5DEA4_OFFSET UNITYSDK_OFFSET(0x1196F8D0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11975240)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11975200)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET UNITYSDK_OFFSET(0x1196E8C0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET UNITYSDK_OFFSET(0x1196E910)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET UNITYSDK_OFFSET(0x1196E960)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1196E820)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1196E8B0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET UNITYSDK_OFFSET(0x1196EA50)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1196ECE0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1196EC10)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1196E710)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET UNITYSDK_OFFSET(0x1196E9B0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET UNITYSDK_OFFSET(0x1196EA00)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1196EAA0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1196E7D0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1196EAF0)
#define CLASS_1_9CBC71DC5240DC00__CCTOR_OFFSET UNITYSDK_OFFSET(0x11975400)
#define CLASS_1_9CBC71DC5240DC00__CTOR_OFFSET UNITYSDK_OFFSET(0x11975250)

inline static constexpr unsigned int Class_1_9CBC71DC5240DC00_TypeDefinitionIndex = 64341;

class Class_1_9CBC71DC5240DC00 : public ::System::Object
{
public:
	static ::RPG::GameCore::ShaderPropertyConfig** StaticGet_Field_1_25()
	{
		return (::RPG::GameCore::ShaderPropertyConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xC910);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xC918);
	}
	static ::System::String** StaticGet_Field_1_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xC920);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4C90);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4C94);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4C98);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4C9C);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CA0);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CA4);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CA8);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CAC);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CB0);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CB4);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CB8);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CBC);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CC0);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CC4);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CC8);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CCC);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CD0);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CD4);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CD8);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CDC);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CE0);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CE4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CE8);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CEC);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CF0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CF4);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x4CF8);
	}
	// static const ::System::Single Field_1_21; // 0x0
	::Class_1_824B5C4036A7D338* Field_1_37; // 0x10
	::Class_1_9CBC71DC5240DC00* Field_1_10; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_12; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9CBC71DC5240DC00_Struct_2_3223310B200982FF>* Field_1_34; // 0x28
	::UnityEngine::GameObject* Field_1_38; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* Field_1_35; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00_Struct_2_3223310B200982FF>*>* Field_1_33; // 0x40
	::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00*>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_42; // 0x50
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Field_1_43; // 0x58
	::System::UInt32 Field_1_36; // 0x60
	::System::Int32 Field_1_39; // 0x64
	::System::Boolean Field_1_41; // 0x68
	::System::Boolean Field_1_44; // 0x69
	::System::Boolean Field_1_40; // 0x6A
	::System::Boolean Field_1_45; // 0x6B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00__CCTOR_OFFSET))();
	}

	::System::Void Method_1_4D9B0A64AE6E92B0(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_4D9B0A64AE6E92B0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_66C8A374E0913D6C(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_66C8A374E0913D6C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* System_Collections_Generic_IList_UnityEngine_Renderer__get_Item(::System::Int32 a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__set_Item(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_ICollection_UnityEngine_Renderer__get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET))(this);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__get_IsReadOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET))(this);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__Add(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET))(this, a1);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Contains(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_ICollection_UnityEngine_Renderer__CopyTo(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET))(this, a1, a2);
	}

	::System::Int32 System_Collections_Generic_IList_UnityEngine_Renderer__IndexOf(::UnityEngine::Renderer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__Insert(::System::Int32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET))(this, a1, a2);
	}

	::System::Boolean System_Collections_Generic_ICollection_UnityEngine_Renderer__Remove(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET))(this, a1);
	}

	::System::Void System_Collections_Generic_IList_UnityEngine_Renderer__RemoveAt(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>* System_Collections_Generic_IEnumerable_UnityEngine_Renderer__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>* System_Collections_Generic_IEnumerable_UnityEngine_Material__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_867C14BDEC2D5EFC(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_867C14BDEC2D5EFC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B80134F1E6615855(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_B80134F1E6615855_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_06062FA849176A18(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_06062FA849176A18_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CAA50BD50598C2DA(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_CAA50BD50598C2DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_422C580260E7B5C6(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_422C580260E7B5C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_544D9C964D846F19(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_544D9C964D846F19_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E9D1FAEB95897B21(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_E9D1FAEB95897B21_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ED4A53581FA5DEA4(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_ED4A53581FA5DEA4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E1F54EFEAB67EAF6(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_E1F54EFEAB67EAF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2FDE7C9B5717DD91(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_2FDE7C9B5717DD91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9636FCCD0F2A7398(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9636FCCD0F2A7398_OFFSET))(this, a1);
	}

	::System::Void Method_1_8ECD64FB1B545166(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_8ECD64FB1B545166_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EACE2BEA9AF79B88(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_EACE2BEA9AF79B88_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_5AA6C059AEE13CC8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_5AA6C059AEE13CC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F34F47CEAF78018(::System::Collections::Generic::IList_1<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_0F34F47CEAF78018_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_E727F9956B5BD78B_OFFSET))(this);
	}

	static ::System::Void Method_1_2F8032B4F8CBCF5B(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_2F8032B4F8CBCF5B_OFFSET))(a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_C9057979287B4EDD(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_C9057979287B4EDD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CBBC8344E774B98(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_1CBBC8344E774B98_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9EB3DE6A99EC3193(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9EB3DE6A99EC3193_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4DE6F89919D1BC70(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_4DE6F89919D1BC70_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_44D5795D283CE6B1(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_44D5795D283CE6B1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_DCF071F324ACA205(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_DCF071F324ACA205_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_21701B78FED706A8(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_21701B78FED706A8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9AC0D0C4BADE8CFB(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9AC0D0C4BADE8CFB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3FC7139913228E02(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_3FC7139913228E02_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C60F021334642BAA(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_C60F021334642BAA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C6ED34BDA53E098F(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3, ::RPG::Client::MaterialProppertySetWay a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_C6ED34BDA53E098F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_368E29D63B2DFCF7(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_368E29D63B2DFCF7_1(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51410153DA05B62A(::UnityEngine::PassTagID& a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_51410153DA05B62A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_337912C9639D14C1(::System::String* a1, ::System::Boolean a2, ::RPG::Client::MaterialProppertySetWay a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_337912C9639D14C1_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ShaderPropertyConfig* Method_1_52A453FDDF9F650F()
	{
		return ((::RPG::GameCore::ShaderPropertyConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_52A453FDDF9F650F_OFFSET))();
	}

	::System::UInt32 Method_1_D1859D627382F499(::System::UInt32 a1, ::UnityEngine::Renderer* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_D1859D627382F499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B4A205C38FE24BC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_7B4A205C38FE24BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::UInt32 Method_1_C23F7A96EBA0C99F(::UnityEngine::Renderer* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_C23F7A96EBA0C99F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_44044DFC79037A53(::Class_1_F0D462198B262603* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0D462198B262603*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_44044DFC79037A53_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_D105A4A0431FFDBD(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_D105A4A0431FFDBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_00B3DEE0F5490F85(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_00B3DEE0F5490F85_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}

	::System::Void Method_1_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_1_59A54607F93BE05C(::System::Int32 a1, ::RPG::Client::MaterialProppertySetWay a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_59A54607F93BE05C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Renderer* Method_1_0148BFAC0C63966A(::System::String* a1)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_0148BFAC0C63966A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_2F2C465C43536C2C()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_2F2C465C43536C2C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Method_1_16FE35BA8F40A382()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_16FE35BA8F40A382_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_F0D462198B262603* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_F0D462198B262603*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
