#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4266CA7D1A31BD8B.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0_1;
class Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD;
class Class_1_6657081C8A94CA44;
class Class_2_208CC9941471731A_663;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_064D0E699FD06747_OFFSET UNITYSDK_OFFSET(0x15FB68C0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_0651AA5046861BAB_OFFSET UNITYSDK_OFFSET(0x15FB1750)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_079B239D332DC81C_OFFSET UNITYSDK_OFFSET(0x15FB22D0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_0F42923FC2842D5B_OFFSET UNITYSDK_OFFSET(0x15FB40C0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_161804062D142275_OFFSET UNITYSDK_OFFSET(0x15FB42A0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_1742CC6082AF8D7B_OFFSET UNITYSDK_OFFSET(0x15FB1AA0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_22F782D71D97E614_OFFSET UNITYSDK_OFFSET(0x15FB58B0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_22FE93F0973CD23B_OFFSET UNITYSDK_OFFSET(0x15FB35C0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_25235041EF301825_OFFSET UNITYSDK_OFFSET(0x15FB7220)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_285A985B7FCC813A_OFFSET UNITYSDK_OFFSET(0x15FB57E0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x15FB6740)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_3BA296F1CB8611A1_OFFSET UNITYSDK_OFFSET(0x15FB30B0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_3D2905F5BCAF31A1_OFFSET UNITYSDK_OFFSET(0x15FB77F0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_50F9E976E6B3B1C7_OFFSET UNITYSDK_OFFSET(0x15FB1BA0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_563395C855182288_OFFSET UNITYSDK_OFFSET(0x15FB2E70)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_5CAFC7F339044F14_OFFSET UNITYSDK_OFFSET(0x15FB69F0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_7D8B15DCABEF315F_OFFSET UNITYSDK_OFFSET(0x15FB4E30)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_860CA5F408151004_OFFSET UNITYSDK_OFFSET(0x15FB6B90)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_87388A1C5AF6EB54_OFFSET UNITYSDK_OFFSET(0x15FB63E0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_8E75FAC150F48853_OFFSET UNITYSDK_OFFSET(0x15FB4F60)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_956C7A6E2D0F82A1_OFFSET UNITYSDK_OFFSET(0x15FB3FC0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_96B20086C5F1BC0A_OFFSET UNITYSDK_OFFSET(0x15FB6DF0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_99C565C33AD699AF_OFFSET UNITYSDK_OFFSET(0x15FB2700)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A44F655ECE4EE169_OFFSET UNITYSDK_OFFSET(0x15FB2B90)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A4B9C05D30788B23_OFFSET UNITYSDK_OFFSET(0x15FB53C0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A8B30F4FB05440AA_OFFSET UNITYSDK_OFFSET(0x15FB59D0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_AED4AD1D1B845350_OFFSET UNITYSDK_OFFSET(0x15FB45F0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_B9E78EA78319B2F4_OFFSET UNITYSDK_OFFSET(0x15FB20E0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET UNITYSDK_OFFSET(0x15FB4790)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET UNITYSDK_OFFSET(0x15FB5730)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x15FB2FF0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C439867C0DDBD4D9_OFFSET UNITYSDK_OFFSET(0x15FB6BF0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET UNITYSDK_OFFSET(0x15FB3EB0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C8B3C6A282BD803B_OFFSET UNITYSDK_OFFSET(0x15FB5A90)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_CEC4E639DE40C8C4_OFFSET UNITYSDK_OFFSET(0x15FB4540)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x15FB1B50)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EBEAD9A8E7F93CEB_OFFSET UNITYSDK_OFFSET(0x15FB7890)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EE1C6F697A4919D7_OFFSET UNITYSDK_OFFSET(0x15FB2D10)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_F485487359D38A65_OFFSET UNITYSDK_OFFSET(0x15FB55E0)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x15FB6D70)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FD947098326DD009_OFFSET UNITYSDK_OFFSET(0x15FB2A40)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FE79E9ECE1F0E214_OFFSET UNITYSDK_OFFSET(0x15FB2990)
#define CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FFBBE4A6EC365E53_OFFSET UNITYSDK_OFFSET(0x15FB5930)

inline static constexpr unsigned int Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_TypeDefinitionIndex = 87013;

class Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A : public ::System::Object
{
public:
	static ::Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD** StaticGet_Field_1_7()
	{
		return (::Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_TypeDefinitionIndex)->GetStaticField(0x3BDE0);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_TypeDefinitionIndex)->GetStaticField(0xE160);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_TypeDefinitionIndex)->GetStaticField(0xE164);
	}
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_0 = 0x10; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_11; // 0x0

	static ::System::Void Method_1_0651AA5046861BAB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0_1*>*& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0_1*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_0651AA5046861BAB_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_208CC9941471731A_663* Method_1_1742CC6082AF8D7B(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_208CC9941471731A_663*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_1742CC6082AF8D7B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B9E78EA78319B2F4(::Foundation::ViewObject::ViewObjectHandle a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_B9E78EA78319B2F4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_079B239D332DC81C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_079B239D332DC81C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FE79E9ECE1F0E214(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FE79E9ECE1F0E214_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A44F655ECE4EE169()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A44F655ECE4EE169_OFFSET))();
	}

	static ::System::Boolean Method_1_563395C855182288(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_563395C855182288_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3BA296F1CB8611A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::Vector3& a7, ::UnityEngine::Vector3& a8)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_3BA296F1CB8611A1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Int32 Method_1_22FE93F0973CD23B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_22FE93F0973CD23B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C4DEAEE83B3E8BE5(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_956C7A6E2D0F82A1(::System::UInt32 a1, ::System::UInt32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_956C7A6E2D0F82A1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_161804062D142275(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_161804062D142275_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_CEC4E639DE40C8C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_CEC4E639DE40C8C4_OFFSET))(a1);
	}

	static ::System::Void Method_1_AED4AD1D1B845350(::System::String* a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_AED4AD1D1B845350_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BDFE81FEA9BC8C74(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8E75FAC150F48853(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_8E75FAC150F48853_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Boolean Method_1_F485487359D38A65(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_F485487359D38A65_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_BFBBE8A6FE167A6A_1_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_663* Method_1_50F9E976E6B3B1C7(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_2_208CC9941471731A_663*(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_50F9E976E6B3B1C7_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0_1* Method_1_285A985B7FCC813A(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0_1*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_285A985B7FCC813A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_22F782D71D97E614(::System::Collections::Generic::List_1<::System::Int32>*& a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_22F782D71D97E614_OFFSET))(a1);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FFBBE4A6EC365E53(::Struct_2_76CCAEE20B3AE57C a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Struct_2_76CCAEE20B3AE57C))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FFBBE4A6EC365E53_OFFSET))(a1);
	}

	static ::Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD* Method_1_99C565C33AD699AF()
	{
		return ((::Class_1_4D3CAB8B6C237257_Class_1_79EB1ED4BB4EA40A_Class_1_FD08728D5376E6FD*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_99C565C33AD699AF_OFFSET))();
	}

	static ::System::Int32 Method_1_EE1C6F697A4919D7(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EE1C6F697A4919D7_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_0F42923FC2842D5B(::Foundation::ViewObject::GroupMemberIdentifier a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_0F42923FC2842D5B_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_A8B30F4FB05440AA(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A8B30F4FB05440AA_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_7D8B15DCABEF315F(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_7D8B15DCABEF315F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Void Method_1_C8B3C6A282BD803B(::System::Action* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C8B3C6A282BD803B_OFFSET))(a1, a2);
	}

	static ::Struct_2_4266CA7D1A31BD8B Method_1_87388A1C5AF6EB54(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_4266CA7D1A31BD8B(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_87388A1C5AF6EB54_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_2DC57A98C12C3B08_OFFSET))(a1);
	}

	static ::System::Void Method_1_064D0E699FD06747(::Enum_3_49722073307230E6 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Enum_3_49722073307230E6, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_064D0E699FD06747_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0_1* Method_1_5CAFC7F339044F14(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_204C453CC79AE4E0_1*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_5CAFC7F339044F14_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0_1* Method_1_860CA5F408151004(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0_1*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_860CA5F408151004_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>* Method_1_C439867C0DDBD4D9(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_C439867C0DDBD4D9_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FA662896843C137A_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_1_96B20086C5F1BC0A(::System::Int32 a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_96B20086C5F1BC0A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25235041EF301825(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_25235041EF301825_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A4B9C05D30788B23(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_A4B9C05D30788B23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D2905F5BCAF31A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_3D2905F5BCAF31A1_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FD947098326DD009(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_FD947098326DD009_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EBEAD9A8E7F93CEB(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4D3CAB8B6C237257_CLASS_1_79EB1ED4BB4EA40A_METHOD_1_EBEAD9A8E7F93CEB_OFFSET))(a1, a2, a3, a4);
	}
};
