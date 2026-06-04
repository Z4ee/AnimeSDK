#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_462EF25B253492F0;
class Class_2_46FD925988407D1E;

#define CLASS_2_41A28DC015B0A6E5_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xC1D6050)
#define CLASS_2_41A28DC015B0A6E5_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xC1D6020)
#define CLASS_2_41A28DC015B0A6E5_GET_VY_OFFSET UNITYSDK_OFFSET(0xC1D6080)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xC1D62B0)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC1D6590)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0xC1D60A0)
#define CLASS_2_41A28DC015B0A6E5_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xC1D6070)
#define CLASS_2_41A28DC015B0A6E5_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xC1D6040)
#define CLASS_2_41A28DC015B0A6E5_SET_VY_OFFSET UNITYSDK_OFFSET(0xC1D6090)
#define CLASS_2_41A28DC015B0A6E5__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D6580)

inline static constexpr unsigned int Class_2_41A28DC015B0A6E5_TypeDefinitionIndex = 72507;

class Class_2_41A28DC015B0A6E5 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::System::Single _Vy_k__BackingField; // 0x34
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_STARTPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_ENDPOS_OFFSET))(this, a1);
	}

	::System::Single get_Vy()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_VY_OFFSET))(this);
	}

	::System::Void set_Vy(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_VY_OFFSET))(this, a1);
	}

	static ::Class_2_41A28DC015B0A6E5* Method_2_BC838CA6F90409DB(::Class_2_46FD925988407D1E* a1, ::Class_1_462EF25B253492F0* a2)
	{
		return ((::Class_2_41A28DC015B0A6E5*(*)(::Class_2_46FD925988407D1E*, ::Class_1_462EF25B253492F0*))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
