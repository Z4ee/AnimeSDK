#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MONOANIMATIONHDRPROPERTY_HDRPROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0x162F8250)
#define MONOANIMATIONHDRPROPERTY_HDRPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x162F82B0)

inline static constexpr unsigned int MonoAnimationHDRProperty_HDRProperty_TypeDefinitionIndex = 40986;

class MonoAnimationHDRProperty_HDRProperty : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::Int32 propertyID; // 0x18
	::UnityEngine::Color value; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_HDRPROPERTY__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOANIMATIONHDRPROPERTY_HDRPROPERTY_INIT_OFFSET))(this);
	}
};
