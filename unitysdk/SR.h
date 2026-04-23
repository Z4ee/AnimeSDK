#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x19F77AB0)

inline static constexpr unsigned int SR_TypeDefinitionIndex = 4854;

class SR : public ::System::Object
{
public:
	static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FORMAT_OFFSET))(resourceFormat, p1);
	}
};
