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

class Class_1_24C2E7EF22229C6A;
class Class_1_F88B28E90BD371ED;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace UnityEngine { class Collider; }

#define CLASS_1_F9BBFC50B56D216C_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x989A6D0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_1951C00CD1B83164_OFFSET UNITYSDK_OFFSET(0x989B5B0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x989AA60)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x989AD10)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_3838F20A5962CA5A_OFFSET UNITYSDK_OFFSET(0x98A15F0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_403FFE6DFEA7BA32_OFFSET UNITYSDK_OFFSET(0x989D830)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x989AAC0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_45E44F5D0F6D7513_OFFSET UNITYSDK_OFFSET(0x989ED80)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x989B350)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_6370DBB6BBA36D93_OFFSET UNITYSDK_OFFSET(0x98A20F0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_6A1F28B2AA2004EF_OFFSET UNITYSDK_OFFSET(0x98A3190)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_A18DDE12E640F622_OFFSET UNITYSDK_OFFSET(0x989D580)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x989ABD0)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_A6F3A8DCA45530DE_OFFSET UNITYSDK_OFFSET(0x989C770)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x98A0E20)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_BA1A380A7A99BB77_OFFSET UNITYSDK_OFFSET(0x98A1130)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_BC9FEF9B95F735B1_OFFSET UNITYSDK_OFFSET(0x98A2F90)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_D953D28768CF30A7_OFFSET UNITYSDK_OFFSET(0x989E540)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_E5087D779D5880D9_OFFSET UNITYSDK_OFFSET(0x98A0110)
#define CLASS_1_F9BBFC50B56D216C_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x989A850)
#define CLASS_1_F9BBFC50B56D216C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98A35A0)
#define CLASS_1_F9BBFC50B56D216C__CTOR_OFFSET UNITYSDK_OFFSET(0x989A6C0)

inline static constexpr unsigned int Class_1_F9BBFC50B56D216C_TypeDefinitionIndex = 70619;

class Class_1_F9BBFC50B56D216C : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9BBFC50B56D216C_TypeDefinitionIndex)->GetStaticField(0x13150);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9BBFC50B56D216C_TypeDefinitionIndex)->GetStaticField(0x13158);
	}
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C__CCTOR_OFFSET))();
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A18DDE12E640F622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_A18DDE12E640F622_OFFSET))(this);
	}

	::System::Void Method_1_D953D28768CF30A7(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_D953D28768CF30A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_A6F3A8DCA45530DE(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_A6F3A8DCA45530DE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_45E44F5D0F6D7513(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_45E44F5D0F6D7513_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_403FFE6DFEA7BA32(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_403FFE6DFEA7BA32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1951C00CD1B83164(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_1951C00CD1B83164_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6370DBB6BBA36D93(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F88B28E90BD371ED* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_6370DBB6BBA36D93_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::MVector2 Method_1_BC9FEF9B95F735B1(::Struct_2_5E661670EA3C1EB7 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::System::Boolean a4)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::Struct_2_5E661670EA3C1EB7, ::RPG::MVector2, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_BC9FEF9B95F735B1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_E5087D779D5880D9(::Class_1_F88B28E90BD371ED* a1, ::UnityEngine::Bounds a2, ::Struct_2_EAC1BB0F093534A5& a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Quaternion& a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F88B28E90BD371ED*, ::UnityEngine::Bounds, ::Struct_2_EAC1BB0F093534A5&, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_E5087D779D5880D9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_6A1F28B2AA2004EF(::UnityEngine::Vector3 a1, ::Struct_2_EAC1BB0F093534A5& a2, ::Class_2_9DD8A46984F1AFFD* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_EAC1BB0F093534A5&, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_6A1F28B2AA2004EF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3838F20A5962CA5A(::Struct_2_EAC1BB0F093534A5 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_3838F20A5962CA5A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_BA1A380A7A99BB77(::Struct_2_F31A7EC67A3AEEF7& a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9BBFC50B56D216C_METHOD_1_BA1A380A7A99BB77_OFFSET))(this, a1, a2);
	}
};
