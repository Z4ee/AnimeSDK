#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06CDCC6A0A66BA0A;
class Class_1_6869ECCA5B46F302_3;

#define CLASS_1_F9FBCC956DFCF137_7_METHOD_1_5218F55178695EA2_OFFSET UNITYSDK_OFFSET(0x1169A720)
#define CLASS_1_F9FBCC956DFCF137_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1169A710)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_7_TypeDefinitionIndex = 51004;

class Class_1_F9FBCC956DFCF137_7 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_3* Field_1_0; // 0x10
	::Class_1_06CDCC6A0A66BA0A* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_3*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_7__CTOR_OFFSET))(this, a1);
	}

	::Class_1_06CDCC6A0A66BA0A* Method_1_5218F55178695EA2()
	{
		return ((::Class_1_06CDCC6A0A66BA0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_7_METHOD_1_5218F55178695EA2_OFFSET))(this);
	}
};
