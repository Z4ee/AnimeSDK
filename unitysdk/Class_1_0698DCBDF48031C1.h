#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E.h"
#include "unitysdk/Struct_2_7D2CE2762A087244.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0698DCBDF48031C1_METHOD_1_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x16804740)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_0BD3CA57DE555B3E_OFFSET UNITYSDK_OFFSET(0x168047F0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_20342BAC838F5410_OFFSET UNITYSDK_OFFSET(0x16803A20)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_2144DD9F29CFE8F2_OFFSET UNITYSDK_OFFSET(0x168063F0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x16804EF0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_3315D7D7C9D88616_OFFSET UNITYSDK_OFFSET(0x168045D0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_37289BC8A16CCB96_OFFSET UNITYSDK_OFFSET(0x168041F0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_48BD8D88D3E78836_OFFSET UNITYSDK_OFFSET(0x168070D0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0x16807060)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_568F5B0107B4BD5E_OFFSET UNITYSDK_OFFSET(0x16804E00)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_87C0B2B9644F15FB_OFFSET UNITYSDK_OFFSET(0x16806820)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_8857030C431C0443_OFFSET UNITYSDK_OFFSET(0x16806AD0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_95049138D76D6D9A_OFFSET UNITYSDK_OFFSET(0x16804160)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_98848445DB8DBCB3_OFFSET UNITYSDK_OFFSET(0x16804080)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_9C1DDC55985D9243_OFFSET UNITYSDK_OFFSET(0x16803E50)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_A869A2D944B4A769_OFFSET UNITYSDK_OFFSET(0x16806FB0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0x16804CC0)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x16803C20)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_C9FF89A9419BC628_OFFSET UNITYSDK_OFFSET(0x16803B50)
#define CLASS_1_0698DCBDF48031C1_METHOD_1_CE2BA4BC7A5FFBEB_OFFSET UNITYSDK_OFFSET(0x16804FB0)
#define CLASS_1_0698DCBDF48031C1__CTOR_OFFSET UNITYSDK_OFFSET(0x16803650)

inline static constexpr unsigned int Class_1_0698DCBDF48031C1_TypeDefinitionIndex = 45085;

class Class_1_0698DCBDF48031C1 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F Field_1_13; // 0x10
	::MoleMole::Vehicle::VehicleConfig* Field_1_12; // 0x40
	::System::Int32 Field_1_6; // 0x48
	::System::Single Field_1_5; // 0x4C
	::System::Single Field_1_4; // 0x50
	::System::Single Field_1_8; // 0x54
	::System::Int32 Field_1_19; // 0x58
	::System::Int32 Field_1_11; // 0x5C
	::UnityEngine::Vector3 Field_1_15; // 0x60
	::System::Single Field_1_9; // 0x6C
	::System::Single Field_1_10; // 0x70
	::UnityEngine::Vector3 Field_1_14; // 0x74

	::System::Void _ctor(::Class_1_0698DCBDF48031C1* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0698DCBDF48031C1*, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_20342BAC838F5410(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_20342BAC838F5410_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B0351A8151A472A4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_B0351A8151A472A4_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_95049138D76D6D9A(::Struct_2_7D2CE2762A087244<::UnityEngine::Vector3>& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::Struct_2_7D2CE2762A087244<::UnityEngine::Vector3>&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_95049138D76D6D9A_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_37289BC8A16CCB96(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E& a5)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_F85A62874C3F554E&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_37289BC8A16CCB96_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_06618C2A694360FD(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_1_0BD3CA57DE555B3E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_0BD3CA57DE555B3E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F& Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Void Method_1_9C1DDC55985D9243(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_9C1DDC55985D9243_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_C9FF89A9419BC628(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_C9FF89A9419BC628_OFFSET))(a1);
	}

	::System::Boolean Method_1_3315D7D7C9D88616(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_3315D7D7C9D88616_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_98848445DB8DBCB3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_98848445DB8DBCB3_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_87C0B2B9644F15FB(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_87C0B2B9644F15FB_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_8857030C431C0443(::Struct_2_7D2CE2762A087244<::UnityEngine::Vector3>& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::Struct_2_7D2CE2762A087244<::UnityEngine::Vector3>&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_8857030C431C0443_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_1_CE2BA4BC7A5FFBEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_CE2BA4BC7A5FFBEB_OFFSET))(this);
	}

	static ::System::Void Method_1_2144DD9F29CFE8F2(::Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_1_0698DCBDF48031C1_Struct_2_5AEEF0D2033AC65F&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_2144DD9F29CFE8F2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A869A2D944B4A769(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_A869A2D944B4A769_OFFSET))(a1);
	}

	::System::Int32 Method_1_4E6F72124EC1C84B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_4E6F72124EC1C84B_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_568F5B0107B4BD5E(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Class_1_0698DCBDF48031C1_Struct_2_6175284CFEF73564&))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_568F5B0107B4BD5E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_48BD8D88D3E78836(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0698DCBDF48031C1_METHOD_1_48BD8D88D3E78836_OFFSET))(this, a1);
	}
};
