#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3AD2528CD53B1639_7;
class Class_2_15E317187C4E8254;

#define CLASS_2_624F19E2399C3D45_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x114B0C20)
#define CLASS_2_624F19E2399C3D45_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x114B0BF0)
#define CLASS_2_624F19E2399C3D45_GET_V0_OFFSET UNITYSDK_OFFSET(0x114B0C50)
#define CLASS_2_624F19E2399C3D45_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x114B0F30)
#define CLASS_2_624F19E2399C3D45_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x114B11F0)
#define CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0x114B0C80)
#define CLASS_2_624F19E2399C3D45_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x114B0C40)
#define CLASS_2_624F19E2399C3D45_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x114B0C10)
#define CLASS_2_624F19E2399C3D45_SET_V0_OFFSET UNITYSDK_OFFSET(0x114B0C70)
#define CLASS_2_624F19E2399C3D45__CTOR_OFFSET UNITYSDK_OFFSET(0x114B11E0)

inline static constexpr unsigned int Class_2_624F19E2399C3D45_TypeDefinitionIndex = 63448;

class Class_2_624F19E2399C3D45 : public ::Class_1_A170EEF84D06CBD4
{
public:
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _V0_k__BackingField; // 0x34
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_STARTPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_ENDPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_V0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_GET_V0_OFFSET))(this);
	}

	::System::Void set_V0(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_SET_V0_OFFSET))(this, value);
	}

	static ::Class_2_624F19E2399C3D45* Method_2_BC838CA6F90409DB(::Class_2_15E317187C4E8254* a1, ::Class_1_3AD2528CD53B1639_7* a2)
	{
		return ((::Class_2_624F19E2399C3D45*(*)(::Class_2_15E317187C4E8254*, ::Class_1_3AD2528CD53B1639_7*))((::PBYTE)hIl2Cpp + CLASS_2_624F19E2399C3D45_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
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
