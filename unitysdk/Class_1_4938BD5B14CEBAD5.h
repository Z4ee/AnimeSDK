#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

class Class_0_16E4307DCC419505_62;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class StreamWriter; }
namespace System::Threading { class Thread; }

#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x164C0330)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x164C02A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_1_OFFSET UNITYSDK_OFFSET(0x164BF700)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x164BF480)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_178757838D8D7059_OFFSET UNITYSDK_OFFSET(0x164C10B0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_217D176ABA5F239F_OFFSET UNITYSDK_OFFSET(0x164C1760)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_2706F1509669B76D_OFFSET UNITYSDK_OFFSET(0x164C0830)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x164BF300)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_43F008E78788AE7D_OFFSET UNITYSDK_OFFSET(0x164BFE70)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x164C07B0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x164BF620)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x164BF790)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x164C2FD0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET UNITYSDK_OFFSET(0x164C0480)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_1_OFFSET UNITYSDK_OFFSET(0x164C0370)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_OFFSET UNITYSDK_OFFSET(0x164C02E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_80706F488461DCD0_OFFSET UNITYSDK_OFFSET(0x164C0950)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_8B7C44E1F71D9B2B_OFFSET UNITYSDK_OFFSET(0x164C0130)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164BF3C0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0x164BEDD0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_A05778ADC2EABA84_OFFSET UNITYSDK_OFFSET(0x164C01E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_A1EFD7D1FE993E88_OFFSET UNITYSDK_OFFSET(0x164C04E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_A5192AD810D5FD40_OFFSET UNITYSDK_OFFSET(0x164BFED0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_B10C9FE28DB80051_OFFSET UNITYSDK_OFFSET(0x164BFC50)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_B5D1649856B26962_OFFSET UNITYSDK_OFFSET(0x164BFF40)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_B93D2D3A4E472458_OFFSET UNITYSDK_OFFSET(0x164C0410)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x164BF9A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_CC6579FCE14A4E50_OFFSET UNITYSDK_OFFSET(0x164C05B0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D218DD2D3DD4C46A_OFFSET UNITYSDK_OFFSET(0x164C09E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D862EFA452CF657A_OFFSET UNITYSDK_OFFSET(0x164C2710)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_E317E7E9884E2A17_OFFSET UNITYSDK_OFFSET(0x164C3350)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x164BF100)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_EF17B0359CDE9C6B_OFFSET UNITYSDK_OFFSET(0x164C03C0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x164BF760)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x164BF2A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_2_OFFSET UNITYSDK_OFFSET(0x164BF2D0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_3_OFFSET UNITYSDK_OFFSET(0x164BF450)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x164BF0D0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x164BFBD0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_FFAE12F56B0F7FA9_OFFSET UNITYSDK_OFFSET(0x164BF900)
#define CLASS_1_4938BD5B14CEBAD5__CCTOR_OFFSET UNITYSDK_OFFSET(0x164C4300)

inline static constexpr unsigned int Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex = 32147;

class Class_1_4938BD5B14CEBAD5 : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x40A80);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x40A88);
	}
	static ::System::Threading::Thread** StaticGet_Field_1_13()
	{
		return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x40A90);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x40A98);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x40AA0);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113C0);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113C4);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113C8);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113CC);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113D0);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113D1);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113D4);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113D8);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113DC);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113E0);
	}
	static ::System::DateTime* StaticGet_Field_1_11()
	{
		return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x113E8);
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

	static ::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_OFFSET))();
	}

	static ::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_507A5122CD01412B_OFFSET))();
	}

	static ::System::Boolean Method_1_0DF420E95D6252BE_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_FFAE12F56B0F7FA9(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_FFAE12F56B0F7FA9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_B10C9FE28DB80051(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_B10C9FE28DB80051_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43F008E78788AE7D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_43F008E78788AE7D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A5192AD810D5FD40(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_A5192AD810D5FD40_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B5D1649856B26962(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_B5D1649856B26962_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8B7C44E1F71D9B2B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_8B7C44E1F71D9B2B_OFFSET))(a1);
	}

	static ::System::Void Method_1_A05778ADC2EABA84(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_A05778ADC2EABA84_OFFSET))(a1, a2, a3);
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

	static ::System::Void Method_1_EF17B0359CDE9C6B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_EF17B0359CDE9C6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_B93D2D3A4E472458(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_B93D2D3A4E472458_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6A77B2BDC6B4BFA2(::System::Exception* a1)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET))(a1);
	}

	static ::System::Void Method_1_A1EFD7D1FE993E88(::System::Exception* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_A1EFD7D1FE993E88_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC6579FCE14A4E50(::System::Exception* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_CC6579FCE14A4E50_OFFSET))(a1, a2, a3, a4);
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

	static ::System::Void Method_1_D218DD2D3DD4C46A(::Class_0_16E4307DCC419505_62* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_62*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D218DD2D3DD4C46A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_178757838D8D7059(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_178757838D8D7059_OFFSET))(a1, a2, a3);
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

	static ::System::Void Method_1_E317E7E9884E2A17(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_E317E7E9884E2A17_OFFSET))(a1);
	}
};
