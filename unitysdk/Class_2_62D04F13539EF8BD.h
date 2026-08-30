#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_62D04F13539EF8BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFC0A0)

inline static constexpr unsigned int Class_2_62D04F13539EF8BD_TypeDefinitionIndex = 24736;

class Class_2_62D04F13539EF8BD : public ::System::Attribute
{
public:
	::System::String* FNBEKBHNPLB; // 0x10
	::System::String* HFKCLICHCCL; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_62D04F13539EF8BD__CTOR_OFFSET))(this, a1, a2);
	}
};
