#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7EB6F0B72CD25094_Struct_2_54B4088200EC9CC2.h"
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

#define CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_1_OFFSET UNITYSDK_OFFSET(0x169B9240)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_2_OFFSET UNITYSDK_OFFSET(0x169B9C20)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_OFFSET UNITYSDK_OFFSET(0x169B8CF0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_123FE9C612F0E6FE_OFFSET UNITYSDK_OFFSET(0x169B9F40)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x169B72A0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x169B7280)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x169B72C0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_1504B1D7C52AC88D_OFFSET UNITYSDK_OFFSET(0x169B74B0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_1CF3C4FE612DFED7_OFFSET UNITYSDK_OFFSET(0x169B9550)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x169B7520)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_33F0D99AD528C95F_1_OFFSET UNITYSDK_OFFSET(0x169BC0A0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_33F0D99AD528C95F_OFFSET UNITYSDK_OFFSET(0x169B7CA0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_3713F85E03254640_OFFSET UNITYSDK_OFFSET(0x169B6F70)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x169B78A0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_45700C5432457CC3_OFFSET UNITYSDK_OFFSET(0x169B8C40)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x169B7CF0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_737E4344C117B74F_OFFSET UNITYSDK_OFFSET(0x169BB310)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x169B7780)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x169B7DD0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_9FCE123DD4F43037_OFFSET UNITYSDK_OFFSET(0x169B7CD0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_A49897627DDEB366_OFFSET UNITYSDK_OFFSET(0x169BB7E0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_AA0179A06D30F3EA_OFFSET UNITYSDK_OFFSET(0x169B7B20)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x169B7B40)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_B72A0778D4FC29B1_1_OFFSET UNITYSDK_OFFSET(0x169B7740)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_B72A0778D4FC29B1_OFFSET UNITYSDK_OFFSET(0x169B7700)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_C529D575F6004011_OFFSET UNITYSDK_OFFSET(0x169B73E0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0x169B9060)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x169B7690)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x169B89D0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_E23A89A84E2A1A3E_OFFSET UNITYSDK_OFFSET(0x169B8AB0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x169B8CD0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x169BB7C0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0x169B9020)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0x169B9000)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_5_OFFSET UNITYSDK_OFFSET(0x169B9040)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_6_OFFSET UNITYSDK_OFFSET(0x169BB2F0)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_7_OFFSET UNITYSDK_OFFSET(0x169B9F20)
#define CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x169B9220)
#define CLASS_1_7EB6F0B72CD25094__CCTOR_OFFSET UNITYSDK_OFFSET(0x169BC230)
#define CLASS_1_7EB6F0B72CD25094__CTOR_OFFSET UNITYSDK_OFFSET(0x169BC0D0)

inline static constexpr unsigned int Class_1_7EB6F0B72CD25094_TypeDefinitionIndex = 58214;

class Class_1_7EB6F0B72CD25094 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EB6F0B72CD25094_TypeDefinitionIndex)->GetStaticField(0x570A0);
	}
	::Class_1_D8F4AFFB45264B6D* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::RPG::Client::SmellPathGraph* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_7EB6F0B72CD25094_Struct_2_54B4088200EC9CC2>* Field_1_6; // 0x38
	::UnityEngine::Transform* Field_1_7; // 0x40
	::Class_1_EFF1E704497E19DB* Field_1_8; // 0x48
	::RPG::GameCore::PropSmellPathComponent* Field_1_9; // 0x50
	::Class_1_EFF1E704497E19DB* Field_1_10; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x60
	::System::Int32 Field_1_12; // 0x68
	::System::Int32 Field_1_13; // 0x6C
	::UnityEngine::Vector3 Field_1_14; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3713F85E03254640(::RPG::Client::SmellPathGraph* a1, ::RPG::GameCore::PropSmellPathComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SmellPathGraph*, ::RPG::GameCore::PropSmellPathComponent*))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_3713F85E03254640_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_C529D575F6004011(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_C529D575F6004011_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_B72A0778D4FC29B1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_B72A0778D4FC29B1_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_B72A0778D4FC29B1_1_OFFSET))(this);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_1504B1D7C52AC88D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_1504B1D7C52AC88D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_E23A89A84E2A1A3E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_E23A89A84E2A1A3E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SmellPathEdge* Method_1_45700C5432457CC3(::RPG::GameCore::SmellPathEdge* a1)
	{
		return ((::RPG::GameCore::SmellPathEdge*(*)(::PVOID, ::RPG::GameCore::SmellPathEdge*))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_45700C5432457CC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_A49897627DDEB366(::Class_1_7EB6F0B72CD25094_Struct_2_54B4088200EC9CC2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7EB6F0B72CD25094_Struct_2_54B4088200EC9CC2))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_A49897627DDEB366_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_00575C558E708E28_2(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_00575C558E708E28_2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1CF3C4FE612DFED7(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_1CF3C4FE612DFED7_OFFSET))(this, a1);
	}

	::System::Void Method_1_123FE9C612F0E6FE(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_123FE9C612F0E6FE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_CA9AD3D703CC4954(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_CA9AD3D703CC4954_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_737E4344C117B74F(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_737E4344C117B74F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}

	::Il2CppArray<::RPG::MVector3>* Method_1_AA0179A06D30F3EA()
	{
		return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_AA0179A06D30F3EA_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::SmellPathEdge*>* Method_1_9FCE123DD4F43037()
	{
		return ((::Il2CppArray<::RPG::GameCore::SmellPathEdge*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_9FCE123DD4F43037_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_33F0D99AD528C95F()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_33F0D99AD528C95F_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_3_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_4_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_5_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_6_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_33F0D99AD528C95F_1()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_33F0D99AD528C95F_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EB6F0B72CD25094_METHOD_1_FB4BE762B6186C23_7_OFFSET))(this);
	}
};
