#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_135.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_136.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_1009;
class Class_2_208CC9941471731A_268;
class Class_2_D0C558C56591C3D1;
class Class_3_3B42BC0680587011;
class Class_3_3B9412253A0E3E79;
class Class_3_883E597458B91E77;
class Class_3_CA5CFC731672CF57;
class Class_3_D3DDAA6C0FFE6434;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_943E95074A489718_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x102D3D30)
#define CLASS_3_943E95074A489718_METHOD_3_079E5F5906B6ED6C_OFFSET UNITYSDK_OFFSET(0x102D8E60)
#define CLASS_3_943E95074A489718_METHOD_3_0847B26198D54104_OFFSET UNITYSDK_OFFSET(0x102D4450)
#define CLASS_3_943E95074A489718_METHOD_3_107E3383049E312F_OFFSET UNITYSDK_OFFSET(0x102D4150)
#define CLASS_3_943E95074A489718_METHOD_3_1A3065CD35015836_OFFSET UNITYSDK_OFFSET(0x102D75E0)
#define CLASS_3_943E95074A489718_METHOD_3_362C8D6D4E665A3A_OFFSET UNITYSDK_OFFSET(0x102D6630)
#define CLASS_3_943E95074A489718_METHOD_3_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0x102D8220)
#define CLASS_3_943E95074A489718_METHOD_3_410C81503C0D5121_OFFSET UNITYSDK_OFFSET(0x102D5260)
#define CLASS_3_943E95074A489718_METHOD_3_418C74C0FE5EA796_OFFSET UNITYSDK_OFFSET(0x102D84F0)
#define CLASS_3_943E95074A489718_METHOD_3_443A2FC7CA692DDC_OFFSET UNITYSDK_OFFSET(0x102D6400)
#define CLASS_3_943E95074A489718_METHOD_3_57B5C94652275271_OFFSET UNITYSDK_OFFSET(0x102D6BD0)
#define CLASS_3_943E95074A489718_METHOD_3_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0x102D7590)
#define CLASS_3_943E95074A489718_METHOD_3_6569DAF2A99B5571_OFFSET UNITYSDK_OFFSET(0x102D8640)
#define CLASS_3_943E95074A489718_METHOD_3_73DC75BDC3CBFC2B_OFFSET UNITYSDK_OFFSET(0x102D6B10)
#define CLASS_3_943E95074A489718_METHOD_3_7405332647017205_OFFSET UNITYSDK_OFFSET(0x102D5D40)
#define CLASS_3_943E95074A489718_METHOD_3_7F90DEB49EB81C62_OFFSET UNITYSDK_OFFSET(0x102D6580)
#define CLASS_3_943E95074A489718_METHOD_3_A68862828C0E3CE7_OFFSET UNITYSDK_OFFSET(0x102D7090)
#define CLASS_3_943E95074A489718_METHOD_3_BA9803117A6DF463_1_OFFSET UNITYSDK_OFFSET(0x102D4C30)
#define CLASS_3_943E95074A489718_METHOD_3_BA9803117A6DF463_OFFSET UNITYSDK_OFFSET(0x102D42D0)
#define CLASS_3_943E95074A489718_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x102D58B0)
#define CLASS_3_943E95074A489718_METHOD_3_BE7286329484489E_OFFSET UNITYSDK_OFFSET(0x102D6020)
#define CLASS_3_943E95074A489718_METHOD_3_BF70D8E403E3E02C_1_OFFSET UNITYSDK_OFFSET(0x102D7E20)
#define CLASS_3_943E95074A489718_METHOD_3_BF70D8E403E3E02C_OFFSET UNITYSDK_OFFSET(0x102D5940)
#define CLASS_3_943E95074A489718_METHOD_3_C30E29F78DDC8B7A_OFFSET UNITYSDK_OFFSET(0x102D8BC0)
#define CLASS_3_943E95074A489718_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x102D8190)
#define CLASS_3_943E95074A489718_METHOD_3_CAAF45489FCE8C3E_OFFSET UNITYSDK_OFFSET(0x102D5C90)
#define CLASS_3_943E95074A489718_METHOD_3_CBD473D018672EA2_OFFSET UNITYSDK_OFFSET(0x102D89F0)
#define CLASS_3_943E95074A489718_METHOD_3_D39845A01CA8856D_OFFSET UNITYSDK_OFFSET(0x102D8AC0)
#define CLASS_3_943E95074A489718_METHOD_3_F08FBBB01BDACB8D_OFFSET UNITYSDK_OFFSET(0x102D64C0)
#define CLASS_3_943E95074A489718_METHOD_3_FAE4A5DA2A21FACA_OFFSET UNITYSDK_OFFSET(0x102D79E0)
#define CLASS_3_943E95074A489718_METHOD_3_FBF1E51A71992E91_OFFSET UNITYSDK_OFFSET(0x102D4DB0)
#define CLASS_3_943E95074A489718_METHOD_3_FCA2528667615864_OFFSET UNITYSDK_OFFSET(0x102D78A0)
#define CLASS_3_943E95074A489718_METHOD_3_FD6126B880E7D032_OFFSET UNITYSDK_OFFSET(0x102D7A90)
#define CLASS_3_943E95074A489718_UPDATE_OFFSET UNITYSDK_OFFSET(0x102D4030)
#define CLASS_3_943E95074A489718__CCTOR_OFFSET UNITYSDK_OFFSET(0x102D4100)
#define CLASS_3_943E95074A489718__CTOR_OFFSET UNITYSDK_OFFSET(0x102D40B0)

inline static constexpr unsigned int Class_3_943E95074A489718_TypeDefinitionIndex = 50407;

class Class_3_943E95074A489718 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::String** StaticGet_Field_3_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_943E95074A489718_TypeDefinitionIndex)->GetStaticField(0x35070);
	}
	static ::System::String** StaticGet_Field_3_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_943E95074A489718_TypeDefinitionIndex)->GetStaticField(0x35078);
	}
	::System::Action_5<::Class_3_CA5CFC731672CF57*, ::Class_3_883E597458B91E77*, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*>* Field_3_4; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28
	::Class_2_D0C558C56591C3D1* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_107E3383049E312F(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_107E3383049E312F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_BA9803117A6DF463(::Class_2_208CC9941471731A_268* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_268*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BA9803117A6DF463_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BA9803117A6DF463_1(::Class_2_208CC9941471731A_1009* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_1009*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BA9803117A6DF463_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FBF1E51A71992E91(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_FBF1E51A71992E91_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BF70D8E403E3E02C(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BF70D8E403E3E02C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CAAF45489FCE8C3E(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_CAAF45489FCE8C3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7405332647017205(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_7405332647017205_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0847B26198D54104(::System::Int32 a1, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_135>* a2, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_136>* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::MoleMole::Battle::Entity* a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_135>*, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_136>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_0847B26198D54104_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_7F90DEB49EB81C62(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_7F90DEB49EB81C62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_443A2FC7CA692DDC(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_443A2FC7CA692DDC_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::Entity* Method_3_362C8D6D4E665A3A(::Class_3_D3DDAA6C0FFE6434* a1, ::System::String* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_D3DDAA6C0FFE6434*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_362C8D6D4E665A3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73DC75BDC3CBFC2B(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_73DC75BDC3CBFC2B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_57B5C94652275271(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_57B5C94652275271_OFFSET))(a1, a2);
	}

	::System::Void Method_3_60069FCD99486CD7(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_1A3065CD35015836(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_1A3065CD35015836_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FCA2528667615864(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_3B42BC0680587011* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B9412253A0E3E79*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_FCA2528667615864_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FAE4A5DA2A21FACA(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_FAE4A5DA2A21FACA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FD6126B880E7D032(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_FD6126B880E7D032_OFFSET))(a1);
	}

	static ::System::Void Method_3_BF70D8E403E3E02C_1(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BF70D8E403E3E02C_1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::MoleMole::Battle::Entity* Method_3_410C81503C0D5121(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6, ::System::String* a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_410C81503C0D5121_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_418C74C0FE5EA796(::Class_3_CA5CFC731672CF57* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_418C74C0FE5EA796_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A68862828C0E3CE7(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_A68862828C0E3CE7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6569DAF2A99B5571(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_3B42BC0680587011* a2, ::Class_3_3B9412253A0E3E79* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_6569DAF2A99B5571_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_CBD473D018672EA2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_CBD473D018672EA2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D39845A01CA8856D(::Class_3_CA5CFC731672CF57* a1, ::Class_3_883E597458B91E77* a2, ::Class_3_DFD5D1FDB9D2A4AC* a3, ::Class_3_3B42BC0680587011* a4, ::Class_3_3B9412253A0E3E79* a5)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::Class_3_883E597458B91E77*, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_D39845A01CA8856D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_F08FBBB01BDACB8D(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_F08FBBB01BDACB8D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_079E5F5906B6ED6C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_079E5F5906B6ED6C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_C30E29F78DDC8B7A(::Class_3_CA5CFC731672CF57* a1)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_C30E29F78DDC8B7A_OFFSET))(a1);
	}

	static ::System::Void Method_3_BE7286329484489E(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_METHOD_3_BE7286329484489E_OFFSET))(a1, a2);
	}
};
