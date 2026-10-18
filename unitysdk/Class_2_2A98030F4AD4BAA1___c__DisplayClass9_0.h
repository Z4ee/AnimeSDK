#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B87B48EBDCE76E87;
class Class_2_2A98030F4AD4BAA1;

#define CLASS_2_2A98030F4AD4BAA1___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8FF40)
#define CLASS_2_2A98030F4AD4BAA1___C__DISPLAYCLASS9_0___SPAWNMEMBER_B__0_OFFSET UNITYSDK_OFFSET(0x15C92220)

inline static constexpr unsigned int Class_2_2A98030F4AD4BAA1___c__DisplayClass9_0_TypeDefinitionIndex = 69339;

class Class_2_2A98030F4AD4BAA1___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_2_2A98030F4AD4BAA1* __4__this; // 0x10
	::System::Int32 stackIndex; // 0x18
	::UnityEngine::Vector3 position; // 0x1C
	::UnityEngine::Quaternion rotation; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void __SpawnMember_b__0(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_2A98030F4AD4BAA1___C__DISPLAYCLASS9_0___SPAWNMEMBER_B__0_OFFSET))(this, a1);
	}
};
