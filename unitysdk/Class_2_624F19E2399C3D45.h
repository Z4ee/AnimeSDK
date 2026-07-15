#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_624F19E2399C3D45_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x17046480)
#define CLASS_2_624F19E2399C3D45_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x17046450)
#define CLASS_2_624F19E2399C3D45_GET_V0_OFFSET UNITYSDK_OFFSET(0x170464B0)
#define CLASS_2_624F19E2399C3D45_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x17046790)
#define CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0x170464E0)
#define CLASS_2_624F19E2399C3D45_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x170464A0)
#define CLASS_2_624F19E2399C3D45_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x17046470)
#define CLASS_2_624F19E2399C3D45_SET_V0_OFFSET UNITYSDK_OFFSET(0x170464D0)
#define CLASS_2_624F19E2399C3D45__CTOR_OFFSET UNITYSDK_OFFSET(0x17046AA0)

inline static constexpr unsigned int Class_2_624F19E2399C3D45_TypeDefinitionIndex = 74035;

class Class_2_624F19E2399C3D45 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _V0_k__BackingField; // 0x34
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_STARTPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_ENDPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_V0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_V0_OFFSET))(this);
	}

	::System::Void set_V0(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_V0_OFFSET))(this, a1);
	}

	static ::Class_2_624F19E2399C3D45* Method_2_BC838CA6F90409DB(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_624F19E2399C3D45*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}
};
