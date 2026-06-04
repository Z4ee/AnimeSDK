#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_3_5AB3DC82EBD88AAA;

#define CLASS_2_306DFC51AED91E4A__CTOR_OFFSET UNITYSDK_OFFSET(0x189FEB90)

inline static constexpr unsigned int Class_2_306DFC51AED91E4A_TypeDefinitionIndex = 34864;

class Class_2_306DFC51AED91E4A : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_3_5AB3DC82EBD88AAA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5AB3DC82EBD88AAA*))((::PBYTE)hIl2Cpp + CLASS_2_306DFC51AED91E4A__CTOR_OFFSET))(this, a1);
	}
};
