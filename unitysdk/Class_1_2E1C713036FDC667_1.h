#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48A180)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_1_TypeDefinitionIndex = 41155;

class Class_1_2E1C713036FDC667_1 : public ::System::Object
{
public:
	::System::String* CDMFNHJGGKF; // 0x10
	::UnityEngine::Vector3 NMELCPIOKNO; // 0x18
	::System::Boolean EGKNKHEANAN; // 0x24
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667_1__CTOR_OFFSET))(this);
	}
};
