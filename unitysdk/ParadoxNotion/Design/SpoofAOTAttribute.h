#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_SPOOFAOTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF8B50)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int SpoofAOTAttribute_TypeDefinitionIndex = 29880;

	class SpoofAOTAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SPOOFAOTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
