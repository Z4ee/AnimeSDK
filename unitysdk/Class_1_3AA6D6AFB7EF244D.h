#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetType.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_566A03E0D2F6A738;
class Class_1_E4EF4C3BF95147F3;
namespace Foundation { class AppVersion; }
namespace Foundation { class IAssetPool; }
namespace MoleMole { class IVideoPlayer; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x12C62AF0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_123D02C357BC464C_OFFSET UNITYSDK_OFFSET(0x12C649E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_12BFA42E867DEC39_OFFSET UNITYSDK_OFFSET(0x12C63270)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_148782076270BFD0_OFFSET UNITYSDK_OFFSET(0x12C61C20)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x12C5F760)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2560CAD8AC524680_OFFSET UNITYSDK_OFFSET(0x12C62320)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_270DF59DB725F7EA_OFFSET UNITYSDK_OFFSET(0x12C62480)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2F80526F3D0EA89B_OFFSET UNITYSDK_OFFSET(0x12C61E10)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x12C602E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12C65910)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_3B12A2EE5802F5CD_OFFSET UNITYSDK_OFFSET(0x12C65280)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_412696BC18DA48ED_OFFSET UNITYSDK_OFFSET(0x12C5E6D0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_44AB02E8C2CDFE7E_OFFSET UNITYSDK_OFFSET(0x12C63CD0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x12C65890)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_49D024BB384F3D97_OFFSET UNITYSDK_OFFSET(0x12C63520)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4AED0F9BFD3A0A26_OFFSET UNITYSDK_OFFSET(0x12C642E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4BBE5E115DB48E82_OFFSET UNITYSDK_OFFSET(0x12C61B20)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x12C65B90)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12C5E3A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x12C5E090)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x12C65D30)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6274E1366512C35F_OFFSET UNITYSDK_OFFSET(0x12C5EC90)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x12C5FF50)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_76088450E3EEFAA0_OFFSET UNITYSDK_OFFSET(0x12C5E840)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7BF9E7EF788ED759_OFFSET UNITYSDK_OFFSET(0x12C5EDD0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7C234C695800BD4B_OFFSET UNITYSDK_OFFSET(0x12C65730)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_841BF0F15D698DD2_OFFSET UNITYSDK_OFFSET(0x12C5E210)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_88A1153002DF0EBD_OFFSET UNITYSDK_OFFSET(0x12C5E730)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9B2E49C24F014C7E_OFFSET UNITYSDK_OFFSET(0x12C5E630)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x12C5F240)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A682E540F239EE22_OFFSET UNITYSDK_OFFSET(0x12C5E150)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A6A58AAD4AE9F90E_OFFSET UNITYSDK_OFFSET(0x12C5EAB0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_ABC0FB66874DEE5D_OFFSET UNITYSDK_OFFSET(0x12C60830)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_AD3947A02E8EABD9_OFFSET UNITYSDK_OFFSET(0x12C5EF30)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x12C62DC0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x12C62FB0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_1_OFFSET UNITYSDK_OFFSET(0x12C63390)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_2_OFFSET UNITYSDK_OFFSET(0x12C65790)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_OFFSET UNITYSDK_OFFSET(0x12C62CC0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BC6F8F029B0FCDEE_OFFSET UNITYSDK_OFFSET(0x12C62140)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BE95C4D384D633DF_OFFSET UNITYSDK_OFFSET(0x12C631C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C15D3DC756EBDDA4_OFFSET UNITYSDK_OFFSET(0x12C61970)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x12C62420)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C79E4F284A6926A5_OFFSET UNITYSDK_OFFSET(0x12C65160)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE08B9BCAB5BBA6C_OFFSET UNITYSDK_OFFSET(0x12C62030)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_1_OFFSET UNITYSDK_OFFSET(0x12C63490)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x12C61720)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x12C5F360)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D365C951B322ECA2_OFFSET UNITYSDK_OFFSET(0x12C5F2E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D450E7E80C970C0D_OFFSET UNITYSDK_OFFSET(0x12C62580)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x12C5E3E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DB204809798B4B28_OFFSET UNITYSDK_OFFSET(0x12C617A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DD7961ED36F3AA73_OFFSET UNITYSDK_OFFSET(0x12C63980)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_E0BF330D94B8AB74_OFFSET UNITYSDK_OFFSET(0x12C5F050)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_EC38075BD0444D6F_OFFSET UNITYSDK_OFFSET(0x12C63880)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12C65720)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12C63510)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x12C62AB0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12C5F2A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F5FF89303DE13BC9_OFFSET UNITYSDK_OFFSET(0x12C5FD90)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FFDB41E6BD9C64A5_OFFSET UNITYSDK_OFFSET(0x12C64A90)
#define CLASS_1_3AA6D6AFB7EF244D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C5DFD0)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex = 68665;

class Class_1_3AA6D6AFB7EF244D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x341C0);
	}
	static ::Foundation::AppVersion** StaticGet_Field_1_5()
	{
		return (::Foundation::AppVersion**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x341C8);
	}
	static ::Foundation::IAssetPool** StaticGet_Field_1_3()
	{
		return (::Foundation::IAssetPool**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x341D0);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0xC1D0);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0xC1D1);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5E72916301E347E2_OFFSET))();
	}

	static ::System::Void Method_1_A682E540F239EE22(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A682E540F239EE22_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_841BF0F15D698DD2()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_841BF0F15D698DD2_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}

	static ::System::Void Method_1_9B2E49C24F014C7E(::UnityEngine::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9B2E49C24F014C7E_OFFSET))(a1, a2);
	}

	static ::Foundation::IAssetPool* Method_1_412696BC18DA48ED()
	{
		return ((::Foundation::IAssetPool*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_412696BC18DA48ED_OFFSET))();
	}

	static ::System::String* Method_1_88A1153002DF0EBD()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_88A1153002DF0EBD_OFFSET))();
	}

	static ::System::String* Method_1_A6A58AAD4AE9F90E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A6A58AAD4AE9F90E_OFFSET))();
	}

	static ::Foundation::AssetRequestHandle Method_1_6274E1366512C35F(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3)
	{
		return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6274E1366512C35F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD3947A02E8EABD9(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_AD3947A02E8EABD9_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_566A03E0D2F6A738* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_566A03E0D2F6A738*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_D365C951B322ECA2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D365C951B322ECA2_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CEA32FF190776922_OFFSET))();
	}

	static ::System::Void Method_1_20E8013D4AB67E17()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_20E8013D4AB67E17_OFFSET))();
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::String* Method_1_ABC0FB66874DEE5D()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_ABC0FB66874DEE5D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_DB204809798B4B28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DB204809798B4B28_OFFSET))(a1);
	}

	static ::System::Void Method_1_C15D3DC756EBDDA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C15D3DC756EBDDA4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4BBE5E115DB48E82()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4BBE5E115DB48E82_OFFSET))();
	}

	static ::System::Void Method_1_148782076270BFD0(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::Foundation::AssetType a4)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_148782076270BFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2F80526F3D0EA89B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2F80526F3D0EA89B_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_CE08B9BCAB5BBA6C(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE08B9BCAB5BBA6C_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_0D6706375CDAAE8C* Method_1_2560CAD8AC524680(::System::Int32 a1)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2560CAD8AC524680_OFFSET))(a1);
	}

	static ::Class_1_3002D7CF5FEE9D3A* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_3002D7CF5FEE9D3A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	static ::System::Void Method_1_E0BF330D94B8AB74(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_E0BF330D94B8AB74_OFFSET))(a1, a2, a3, a4);
	}

	static ::Foundation::AppVersion* Method_1_76088450E3EEFAA0()
	{
		return ((::Foundation::AppVersion*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_76088450E3EEFAA0_OFFSET))();
	}

	static ::System::Boolean Method_1_270DF59DB725F7EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_270DF59DB725F7EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_0869E1192F8E01DF_OFFSET))();
	}

	static ::Foundation::AssetRequestHandle Method_1_7BF9E7EF788ED759(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3)
	{
		return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7BF9E7EF788ED759_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_BB4EDE0E0C478397()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_BC6F8F029B0FCDEE(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BC6F8F029B0FCDEE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))();
	}

	static ::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BA1BB49741CFDFE1_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_BE95C4D384D633DF(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BE95C4D384D633DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_12BFA42E867DEC39(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::Foundation::AssetType a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_12BFA42E867DEC39_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_BB4EDE0E0C478397_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_49D024BB384F3D97(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_49D024BB384F3D97_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_1_EC38075BD0444D6F(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_EC38075BD0444D6F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DD7961ED36F3AA73(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DD7961ED36F3AA73_OFFSET))(a1);
	}

	static ::System::Void Method_1_44AB02E8C2CDFE7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_44AB02E8C2CDFE7E_OFFSET))(a1);
	}

	static ::System::String* Method_1_4AED0F9BFD3A0A26()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4AED0F9BFD3A0A26_OFFSET))();
	}

	static ::System::Void Method_1_123D02C357BC464C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_123D02C357BC464C_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFDB41E6BD9C64A5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FFDB41E6BD9C64A5_OFFSET))(a1);
	}

	static ::System::Void Method_1_C79E4F284A6926A5(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C79E4F284A6926A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3B12A2EE5802F5CD(::MoleMole::IVideoPlayer* a1, ::System::String* a2, ::Foundation::AssetRequestHandle& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::IVideoPlayer*, ::System::String*, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_3B12A2EE5802F5CD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_E4EF4C3BF95147F3* Method_1_F5FF89303DE13BC9()
	{
		return ((::Class_1_E4EF4C3BF95147F3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F5FF89303DE13BC9_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_1_OFFSET))();
	}

	static ::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_30A2382C3FCC5386_OFFSET))();
	}

	static ::System::Void Method_1_7C234C695800BD4B(::Foundation::IAssetPool* a1)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7C234C695800BD4B_OFFSET))(a1);
	}

	static ::System::String* Method_1_BB4EDE0E0C478397_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BB4EDE0E0C478397_2_OFFSET))();
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_507A5122CD01412B_OFFSET))();
	}

	static ::System::String* Method_1_D450E7E80C970C0D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_D450E7E80C970C0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_62167C28EC14CC63_OFFSET))();
	}
};
