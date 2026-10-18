#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_93AA285B3FA4E655_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB1A2C30)
#define CLASS_2_93AA285B3FA4E655_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB1A2C70)
#define CLASS_2_93AA285B3FA4E655__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A2CB0)

inline static constexpr unsigned int Class_2_93AA285B3FA4E655_TypeDefinitionIndex = 71185;

class Class_2_93AA285B3FA4E655 : public ::Class_1_34917908B7833130
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93AA285B3FA4E655__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93AA285B3FA4E655_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93AA285B3FA4E655_GET_TRANS_OFFSET))(this);
	}
};
