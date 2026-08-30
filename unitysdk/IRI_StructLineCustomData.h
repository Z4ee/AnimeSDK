#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTLINECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x161BF620)

inline static constexpr unsigned int IRI_StructLineCustomData_TypeDefinitionIndex = 47644;

class IRI_StructLineCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTLINECUSTOMDATA__CTOR_OFFSET))(this);
	}
};
