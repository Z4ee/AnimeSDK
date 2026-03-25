#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKVECTOR_GET_X_OFFSET UNITYSDK_OFFSET(0x18C331D0)
#define AKVECTOR_GET_Y_OFFSET UNITYSDK_OFFSET(0x18C33280)
#define AKVECTOR_GET_Z_OFFSET UNITYSDK_OFFSET(0x18C33330)
#define AKVECTOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18C33380)
#define AKVECTOR_SET_X_OFFSET UNITYSDK_OFFSET(0x18C33170)
#define AKVECTOR_SET_Y_OFFSET UNITYSDK_OFFSET(0x18C33220)
#define AKVECTOR_SET_Z_OFFSET UNITYSDK_OFFSET(0x18C332D0)
#define AKVECTOR_ZERO_OFFSET UNITYSDK_OFFSET(0x18C33120)
#define AKVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18C333F0)

inline static constexpr unsigned int AkVector_TypeDefinitionIndex = 34590;

class AkVector : public ::System::Object
{
public:
	::UnityEngine::Vector3 Vector; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVECTOR__CTOR_OFFSET))(this);
	}

	::System::Void Zero()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVECTOR_ZERO_OFFSET))(this);
	}

	::System::Void set_X(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVECTOR_SET_X_OFFSET))(this, value);
	}

	::System::Single get_X()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVECTOR_GET_X_OFFSET))(this);
	}

	::System::Void set_Y(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVECTOR_SET_Y_OFFSET))(this, value);
	}

	::System::Single get_Y()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVECTOR_GET_Y_OFFSET))(this);
	}

	::System::Void set_Z(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVECTOR_SET_Z_OFFSET))(this, value);
	}

	::System::Single get_Z()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVECTOR_GET_Z_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 op_Implicit(::AkVector* vector)
	{
		return ((::UnityEngine::Vector3(*)(::AkVector*))((::PBYTE)hIl2Cpp + AKVECTOR_OP_IMPLICIT_OFFSET))(vector);
	}
};
