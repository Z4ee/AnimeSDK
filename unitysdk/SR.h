#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x1C6B1C60)

inline static constexpr unsigned int SR_TypeDefinitionIndex = 3825;

class SR : public ::System::Object
{
public:
	static ::System::String* Format(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FORMAT_OFFSET))(a1, a2);
	}
};
