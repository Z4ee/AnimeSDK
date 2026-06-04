#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_462EF25B253492F0;
class Class_2_46FD925988407D1E;

#define CLASS_2_624F19E2399C3D45_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x136D69E0)
#define CLASS_2_624F19E2399C3D45_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x136D69B0)
#define CLASS_2_624F19E2399C3D45_GET_V0_OFFSET UNITYSDK_OFFSET(0x136D6A10)
#define CLASS_2_624F19E2399C3D45_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x136D6D00)
#define CLASS_2_624F19E2399C3D45_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x136D6FD0)
#define CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0x136D6A40)
#define CLASS_2_624F19E2399C3D45_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x136D6A00)
#define CLASS_2_624F19E2399C3D45_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x136D69D0)
#define CLASS_2_624F19E2399C3D45_SET_V0_OFFSET UNITYSDK_OFFSET(0x136D6A30)
#define CLASS_2_624F19E2399C3D45__CTOR_OFFSET UNITYSDK_OFFSET(0x136D6FC0)

inline static constexpr unsigned int Class_2_624F19E2399C3D45_TypeDefinitionIndex = 72510;

class Class_2_624F19E2399C3D45 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34
	::UnityEngine::Vector3 _V0_k__BackingField; // 0x40

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

	static ::Class_2_624F19E2399C3D45* Method_2_BC838CA6F90409DB(::Class_2_46FD925988407D1E* a1, ::Class_1_462EF25B253492F0* a2)
	{
		return ((::Class_2_624F19E2399C3D45*(*)(::Class_2_46FD925988407D1E*, ::Class_1_462EF25B253492F0*))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
