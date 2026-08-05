#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_825101C3F006A559__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8C5D0)

inline static constexpr unsigned int Class_2_825101C3F006A559_TypeDefinitionIndex = 89956;

class Class_2_825101C3F006A559 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_825101C3F006A559__CTOR_OFFSET))(this, a1, a2);
	}
};
