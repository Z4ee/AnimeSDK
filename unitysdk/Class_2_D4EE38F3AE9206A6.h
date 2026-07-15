#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_217C0C2193BFFB59.h"

namespace System { class String; }

#define CLASS_2_D4EE38F3AE9206A6_METHOD_2_80B78AB60CDD14C0_OFFSET UNITYSDK_OFFSET(0x15EEC420)
#define CLASS_2_D4EE38F3AE9206A6__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEC670)

inline static constexpr unsigned int Class_2_D4EE38F3AE9206A6_TypeDefinitionIndex = 72437;

class Class_2_D4EE38F3AE9206A6 : public ::Class_1_217C0C2193BFFB59
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4EE38F3AE9206A6__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_80B78AB60CDD14C0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D4EE38F3AE9206A6_METHOD_2_80B78AB60CDD14C0_OFFSET))(this, a1, a2);
	}
};
