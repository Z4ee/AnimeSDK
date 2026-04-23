#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class IRI_ModuleCustomData;

#define IRI_REFCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C180)

inline static constexpr unsigned int IRI_RefCustomData_TypeDefinitionIndex = 43974;

class IRI_RefCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::IRI_ModuleCustomData* SrcData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_REFCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
