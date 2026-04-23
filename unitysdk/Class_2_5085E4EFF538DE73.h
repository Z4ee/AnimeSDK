#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5085E4EFF538DE73_InspectType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_5085E4EFF538DE73__CTOR_OFFSET UNITYSDK_OFFSET(0x19124070)

inline static constexpr unsigned int Class_2_5085E4EFF538DE73_TypeDefinitionIndex = 23842;

class Class_2_5085E4EFF538DE73 : public ::System::Attribute
{
public:
	::Class_2_5085E4EFF538DE73_InspectType Field_2_0; // 0x10

	::System::Void _ctor(::Class_2_5085E4EFF538DE73_InspectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5085E4EFF538DE73_InspectType))((::PBYTE)hIl2Cpp + CLASS_2_5085E4EFF538DE73__CTOR_OFFSET))(this, a1);
	}
};
