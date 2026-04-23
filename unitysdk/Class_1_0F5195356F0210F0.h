#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3BDFAF4A2AB65026;

#define CLASS_1_0F5195356F0210F0_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB0028F0)
#define CLASS_1_0F5195356F0210F0__CTOR_OFFSET UNITYSDK_OFFSET(0xB002900)

inline static constexpr unsigned int Class_1_0F5195356F0210F0_TypeDefinitionIndex = 69817;

class Class_1_0F5195356F0210F0 : public ::System::Object
{
public:
	::Class_3_3BDFAF4A2AB65026* _GameInstance_k__BackingField; // 0x10

	::System::Void _ctor(::Class_3_3BDFAF4A2AB65026* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0__CTOR_OFFSET))(this, a1);
	}

	::Class_3_3BDFAF4A2AB65026* get_GameInstance()
	{
		return ((::Class_3_3BDFAF4A2AB65026*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_GET_GAMEINSTANCE_OFFSET))(this);
	}
};
