#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E70640)

inline static constexpr unsigned int IRI_StructCustomData_TypeDefinitionIndex = 47643;

class IRI_StructCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
