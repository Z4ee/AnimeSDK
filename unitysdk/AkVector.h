#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKVECTOR_GET_X_OFFSET UNITYSDK_OFFSET(0x1A66E6F0)
#define AKVECTOR_GET_Y_OFFSET UNITYSDK_OFFSET(0x1A66E7A0)
#define AKVECTOR_GET_Z_OFFSET UNITYSDK_OFFSET(0x1A66E850)
#define AKVECTOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A66E8A0)
#define AKVECTOR_SET_X_OFFSET UNITYSDK_OFFSET(0x1A66E690)
#define AKVECTOR_SET_Y_OFFSET UNITYSDK_OFFSET(0x1A66E740)
#define AKVECTOR_SET_Z_OFFSET UNITYSDK_OFFSET(0x1A66E7F0)
#define AKVECTOR_ZERO_OFFSET UNITYSDK_OFFSET(0x1A66E640)
#define AKVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66E910)

inline static constexpr unsigned int AkVector_TypeDefinitionIndex = 40409;

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
