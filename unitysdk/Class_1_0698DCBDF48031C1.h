#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564_3.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E.h"
#include "unitysdk/Struct_2_B99E072A97EE0372.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0698DCBDF48031C1_METHOD_1_0450D498A3FA4D47_OFFSET UNITYSDK_OFFSET(0x13D95510)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_0BD3CA57DE555B3E_OFFSET UNITYSDK_OFFSET(0x13D95C90)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_0DB096FB3EF19932_OFFSET UNITYSDK_OFFSET(0x13D93400)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x13D93990)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_3315D7D7C9D88616_OFFSET UNITYSDK_OFFSET(0x13D93820)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_37289BC8A16CCB96_OFFSET UNITYSDK_OFFSET(0x13D93AA0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_488083259FAFD21F_OFFSET UNITYSDK_OFFSET(0x13D96160)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_48BD8D88D3E78836_OFFSET UNITYSDK_OFFSET(0x13D96450)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0x13D93A30)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_55EEDF2852B396EB_OFFSET UNITYSDK_OFFSET(0x13D935D0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_568F5B0107B4BD5E_OFFSET UNITYSDK_OFFSET(0x13D934E0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_6AA2350BC9F6684D_OFFSET UNITYSDK_OFFSET(0x13D953F0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_7F3E5369B1A9C7A0_OFFSET UNITYSDK_OFFSET(0x13D95BD0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_95049138D76D6D9A_OFFSET UNITYSDK_OFFSET(0x13D93540)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_9C1DDC55985D9243_OFFSET UNITYSDK_OFFSET(0x13D931F0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0x13D93810)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x13D92FD0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_C3B113AF6205EF51_OFFSET UNITYSDK_OFFSET(0x13D93730)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_CE2BA4BC7A5FFBEB_OFFSET UNITYSDK_OFFSET(0x13D93EC0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_FDA5B51BE9F3EB68_OFFSET UNITYSDK_OFFSET(0x13D95990)
#define CLASS_1_0698DCBDF48031C1__CTOR_OFFSET UNITYSDK_OFFSET(0x13D92CC0)

inline static constexpr unsigned int Class_1_0698DCBDF48031C1_TypeDefinitionIndex = 54552;

class Class_1_0698DCBDF48031C1 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B Field_1_11; // 0x10
	::MoleMole::Vehicle::VehicleConfig* Field_1_12; // 0x40
	::System::Single Field_1_3; // 0x48
	::System::Single Field_1_6; // 0x4C
	::System::Int32 Field_1_2; // 0x50
	::System::Int32 Field_1_13; // 0x54
	::System::Single Field_1_8; // 0x58
	::System::Int32 Field_1_5; // 0x5C
	::System::Single Field_1_7; // 0x60
	::UnityEngine::Vector3 Field_1_9; // 0x64
	::UnityEngine::Vector3 Field_1_10; // 0x70
	::System::Single Field_1_4; // 0x7C

	::System::Void _ctor(::Class_1_0698DCBDF48031C1* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0698DCBDF48031C1*, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B0351A8151A472A4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_B0351A8151A472A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1DDC55985D9243(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_9C1DDC55985D9243_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_95049138D76D6D9A(::Struct_2_B99E072A97EE0372<::UnityEngine::Vector3>& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_B99E072A97EE0372<::UnityEngine::Vector3>&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_95049138D76D6D9A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_55EEDF2852B396EB(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_55EEDF2852B396EB_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_568F5B0107B4BD5E(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564_3& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564_3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_568F5B0107B4BD5E_OFFSET))(a1, a2, a3);
	}

	::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Boolean Method_1_3315D7D7C9D88616(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_3315D7D7C9D88616_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_4E6F72124EC1C84B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_4E6F72124EC1C84B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37289BC8A16CCB96(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E& a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_37289BC8A16CCB96_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_CE2BA4BC7A5FFBEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_CE2BA4BC7A5FFBEB_OFFSET))(this);
	}

	static ::System::Void Method_1_0450D498A3FA4D47(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_0450D498A3FA4D47_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_FDA5B51BE9F3EB68(::Struct_2_B99E072A97EE0372<::UnityEngine::Vector3>& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::Struct_2_B99E072A97EE0372<::UnityEngine::Vector3>&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_FDA5B51BE9F3EB68_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_6AA2350BC9F6684D(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_6AA2350BC9F6684D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7F3E5369B1A9C7A0(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_7F3E5369B1A9C7A0_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_C3B113AF6205EF51(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_C3B113AF6205EF51_OFFSET))(a1);
	}

	::System::Int32 Method_1_0BD3CA57DE555B3E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_0BD3CA57DE555B3E_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_488083259FAFD21F(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_488083259FAFD21F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_0DB096FB3EF19932()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_0DB096FB3EF19932_OFFSET))(this);
	}

	::System::Void Method_1_48BD8D88D3E78836(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_48BD8D88D3E78836_OFFSET))(this, a1);
	}
};
