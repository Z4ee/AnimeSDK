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

class Class_1_2BDB3F194C7034D2;
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

#define CLASS_1_9CBC71DC5240DC00_CLEAR_OFFSET UNITYSDK_OFFSET(0x11989E00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_00B3DEE0F5490F85_OFFSET UNITYSDK_OFFSET(0x1198A590)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_0148BFAC0C63966A_OFFSET UNITYSDK_OFFSET(0x1198AB10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_06062FA849176A18_OFFSET UNITYSDK_OFFSET(0x11984CE0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x1198A970)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_0F34F47CEAF78018_OFFSET UNITYSDK_OFFSET(0x11985FA0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x1198AA60)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1198A8C0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_16FE35BA8F40A382_OFFSET UNITYSDK_OFFSET(0x1198AD90)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1CBBC8344E774B98_OFFSET UNITYSDK_OFFSET(0x11986A30)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1198AC90)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_21701B78FED706A8_OFFSET UNITYSDK_OFFSET(0x11987950)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2F2C465C43536C2C_OFFSET UNITYSDK_OFFSET(0x1198AD10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2F8032B4F8CBCF5B_OFFSET UNITYSDK_OFFSET(0x11986280)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_2FDE7C9B5717DD91_OFFSET UNITYSDK_OFFSET(0x11985790)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_337912C9639D14C1_OFFSET UNITYSDK_OFFSET(0x11988A20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_1_OFFSET UNITYSDK_OFFSET(0x11988720)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_368E29D63B2DFCF7_OFFSET UNITYSDK_OFFSET(0x11988600)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1198A780)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_3FC7139913228E02_OFFSET UNITYSDK_OFFSET(0x11987EB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11989CB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_422C580260E7B5C6_OFFSET UNITYSDK_OFFSET(0x11984FF0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1198A730)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11989DB0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_44044DFC79037A53_OFFSET UNITYSDK_OFFSET(0x11989540)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_44D5795D283CE6B1_OFFSET UNITYSDK_OFFSET(0x11987180)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x1198A450)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4D9B0A64AE6E92B0_OFFSET UNITYSDK_OFFSET(0x119819E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_4DE6F89919D1BC70_OFFSET UNITYSDK_OFFSET(0x11986F20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_51410153DA05B62A_OFFSET UNITYSDK_OFFSET(0x11988840)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x1198AE20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_52A453FDDF9F650F_OFFSET UNITYSDK_OFFSET(0x11988C00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_544D9C964D846F19_OFFSET UNITYSDK_OFFSET(0x11985130)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_59A54607F93BE05C_OFFSET UNITYSDK_OFFSET(0x119866F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5AA6C059AEE13CC8_OFFSET UNITYSDK_OFFSET(0x11985F20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x11989000)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x119868C0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_66C8A374E0913D6C_OFFSET UNITYSDK_OFFSET(0x11982540)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_7B4A205C38FE24BC_OFFSET UNITYSDK_OFFSET(0x11989050)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_867C14BDEC2D5EFC_OFFSET UNITYSDK_OFFSET(0x119849A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1198A360)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x1198A7C0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_8ECD64FB1B545166_OFFSET UNITYSDK_OFFSET(0x11985A80)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x11985960)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x119861B0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9AC0D0C4BADE8CFB_OFFSET UNITYSDK_OFFSET(0x11987C50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x1198A1F0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x119895B0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x1198ACF0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_9EB3DE6A99EC3193_OFFSET UNITYSDK_OFFSET(0x11986CC0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x119893D0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x11986660)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_B80134F1E6615855_OFFSET UNITYSDK_OFFSET(0x11984B10)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C23F7A96EBA0C99F_OFFSET UNITYSDK_OFFSET(0x11989310)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C60F021334642BAA_OFFSET UNITYSDK_OFFSET(0x11988110)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C6ED34BDA53E098F_OFFSET UNITYSDK_OFFSET(0x119883A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1198AD00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_C9057979287B4EDD_OFFSET UNITYSDK_OFFSET(0x11986350)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_CAA50BD50598C2DA_OFFSET UNITYSDK_OFFSET(0x11984E20)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x11989B00)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D105A4A0431FFDBD_OFFSET UNITYSDK_OFFSET(0x1198A400)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D1859D627382F499_OFFSET UNITYSDK_OFFSET(0x11988D40)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x119842A0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_DCF071F324ACA205_OFFSET UNITYSDK_OFFSET(0x119873E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E1F54EFEAB67EAF6_OFFSET UNITYSDK_OFFSET(0x11985620)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x11986220)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_E9D1FAEB95897B21_OFFSET UNITYSDK_OFFSET(0x11985310)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_EACE2BEA9AF79B88_OFFSET UNITYSDK_OFFSET(0x11985D90)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x11985C50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_ED4A53581FA5DEA4_OFFSET UNITYSDK_OFFSET(0x119854E0)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1198AE50)
#define CLASS_1_9CBC71DC5240DC00_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1198AE10)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__ADD_OFFSET UNITYSDK_OFFSET(0x119844D0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__CONTAINS_OFFSET UNITYSDK_OFFSET(0x11984520)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__COPYTO_OFFSET UNITYSDK_OFFSET(0x11984570)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_COUNT_OFFSET UNITYSDK_OFFSET(0x11984430)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x119844C0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_UNITYENGINE_RENDERER__REMOVE_OFFSET UNITYSDK_OFFSET(0x11984660)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x119848F0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_RENDERER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11984820)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x11984320)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INDEXOF_OFFSET UNITYSDK_OFFSET(0x119845C0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__INSERT_OFFSET UNITYSDK_OFFSET(0x11984610)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x119846B0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_GENERIC_ILIST_UNITYENGINE_RENDERER__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x119843E0)
#define CLASS_1_9CBC71DC5240DC00_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11984700)
#define CLASS_1_9CBC71DC5240DC00__CCTOR_OFFSET UNITYSDK_OFFSET(0x1198B010)
#define CLASS_1_9CBC71DC5240DC00__CTOR_OFFSET UNITYSDK_OFFSET(0x1198AE60)

inline static constexpr unsigned int Class_1_9CBC71DC5240DC00_TypeDefinitionIndex = 57090;

class Class_1_9CBC71DC5240DC00 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x15F0);
	}
	static ::RPG::GameCore::ShaderPropertyConfig** StaticGet_Field_1_25()
	{
		return (::RPG::GameCore::ShaderPropertyConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x15F8);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0x1600);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE20);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE24);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE28);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE2C);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE30);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE34);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE38);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE3C);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE40);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE44);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE48);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE4C);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE50);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE54);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE58);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE5C);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE60);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE64);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE68);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE6C);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE70);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE74);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE78);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE7C);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE80);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE84);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CBC71DC5240DC00_TypeDefinitionIndex)->GetStaticField(0xE88);
	}
	// static const ::System::Single Field_1_21; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00_Struct_2_3223310B200982FF>*>* Field_1_33; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Field_1_43; // 0x18
	::Class_1_9CBC71DC5240DC00* Field_1_10; // 0x20
	::UnityEngine::GameObject* Field_1_38; // 0x28
	::System::Collections::Generic::List_1<::Class_1_9CBC71DC5240DC00*>* Field_1_11; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_42; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9CBC71DC5240DC00_Struct_2_3223310B200982FF>* Field_1_34; // 0x40
	::Class_1_2BDB3F194C7034D2* Field_1_37; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* Field_1_35; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_12; // 0x58
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
