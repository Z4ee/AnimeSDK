#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define CLASS_3_9EE0DBFA18D080F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C79E1B0)

inline static constexpr unsigned int Class_3_9EE0DBFA18D080F4_TypeDefinitionIndex = 24761;

class Class_3_9EE0DBFA18D080F4 : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* MOPDMGOHKJC; // 0x10
	::System::String* OOMBNFMJLEO; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9EE0DBFA18D080F4__CTOR_OFFSET))(this, a1, a2);
	}
};
