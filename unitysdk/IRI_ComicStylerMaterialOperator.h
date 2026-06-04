#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_COMICSTYLERMATERIALOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1423C500)

inline static constexpr unsigned int IRI_ComicStylerMaterialOperator_TypeDefinitionIndex = 44845;

class IRI_ComicStylerMaterialOperator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_COMICSTYLERMATERIALOPERATOR__CTOR_OFFSET))(this);
	}
};
