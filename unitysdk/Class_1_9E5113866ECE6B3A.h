#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D8F4AFFB45264B6D;
class Class_1_EFF1E704497E19DB;
namespace RPG::Client { class SmellPathGraph; }
namespace RPG::GameCore { class PropSmellPathComponent; }
namespace RPG::GameCore { class SmellPathEdge; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_1_OFFSET UNITYSDK_OFFSET(0xB778150)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_2_OFFSET UNITYSDK_OFFSET(0xB778A10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_OFFSET UNITYSDK_OFFSET(0xB777C00)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xB776180)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB776160)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB7761A0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_1504B1D7C52AC88D_OFFSET UNITYSDK_OFFSET(0xB7763A0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB776410)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_1_OFFSET UNITYSDK_OFFSET(0xB77AB20)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_OFFSET UNITYSDK_OFFSET(0xB776BB0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xB7767B0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_42A2072E0CF9F512_OFFSET UNITYSDK_OFFSET(0xB775DC0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xB776C00)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0xB776660)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xB776CE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_9FCE123DD4F43037_OFFSET UNITYSDK_OFFSET(0xB776BE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_A49897627DDEB366_OFFSET UNITYSDK_OFFSET(0xB77A260)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AA0179A06D30F3EA_OFFSET UNITYSDK_OFFSET(0xB776A30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0xB778460)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB776A50)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_1_OFFSET UNITYSDK_OFFSET(0xB776620)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_OFFSET UNITYSDK_OFFSET(0xB7765E0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_BABEBE63D91D63E8_OFFSET UNITYSDK_OFFSET(0xB777B20)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_C06D463F80B2E889_OFFSET UNITYSDK_OFFSET(0xB778D30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_C529D575F6004011_OFFSET UNITYSDK_OFFSET(0xB7762D0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0xB777F70)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xB776570)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xB7778B0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_EA0FA5AF31FAD3FD_OFFSET UNITYSDK_OFFSET(0xB779E00)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xB777BE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0xB77A240)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0xB777F30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0xB777F10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_5_OFFSET UNITYSDK_OFFSET(0xB777F50)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_6_OFFSET UNITYSDK_OFFSET(0xB779DE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_7_OFFSET UNITYSDK_OFFSET(0xB778D10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xB778130)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FFF6AE3CA98EF26D_OFFSET UNITYSDK_OFFSET(0xB777990)
#define CLASS_1_9E5113866ECE6B3A__CCTOR_OFFSET UNITYSDK_OFFSET(0xB77AC80)
#define CLASS_1_9E5113866ECE6B3A__CTOR_OFFSET UNITYSDK_OFFSET(0xB77AB50)

inline static constexpr unsigned int Class_1_9E5113866ECE6B3A_TypeDefinitionIndex = 56967;

class Class_1_9E5113866ECE6B3A : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5113866ECE6B3A_TypeDefinitionIndex)->GetStaticField(0x57E30);
	}
	::UnityEngine::Transform* Field_1_1; // 0x10
	::RPG::Client::SmellPathGraph* Field_1_2; // 0x18
	::RPG::GameCore::PropSmellPathComponent* Field_1_3; // 0x20
	::Class_1_EFF1E704497E19DB* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2>* Field_1_6; // 0x38
	::Il2CppArray<::System::Single>* Field_1_7; // 0x40
	::Class_1_D8F4AFFB45264B6D* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x50
	::Class_1_EFF1E704497E19DB* Field_1_10; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x60
	::UnityEngine::Vector3 Field_1_12; // 0x68
	::System::Int32 Field_1_13; // 0x74
	::System::Int32 Field_1_14; // 0x78

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

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_C529D575F6004011(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_C529D575F6004011_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_1_OFFSET))(this);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1504B1D7C52AC88D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_1504B1D7C52AC88D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_FFF6AE3CA98EF26D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_FFF6AE3CA98EF26D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_BABEBE63D91D63E8(::RPG::GameCore::SmellPathEdge* a1)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::RPG::GameCore::SmellPathEdge*))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_BABEBE63D91D63E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_A49897627DDEB366(::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_A49897627DDEB366_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28_2(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_2_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_EA0FA5AF31FAD3FD(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_EA0FA5AF31FAD3FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5113866ECE6B3A_METHOD_1_45714050EDEF8291_OFFSET))(this);
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
