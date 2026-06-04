#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5085E4EFF538DE73_2_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_5085E4EFF538DE73_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1919B320)

inline static constexpr unsigned int Class_2_5085E4EFF538DE73_2_TypeDefinitionIndex = 23679;

class Class_2_5085E4EFF538DE73_2 : public ::System::Attribute
{
public:
	::Class_2_5085E4EFF538DE73_2_InspectType Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_5085E4EFF538DE73_2_InspectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5085E4EFF538DE73_2_InspectType))((::PBYTE)hIl2Cpp + CLASS_2_5085E4EFF538DE73_2__CTOR_OFFSET))(this, a1);
	}
};
