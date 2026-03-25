#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D31A8A9F316F0110_METHOD_1_4B967A5E70FF7EE4_OFFSET UNITYSDK_OFFSET(0x11040DE0)
#define CLASS_1_D31A8A9F316F0110__CTOR_OFFSET UNITYSDK_OFFSET(0x11040E50)

inline static constexpr unsigned int Class_1_D31A8A9F316F0110_TypeDefinitionIndex = 58562;

class Class_1_D31A8A9F316F0110 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3E7; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D31A8A9F316F0110__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4B967A5E70FF7EE4(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D31A8A9F316F0110_METHOD_1_4B967A5E70FF7EE4_OFFSET))(this, a1);
	}
};
