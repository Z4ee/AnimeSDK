#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667__CTOR_OFFSET UNITYSDK_OFFSET(0x1C505DF0)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_TypeDefinitionIndex = 40901;

class Class_1_2E1C713036FDC667 : public ::System::Object
{
public:
	::System::String* CDMFNHJGGKF; // 0x10
	::System::String* DFDEKAEELHL; // 0x18
	::System::Boolean EGKNKHEANAN; // 0x20
	::System::Boolean DMHJINGNBIH; // 0x21
	::System::Boolean NGJNKHGKLNL; // 0x22
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x24
	::UnityEngine::Vector3 NEMDKBKDFDN; // 0x30
	::UnityEngine::Vector3 NMELCPIOKNO; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667__CTOR_OFFSET))(this);
	}
};
