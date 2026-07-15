#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F15DE20134ACD401;

#define CLASS_1_E6AB8F5108CCE0CE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC35D0)

inline static constexpr unsigned int Class_1_E6AB8F5108CCE0CE_TypeDefinitionIndex = 76140;

class Class_1_E6AB8F5108CCE0CE : public ::System::Object
{
public:
	::Class_1_F15DE20134ACD401* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_F15DE20134ACD401* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_F15DE20134ACD401*))((::PBYTE)hIl2Cpp + CLASS_1_E6AB8F5108CCE0CE__CTOR_OFFSET))(this, a1, a2);
	}
};
