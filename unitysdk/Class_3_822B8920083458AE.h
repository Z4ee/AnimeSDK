#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_1_32751454E814BC1B;
class Class_1_3B1EA953A4067E26_2;
class Class_3_E87E81F3A9C4E052;

#define CLASS_3_822B8920083458AE_GET_GAMESTATESYSTEM_OFFSET UNITYSDK_OFFSET(0x16D9A8E0)
#define CLASS_3_822B8920083458AE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9A8F0)

inline static constexpr unsigned int Class_3_822B8920083458AE_TypeDefinitionIndex = 73342;

class Class_3_822B8920083458AE : public ::Class_2_1792A4214A514F27
{
public:
	::Class_1_32751454E814BC1B* _GameStateSystem_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_E87E81F3A9C4E052* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_E87E81F3A9C4E052*))((::PBYTE)hIl2Cpp + CLASS_3_822B8920083458AE__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_32751454E814BC1B* get_GameStateSystem()
	{
		return ((::Class_1_32751454E814BC1B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_822B8920083458AE_GET_GAMESTATESYSTEM_OFFSET))(this);
	}
};
