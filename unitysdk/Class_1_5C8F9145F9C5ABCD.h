#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;

#define CLASS_1_5C8F9145F9C5ABCD_DELTATIME_OFFSET UNITYSDK_OFFSET(0x92702E0)
#define CLASS_1_5C8F9145F9C5ABCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9270350)
#define CLASS_1_5C8F9145F9C5ABCD_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x926FE60)
#define CLASS_1_5C8F9145F9C5ABCD_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x926FED0)
#define CLASS_1_5C8F9145F9C5ABCD__CTOR_OFFSET UNITYSDK_OFFSET(0x926FE50)

inline static constexpr unsigned int Class_1_5C8F9145F9C5ABCD_TypeDefinitionIndex = 70587;

class Class_1_5C8F9145F9C5ABCD : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single FixedDeltaTime(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_FIXEDDELTATIME_OFFSET))(this, a1);
	}

	::System::Single DeltaTime(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_DELTATIME_OFFSET))(this, a1);
	}

	::System::Single TimeScale(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_DISPOSE_OFFSET))(this);
	}
};
