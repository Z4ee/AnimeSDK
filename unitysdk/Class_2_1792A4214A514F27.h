#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

namespace System { class String; }

#define CLASS_2_1792A4214A514F27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4A2A20)
#define CLASS_2_1792A4214A514F27__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B7440)

inline static constexpr unsigned int Class_2_1792A4214A514F27_TypeDefinitionIndex = 40338;

class Class_2_1792A4214A514F27 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1792A4214A514F27__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1792A4214A514F27__CTOR_1_OFFSET))(this);
	}
};
