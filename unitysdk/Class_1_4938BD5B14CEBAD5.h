#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

class Class_0_16E4307DCC419505_80;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class StreamWriter; }
namespace System::Threading { class Thread; }

#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x140C0470)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x140C03E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0765355A63378FDC_OFFSET UNITYSDK_OFFSET(0x140C0BF0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0C1F6958952FE846_OFFSET UNITYSDK_OFFSET(0x140C0500)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_1B9810BF9B3D1E1F_OFFSET UNITYSDK_OFFSET(0x140C0320)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_217D176ABA5F239F_OFFSET UNITYSDK_OFFSET(0x140C1BE0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_2706F1509669B76D_OFFSET UNITYSDK_OFFSET(0x140C0A50)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x140BF7E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x140C09D0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x140BFB30)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x140C3010)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET UNITYSDK_OFFSET(0x140C05C0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_1_OFFSET UNITYSDK_OFFSET(0x140C04B0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_OFFSET UNITYSDK_OFFSET(0x140C0420)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7E8B4D2D867110CC_OFFSET UNITYSDK_OFFSET(0x140C3340)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_80706F488461DCD0_OFFSET UNITYSDK_OFFSET(0x140C0B60)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_822EAC438F34980F_OFFSET UNITYSDK_OFFSET(0x140BFB70)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x140BF9C0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x140BF8A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0x140BF460)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_9B0C43B0B6D3BA9B_1_OFFSET UNITYSDK_OFFSET(0x140BFAA0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x140BF960)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x140BFC40)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_BFC8E31FE7754607_OFFSET UNITYSDK_OFFSET(0x140C0760)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_C94767EF53588589_OFFSET UNITYSDK_OFFSET(0x140C01F0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D608456BAA9B3500_OFFSET UNITYSDK_OFFSET(0x140C0120)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x140C0270)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D862EFA452CF657A_OFFSET UNITYSDK_OFFSET(0x140C2890)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_DE24DE5175BF0884_OFFSET UNITYSDK_OFFSET(0x140C0550)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_E44F2F7202964359_OFFSET UNITYSDK_OFFSET(0x140C0180)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_E549A1B662C97E32_OFFSET UNITYSDK_OFFSET(0x140C0620)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_E66DBB9B5DCFFFBE_OFFSET UNITYSDK_OFFSET(0x140C1430)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x140BF720)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_ED73A95B650D287A_OFFSET UNITYSDK_OFFSET(0x140BFD70)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x140BFB00)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x140BF780)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_2_OFFSET UNITYSDK_OFFSET(0x140BF7B0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_3_OFFSET UNITYSDK_OFFSET(0x140BF930)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x140BF6F0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x140BFD00)
#define CLASS_1_4938BD5B14CEBAD5__CCTOR_OFFSET UNITYSDK_OFFSET(0x140C3E70)

inline static constexpr unsigned int Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex = 40285;

class Class_1_4938BD5B14CEBAD5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_APDFCNDCPAA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x15970);
	}
	static ::System::String** StaticGet_FGOONPBHDJF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x15978);
	}
	static ::System::String** StaticGet_FMCGKBGKHOD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x15980);
	}
	static ::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>** StaticGet_LHKEFIECHNO()
	{
		return (::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x15988);
	}
	static ::System::Threading::Thread** StaticGet_JBPLLNLBKKI()
	{
		return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x15990);
	}
	static ::System::DateTime* StaticGet_JNFBCHGBLAL()
	{
		return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8410);
	}
	static ::System::Boolean* StaticGet_CLAGOGLDHJP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8418);
	}
	static ::System::Boolean* StaticGet_IOKHIICODBE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8419);
	}
	static ::System::Int32* StaticGet_AKGLNMLLEOF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x841C);
	}
	static ::System::Int32* StaticGet_NCJOKDFALIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8420);
	}
	static ::System::Int32* StaticGet_ANMLMIHNKCF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8424);
	}
	static ::System::Int32* StaticGet_LEHNKMMFLLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8428);
	}
	static ::System::Int32* StaticGet_IOGCKCOPJML()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x842C);
	}
	static ::System::Int32* StaticGet_EEJIKOFFLPE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8430);
	}
	static ::System::Int32* StaticGet_DLLLLLDIPGO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8434);
	}
	static ::System::Int32* StaticGet_OAAJJFGPHKD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x8438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_97CD3501BC2A9FF5()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_97CD3501BC2A9FF5_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_2_OFFSET))();
	}

	static ::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_37D0382D0C30A2DC_OFFSET))();
	}

	static ::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_95780ED94B90ED36_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_3()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_3_OFFSET))();
	}

	static ::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))();
	}

	static ::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_84EAB34EABC7F508_OFFSET))();
	}

	static ::System::Boolean Method_1_9B0C43B0B6D3BA9B_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_9B0C43B0B6D3BA9B_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_822EAC438F34980F(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_822EAC438F34980F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_ED73A95B650D287A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_ED73A95B650D287A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D608456BAA9B3500(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D608456BAA9B3500_OFFSET))(a1);
	}

	static ::System::Void Method_1_E44F2F7202964359(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_E44F2F7202964359_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C94767EF53588589(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_C94767EF53588589_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D78E7E5921B8B1C4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D78E7E5921B8B1C4_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B9810BF9B3D1E1F(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_1B9810BF9B3D1E1F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B9326DC6F33E4C6(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B9326DC6F33E4C6_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C1F6958952FE846(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0C1F6958952FE846_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE24DE5175BF0884(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_DE24DE5175BF0884_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6A77B2BDC6B4BFA2(::System::Exception* a1)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E549A1B662C97E32(::System::Exception* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_E549A1B662C97E32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BFC8E31FE7754607(::System::Exception* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_BFC8E31FE7754607_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_2706F1509669B76D(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_2706F1509669B76D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80706F488461DCD0(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_80706F488461DCD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0765355A63378FDC(::Class_0_16E4307DCC419505_80* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_80*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0765355A63378FDC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E66DBB9B5DCFFFBE(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_E66DBB9B5DCFFFBE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_217D176ABA5F239F(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_217D176ABA5F239F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D862EFA452CF657A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D862EFA452CF657A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_64F3965CE4C4DB47_OFFSET))();
	}

	static ::System::Void Method_1_7E8B4D2D867110CC(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_7E8B4D2D867110CC_OFFSET))(a1);
	}
};
