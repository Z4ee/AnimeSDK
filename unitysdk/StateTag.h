#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define STATETAG__CTOR_OFFSET UNITYSDK_OFFSET(0xD09B700)

inline static constexpr unsigned int StateTag_TypeDefinitionIndex = 44865;

class StateTag : public ::System::Object
{
public:
	::System::String* Name; // 0x10
	::System::Boolean Switch; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETAG__CTOR_OFFSET))(this);
	}
};
