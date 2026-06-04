#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define CLASS_3_9EE0DBFA18D080F4__CTOR_OFFSET UNITYSDK_OFFSET(0x19799230)

inline static constexpr unsigned int Class_3_9EE0DBFA18D080F4_TypeDefinitionIndex = 23681;

class Class_3_9EE0DBFA18D080F4 : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* Field_3_0; // 0x10
	::System::String* Field_3_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9EE0DBFA18D080F4__CTOR_OFFSET))(this, a1, a2);
	}
};
