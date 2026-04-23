#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_44B8EC842F459D62;
class Class_1_EFF1E704497E19DB;
namespace RPG::Client { class SmellPathGraph; }
namespace RPG::GameCore { class PropSmellPathComponent; }
namespace RPG::GameCore { class SmellPathEdge; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9E5113866ECE6B3A_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x99818D0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_0D95214C1FCF51C2_OFFSET UNITYSDK_OFFSET(0x99806C0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x9984BE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9984BC0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x9980D40)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_1_OFFSET UNITYSDK_OFFSET(0x9984B60)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_OFFSET UNITYSDK_OFFSET(0x9984B90)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x99808B0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_3EF4231FE590E1A9_OFFSET UNITYSDK_OFFSET(0x9980840)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_42A2072E0CF9F512_OFFSET UNITYSDK_OFFSET(0x997FE30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x99801D0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x9980C20)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_9EA373D7A1AF5B66_OFFSET UNITYSDK_OFFSET(0x9983E30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_9FCE123DD4F43037_OFFSET UNITYSDK_OFFSET(0x9980C00)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_A49897627DDEB366_OFFSET UNITYSDK_OFFSET(0x9984280)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AA0179A06D30F3EA_OFFSET UNITYSDK_OFFSET(0x9980BE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0x9982410)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x9980590)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_1_OFFSET UNITYSDK_OFFSET(0x9980550)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_OFFSET UNITYSDK_OFFSET(0x9980510)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_BABEBE63D91D63E8_OFFSET UNITYSDK_OFFSET(0x9981B30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_C06D463F80B2E889_OFFSET UNITYSDK_OFFSET(0x9982CD0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0x9981F50)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_E358621C5ABCC58F_OFFSET UNITYSDK_OFFSET(0x9980310)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x9980C90)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x99803E0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_1_OFFSET UNITYSDK_OFFSET(0x9982130)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_2_OFFSET UNITYSDK_OFFSET(0x99829E0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_OFFSET UNITYSDK_OFFSET(0x9981C10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x9981BF0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x9984260)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0x9981F10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0x9981EF0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_5_OFFSET UNITYSDK_OFFSET(0x9981F30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_6_OFFSET UNITYSDK_OFFSET(0x9983E10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_7_OFFSET UNITYSDK_OFFSET(0x9982CB0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x9982110)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FFF6AE3CA98EF26D_OFFSET UNITYSDK_OFFSET(0x99819A0)
#define CLASS_1_9E5113866ECE6B3A__CCTOR_OFFSET UNITYSDK_OFFSET(0x9984E70)
#define CLASS_1_9E5113866ECE6B3A__CTOR_OFFSET UNITYSDK_OFFSET(0x9984C00)

inline static constexpr unsigned int Class_1_9E5113866ECE6B3A_TypeDefinitionIndex = 56205;

class Class_1_9E5113866ECE6B3A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_14()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5113866ECE6B3A_TypeDefinitionIndex)->GetStaticField(0x19EC0);
	}
	::RPG::GameCore::PropSmellPathComponent* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x18
	::Class_1_44B8EC842F459D62* Field_1_3; // 0x20
	::RPG::Client::SmellPathGraph* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2>* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x40
	::Il2CppArray<::System::Single>* Field_1_7; // 0x48
	::Class_1_EFF1E704497E19DB* Field_1_10; // 0x50
	::Class_1_EFF1E704497E19DB* Field_1_11; // 0x58
	::UnityEngine::Transform* Field_1_1; // 0x60
	::UnityEngine::Vector3 Field_1_4; // 0x68
	::System::Int32 Field_1_6; // 0x74
	::System::Int32 Field_1_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A__CCTOR_OFFSET))();
	}

	::System::Void Method_1_42A2072E0CF9F512(::RPG::Client::SmellPathGraph* a1, ::RPG::GameCore::PropSmellPathComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*, ::RPG::GameCore::PropSmellPathComponent*))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_42A2072E0CF9F512_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_E358621C5ABCC58F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_E358621C5ABCC58F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_1_OFFSET))(this);
	}

	::System::Void Method_1_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_0D95214C1FCF51C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_0D95214C1FCF51C2_OFFSET))(this);
	}

	::System::Void Method_1_3EF4231FE590E1A9(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_3EF4231FE590E1A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_FFF6AE3CA98EF26D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FFF6AE3CA98EF26D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_BABEBE63D91D63E8(::RPG::GameCore::SmellPathEdge* a1)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::RPG::GameCore::SmellPathEdge*))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_BABEBE63D91D63E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_1_A49897627DDEB366(::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_A49897627DDEB366_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_F754BF0A316C09B8(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_F754BF0A316C09B8_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_F754BF0A316C09B8_2(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_F754BF0A316C09B8_2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AF01F8739A3CF255(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_AF01F8739A3CF255_OFFSET))(this, a1);
	}

	::System::Void Method_1_C06D463F80B2E889(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_C06D463F80B2E889_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9EA373D7A1AF5B66(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_9EA373D7A1AF5B66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::Il2CppArray<::RPG::MVector3>* Method_1_AA0179A06D30F3EA()
	{
		return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_AA0179A06D30F3EA_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::SmellPathEdge*>* Method_1_9FCE123DD4F43037()
	{
		return ((::Il2CppArray<::RPG::GameCore::SmellPathEdge*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_9FCE123DD4F43037_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_33F0D99AD528C95F()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_3_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_4_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_5_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_6_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_33F0D99AD528C95F_1()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_7_OFFSET))(this);
	}
};
