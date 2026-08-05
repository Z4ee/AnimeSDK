#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define REPLAYCHECKPOINTELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D929C80)
#define REPLAYCHECKPOINTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D929E70)
#define REPLAYCHECKPOINTELEMENT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D929EB0)

inline static constexpr unsigned int ReplayCheckpointElement_TypeDefinitionIndex = 35148;

class ReplayCheckpointElement : public ::System::Object
{
public:
	::System::String* propertyPath; // 0x10
	::System::Object* value; // 0x18
	::System::String* format; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINTELEMENT__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINTELEMENT_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYCHECKPOINTELEMENT___BASE_TOSTRING_OFFSET))(this);
	}
};
