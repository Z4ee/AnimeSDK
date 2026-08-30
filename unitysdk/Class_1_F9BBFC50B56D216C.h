#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_5E661670EA3C1EB7.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B4357A1C72BABC6B;
class Class_1_F88B28E90BD371ED;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace UnityEngine { class Collider; }

#define CLASS_1_F9BBFC50B56D216C_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x155BAAE0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x155BB240)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x155BB0F0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_403FFE6DFEA7BA32_OFFSET UNITYSDK_OFFSET(0x155BD510)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0x155BD350)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_4A6DDE2C951866CF_OFFSET UNITYSDK_OFFSET(0x155C1110)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x155BB040)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_7169D948DDB6AB66_OFFSET UNITYSDK_OFFSET(0x155BE400)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_7C7D4E981A8560E7_OFFSET UNITYSDK_OFFSET(0x155BB940)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_8269E3D6108412BC_OFFSET UNITYSDK_OFFSET(0x155C30F0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x155C0DD0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_A6F3A8DCA45530DE_OFFSET UNITYSDK_OFFSET(0x155BC850)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x155BB180)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_BC9FEF9B95F735B1_OFFSET UNITYSDK_OFFSET(0x155C2EF0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_CE5217B66C467E25_OFFSET UNITYSDK_OFFSET(0x155BEED0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x155BAD30)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_DEE7148C9B463CAC_OFFSET UNITYSDK_OFFSET(0x155C1550)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x155BB690)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_E5087D779D5880D9_OFFSET UNITYSDK_OFFSET(0x155C0000)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_EBDEA410187C76A5_OFFSET UNITYSDK_OFFSET(0x155C21D0)
#define CLASS_1_F9BBFC50B56D216C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155C3540)
#define CLASS_1_F9BBFC50B56D216C__CTOR_OFFSET UNITYSDK_OFFSET(0x155BAAD0)

inline static constexpr unsigned int Class_1_F9BBFC50B56D216C_TypeDefinitionIndex = 76437;

class Class_1_F9BBFC50B56D216C : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9BBFC50B56D216C_TypeDefinitionIndex)->GetStaticField(0x117E0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_GFABCKDNIBJ()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9BBFC50B56D216C_TypeDefinitionIndex)->GetStaticField(0x117E8);
	}
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x10
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x18
	::System::Boolean ABKMPGNDAHO; // 0x20
	::System::Int32 CGMDPOOBMEJ; // 0x24

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C__CCTOR_OFFSET))();
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_40E6AFCB91524816_OFFSET))(this);
	}

	::System::Void Method_1_7169D948DDB6AB66(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_7169D948DDB6AB66_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_1_A6F3A8DCA45530DE(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_A6F3A8DCA45530DE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE5217B66C467E25(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_CE5217B66C467E25_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_403FFE6DFEA7BA32(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_403FFE6DFEA7BA32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7C7D4E981A8560E7(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_7C7D4E981A8560E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EBDEA410187C76A5(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_1_F88B28E90BD371ED* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_EBDEA410187C76A5_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector2 Method_1_BC9FEF9B95F735B1(::Struct_2_5E661670EA3C1EB7 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::System::Boolean a4)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::Struct_2_5E661670EA3C1EB7, ::RPG::MVector2, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_BC9FEF9B95F735B1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_E5087D779D5880D9(::Class_1_F88B28E90BD371ED* a1, ::UnityEngine::Bounds a2, ::Struct_2_EAC1BB0F093534A5& a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Quaternion& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Bounds, ::Struct_2_EAC1BB0F093534A5&, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_E5087D779D5880D9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_8269E3D6108412BC(::UnityEngine::Vector3 a1, ::Struct_2_EAC1BB0F093534A5& a2, ::Class_2_B9E8C2EEAA5C96EC* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_EAC1BB0F093534A5&, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_8269E3D6108412BC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DEE7148C9B463CAC(::Struct_2_EAC1BB0F093534A5 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_DEE7148C9B463CAC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4A6DDE2C951866CF(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_4A6DDE2C951866CF_OFFSET))(this, a1, a2);
	}
};
