#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_41A28DC015B0A6E5_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1A0DBDD0)
#define CLASS_2_41A28DC015B0A6E5_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A0DBDA0)
#define CLASS_2_41A28DC015B0A6E5_GET_VY_OFFSET UNITYSDK_OFFSET(0x1A0DBE00)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x1A0DC020)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0x1A0DBE20)
#define CLASS_2_41A28DC015B0A6E5_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1A0DBDF0)
#define CLASS_2_41A28DC015B0A6E5_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1A0DBDC0)
#define CLASS_2_41A28DC015B0A6E5_SET_VY_OFFSET UNITYSDK_OFFSET(0x1A0DBE10)
#define CLASS_2_41A28DC015B0A6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DC2A0)

inline static constexpr unsigned int Class_2_41A28DC015B0A6E5_TypeDefinitionIndex = 77516;

class Class_2_41A28DC015B0A6E5 : public ::Class_1_1FB256EC3633CF9E
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34
	::System::Single _Vy_k__BackingField; // 0x40

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

	static ::Class_2_41A28DC015B0A6E5* Method_2_BC838CA6F90409DB(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_41A28DC015B0A6E5*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_1B9BAFE25893B138_OFFSET))(this);
	}
};
