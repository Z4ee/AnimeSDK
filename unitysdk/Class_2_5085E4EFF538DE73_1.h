#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5085E4EFF538DE73_1_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_5085E4EFF538DE73_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC83380)

inline static constexpr unsigned int Class_2_5085E4EFF538DE73_1_TypeDefinitionIndex = 25039;

class Class_2_5085E4EFF538DE73_1 : public ::System::Attribute
{
public:
	::Class_2_5085E4EFF538DE73_1_InspectType GMPGDEINODK; // 0x10

	::System::Void _ctor(::Class_2_5085E4EFF538DE73_1_InspectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5085E4EFF538DE73_1_InspectType))((::PBYTE)hIl2Cpp + CLASS_2_5085E4EFF538DE73_1__CTOR_OFFSET))(this, a1);
	}
};
