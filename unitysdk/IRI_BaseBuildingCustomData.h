#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define IRI_BASEBUILDINGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6B800)

inline static constexpr unsigned int IRI_BaseBuildingCustomData_TypeDefinitionIndex = 47622;

class IRI_BaseBuildingCustomData : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* RendererListAssetPath; // 0x18
	::UnityEngine::Bounds AABB; // 0x20
	::System::Boolean UseBinaryData; // 0x38
	::System::Boolean CanChangeTransformRuntime; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA__CTOR_OFFSET))(this);
	}
};
