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

#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_1_OFFSET UNITYSDK_OFFSET(0xCC5D110)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_2_OFFSET UNITYSDK_OFFSET(0xCC5DB20)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_00575C558E708E28_OFFSET UNITYSDK_OFFSET(0xCC5CBC0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xCC5B100)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xCC5B0E0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCC5B120)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_1504B1D7C52AC88D_OFFSET UNITYSDK_OFFSET(0xCC5B320)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xCC5B390)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_1_OFFSET UNITYSDK_OFFSET(0xCC5FFF0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_33F0D99AD528C95F_OFFSET UNITYSDK_OFFSET(0xCC5BB40)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xCC5B740)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_42A2072E0CF9F512_OFFSET UNITYSDK_OFFSET(0xCC5AD40)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0xCC5BB90)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0xCC5B5F0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xCC5BC70)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_9FCE123DD4F43037_OFFSET UNITYSDK_OFFSET(0xCC5BB70)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_A49897627DDEB366_OFFSET UNITYSDK_OFFSET(0xCC5F730)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AA0179A06D30F3EA_OFFSET UNITYSDK_OFFSET(0xCC5B9C0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_AF01F8739A3CF255_OFFSET UNITYSDK_OFFSET(0xCC5D420)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCC5B9E0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_1_OFFSET UNITYSDK_OFFSET(0xCC5B5B0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_B72A0778D4FC29B1_OFFSET UNITYSDK_OFFSET(0xCC5B570)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_BABEBE63D91D63E8_OFFSET UNITYSDK_OFFSET(0xCC5CAE0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_C06D463F80B2E889_OFFSET UNITYSDK_OFFSET(0xCC5DE40)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_C529D575F6004011_OFFSET UNITYSDK_OFFSET(0xCC5B250)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_CA9AD3D703CC4954_OFFSET UNITYSDK_OFFSET(0xCC5CF30)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xCC5B500)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xCC5C870)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_EA0FA5AF31FAD3FD_OFFSET UNITYSDK_OFFSET(0xCC5F230)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xCC5CBA0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0xCC5F710)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0xCC5CEF0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0xCC5CED0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_5_OFFSET UNITYSDK_OFFSET(0xCC5CF10)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_6_OFFSET UNITYSDK_OFFSET(0xCC5F210)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_7_OFFSET UNITYSDK_OFFSET(0xCC5DE20)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xCC5D0F0)
#define CLASS_1_9E5113866ECE6B3A_METHOD_1_FFF6AE3CA98EF26D_OFFSET UNITYSDK_OFFSET(0xCC5C950)
#define CLASS_1_9E5113866ECE6B3A__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC60150)
#define CLASS_1_9E5113866ECE6B3A__CTOR_OFFSET UNITYSDK_OFFSET(0xCC60020)

inline static constexpr unsigned int Class_1_9E5113866ECE6B3A_TypeDefinitionIndex = 60944;

class Class_1_9E5113866ECE6B3A : public ::System::Object
{
public:
	static ::System::String** StaticGet_NLIFMANPJGF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5113866ECE6B3A_TypeDefinitionIndex)->GetStaticField(0x24A30);
	}
	::Class_1_D8F4AFFB45264B6D* CEKOEOJPOMB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JNBPEDPABCF; // 0x18
	::Class_1_EFF1E704497E19DB* KHIIACOKBAO; // 0x20
	::Class_1_EFF1E704497E19DB* NLBLMNLFPIF; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OKHINAEOOFG; // 0x30
	::Il2CppArray<::System::Single>* DCOPELFHOLO; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* KKKDDEHMHBG; // 0x40
	::System::Collections::Generic::List_1<::Class_1_9E5113866ECE6B3A_Struct_2_54B4088200EC9CC2>* PPLHHIJAGLE; // 0x48
	::UnityEngine::Transform* BLAKFFCIJGE; // 0x50
	::RPG::GameCore::PropSmellPathComponent* ANKEOLNCNOA; // 0x58
	::RPG::Client::SmellPathGraph* GBBJMIJEPKF; // 0x60
	::System::Int32 IMBGNKFBBPA; // 0x68
	::System::Int32 CCNEDHDMOON; // 0x6C
	::UnityEngine::Vector3 MIBIDIDMNBH; // 0x70

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
