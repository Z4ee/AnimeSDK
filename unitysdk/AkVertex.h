#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKVERTEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E4943D0)
#define AKVERTEX_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4943F0)
#define AKVERTEX_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1E4943E0)
#define AKVERTEX_GET_X_OFFSET UNITYSDK_OFFSET(0x1E494320)
#define AKVERTEX_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E494340)
#define AKVERTEX_GET_Z_OFFSET UNITYSDK_OFFSET(0x1E494360)
#define AKVERTEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E494370)
#define AKVERTEX_SET_X_OFFSET UNITYSDK_OFFSET(0x1E494310)
#define AKVERTEX_SET_Y_OFFSET UNITYSDK_OFFSET(0x1E494330)
#define AKVERTEX_SET_Z_OFFSET UNITYSDK_OFFSET(0x1E494350)
#define AKVERTEX_ZERO_OFFSET UNITYSDK_OFFSET(0x1E494300)
#define AKVERTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4943C0)
#define AKVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4943A0)

inline static constexpr unsigned int AkVertex_TypeDefinitionIndex = 33079;

class AkVertex : public ::System::Object
{
public:
	::UnityEngine::Vector3 Vector; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX__CTOR_1_OFFSET))(this, x, y, z);
	}

	::System::Void Zero()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_ZERO_OFFSET))(this);
	}

	::System::Void set_X(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_X_OFFSET))(this, value);
	}

	::System::Single get_X()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_X_OFFSET))(this);
	}

	::System::Void set_Y(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_Y_OFFSET))(this, value);
	}

	::System::Single get_Y()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_Y_OFFSET))(this);
	}

	::System::Void set_Z(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_Z_OFFSET))(this, value);
	}

	::System::Single get_Z()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_Z_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 op_Implicit(::AkVertex* vector)
	{
		return ((::UnityEngine::Vector3(*)(::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEX_OP_IMPLICIT_OFFSET))(vector);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKVERTEX_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkVertex* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEX_CLONE_OFFSET))(this, other);
	}
};
