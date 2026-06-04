#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define PARTVARIANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9FE40)

inline static constexpr unsigned int PartVariantConfig_TypeDefinitionIndex = 35142;

class PartVariantConfig : public ::System::Object
{
public:
	::System::Int32 lod; // 0x10
	::System::Int32 partIndex; // 0x14
	::System::Int32 variantIndex; // 0x18
	::UnityEngine::Material* matOverride; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTVARIANTCONFIG__CTOR_OFFSET))(this);
	}
};
