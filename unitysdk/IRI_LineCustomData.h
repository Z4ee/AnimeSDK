#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_LINECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x161BF5A0)

inline static constexpr unsigned int IRI_LineCustomData_TypeDefinitionIndex = 47639;

class IRI_LineCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_LINECUSTOMDATA__CTOR_OFFSET))(this);
	}
};
