#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_117.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_20.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_440;
class Class_2_208CC9941471731A_620;
class Class_2_D0C558C56591C3D1;
class Class_3_3B42BC0680587011;
class Class_3_3B9412253A0E3E79;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
class Class_3_CA5CFC731672CF57;
class Class_3_D3DDAA6C0FFE6434_1;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8AE5F743C6E492E4_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFF97270)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_079E5F5906B6ED6C_OFFSET UNITYSDK_OFFSET(0xFF9A530)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_0B9F76602A478A42_OFFSET UNITYSDK_OFFSET(0xFF9A6E0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_107E3383049E312F_OFFSET UNITYSDK_OFFSET(0xFF9A9A0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_1399DFC4C9CED778_OFFSET UNITYSDK_OFFSET(0xFF98BA0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_15D30FE5E77894D5_OFFSET UNITYSDK_OFFSET(0xFF97F40)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_362C8D6D4E665A3A_OFFSET UNITYSDK_OFFSET(0xFF9B670)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_3A08FD6F6C9BA32C_OFFSET UNITYSDK_OFFSET(0xFF986A0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_3FD707A7D81B1BAF_OFFSET UNITYSDK_OFFSET(0xFF9C000)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_418C74C0FE5EA796_OFFSET UNITYSDK_OFFSET(0xFF9A3E0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_443A2FC7CA692DDC_OFFSET UNITYSDK_OFFSET(0xFF97E80)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_57B5C94652275271_OFFSET UNITYSDK_OFFSET(0xFF9AB20)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0xFF99700)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_6D115AF94D08AAD2_OFFSET UNITYSDK_OFFSET(0xFF99AE0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_73DC75BDC3CBFC2B_OFFSET UNITYSDK_OFFSET(0xFF99890)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_7F90DEB49EB81C62_OFFSET UNITYSDK_OFFSET(0xFF98000)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_A68862828C0E3CE7_OFFSET UNITYSDK_OFFSET(0xFF99200)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BA9803117A6DF463_1_OFFSET UNITYSDK_OFFSET(0xFF9A270)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BA9803117A6DF463_OFFSET UNITYSDK_OFFSET(0xFF9A100)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFF99950)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BAE938A866B509F0_OFFSET UNITYSDK_OFFSET(0xFF98970)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BBF21FC6476EAA73_OFFSET UNITYSDK_OFFSET(0xFF9BB30)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_BE7286329484489E_OFFSET UNITYSDK_OFFSET(0xFF982C0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_C30E29F78DDC8B7A_OFFSET UNITYSDK_OFFSET(0xFF99E60)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFF98160)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_CAAF45489FCE8C3E_OFFSET UNITYSDK_OFFSET(0xFF980B0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_CBD473D018672EA2_OFFSET UNITYSDK_OFFSET(0xFF981F0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_D2AFCA6950829F71_OFFSET UNITYSDK_OFFSET(0xFF9B390)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_D39845A01CA8856D_OFFSET UNITYSDK_OFFSET(0xFF999E0)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_EAF7A5DAF56B561F_OFFSET UNITYSDK_OFFSET(0xFF97690)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_FAE4A5DA2A21FACA_OFFSET UNITYSDK_OFFSET(0xFF9BF50)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_FCA2528667615864_OFFSET UNITYSDK_OFFSET(0xFF99750)
#define CLASS_3_8AE5F743C6E492E4_METHOD_3_FD6126B880E7D032_OFFSET UNITYSDK_OFFSET(0xFF9B000)
#define CLASS_3_8AE5F743C6E492E4_UPDATE_OFFSET UNITYSDK_OFFSET(0xFF97570)
#define CLASS_3_8AE5F743C6E492E4__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF97640)
#define CLASS_3_8AE5F743C6E492E4__CTOR_OFFSET UNITYSDK_OFFSET(0xFF975F0)

inline static constexpr unsigned int Class_3_8AE5F743C6E492E4_TypeDefinitionIndex = 82159;

class Class_3_8AE5F743C6E492E4 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8AE5F743C6E492E4_TypeDefinitionIndex)->GetStaticField(0x3BBE0);
	}
	static ::System::String** StaticGet_Field_3_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8AE5F743C6E492E4_TypeDefinitionIndex)->GetStaticField(0x3BBE8);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Class_2_D0C558C56591C3D1* Field_3_1; // 0x28
	::System::Action_5<::Class_3_CA5CFC731672CF57*, ::Class_3_883E597458B91E77*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*>* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_EAF7A5DAF56B561F(::System::Int32 a1, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_20>* a2, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_117>* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::MoleMole::Battle::Entity* a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_20>*, ::System::Collections::Generic::List_1<::Struct_2_58DF5669875F2C66_117>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_EAF7A5DAF56B561F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_CBD473D018672EA2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_CBD473D018672EA2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BE7286329484489E(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BE7286329484489E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_3A08FD6F6C9BA32C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_3A08FD6F6C9BA32C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BAE938A866B509F0(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BAE938A866B509F0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A68862828C0E3CE7(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_A68862828C0E3CE7_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_60069FCD99486CD7(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_FCA2528667615864(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_3B42BC0680587011* a3)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B9412253A0E3E79*, ::Class_3_3B42BC0680587011*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_FCA2528667615864_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7F90DEB49EB81C62(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_7F90DEB49EB81C62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D39845A01CA8856D(::Class_3_CA5CFC731672CF57* a1, ::Class_3_883E597458B91E77* a2, ::Class_3_C93CC3D2C2AC4067* a3, ::Class_3_3B42BC0680587011* a4, ::Class_3_3B9412253A0E3E79* a5)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::Class_3_883E597458B91E77*, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_D39845A01CA8856D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_BA9803117A6DF463(::Class_2_208CC9941471731A_620* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_620*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BA9803117A6DF463_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_BA9803117A6DF463_1(::Class_2_208CC9941471731A_440* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_440*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BA9803117A6DF463_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_418C74C0FE5EA796(::Class_3_CA5CFC731672CF57* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_418C74C0FE5EA796_OFFSET))(a1, a2);
	}

	::System::Void Method_3_079E5F5906B6ED6C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_079E5F5906B6ED6C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0B9F76602A478A42(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_0B9F76602A478A42_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73DC75BDC3CBFC2B(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_73DC75BDC3CBFC2B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_443A2FC7CA692DDC(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_443A2FC7CA692DDC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_57B5C94652275271(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_57B5C94652275271_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_15D30FE5E77894D5(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_15D30FE5E77894D5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6D115AF94D08AAD2(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_3B42BC0680587011* a2, ::Class_3_3B9412253A0E3E79* a3)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_3B42BC0680587011*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_6D115AF94D08AAD2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_107E3383049E312F(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_107E3383049E312F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_FD6126B880E7D032(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_FD6126B880E7D032_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_3_1399DFC4C9CED778(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6, ::System::String* a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_1399DFC4C9CED778_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_C30E29F78DDC8B7A(::Class_3_CA5CFC731672CF57* a1)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_C30E29F78DDC8B7A_OFFSET))(a1);
	}

	static ::System::Void Method_3_D2AFCA6950829F71(::Class_3_CA5CFC731672CF57* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_CA5CFC731672CF57*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_D2AFCA6950829F71_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_362C8D6D4E665A3A(::Class_3_D3DDAA6C0FFE6434_1* a1, ::System::String* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_D3DDAA6C0FFE6434_1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_362C8D6D4E665A3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CAAF45489FCE8C3E(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_CAAF45489FCE8C3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BBF21FC6476EAA73(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_BBF21FC6476EAA73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FAE4A5DA2A21FACA(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_FAE4A5DA2A21FACA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3FD707A7D81B1BAF(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_METHOD_3_3FD707A7D81B1BAF_OFFSET))(a1, a2);
	}
};
