#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17B92CF4857957F9;
class Class_1_410757201D519965;
class Class_1_9747C838F50B576B;

#define CLASS_1_8709217D255ACE0E_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EC68EC0)
#define CLASS_1_8709217D255ACE0E_GET_FENCESCOPE_OFFSET UNITYSDK_OFFSET(0x1EC68ED0)
#define CLASS_1_8709217D255ACE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC68D10)

inline static constexpr unsigned int Class_1_8709217D255ACE0E_TypeDefinitionIndex = 44111;

class Class_1_8709217D255ACE0E : public ::System::Object
{
public:
	::Class_1_410757201D519965* _Blackboard_k__BackingField; // 0x10
	::Class_1_9747C838F50B576B* _FenceScope_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_410757201D519965* a1, ::Class_1_17B92CF4857957F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_410757201D519965*, ::Class_1_17B92CF4857957F9*))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_410757201D519965* get_Blackboard()
	{
		return ((::Class_1_410757201D519965*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E_GET_BLACKBOARD_OFFSET))(this);
	}

	::Class_1_9747C838F50B576B* get_FenceScope()
	{
		return ((::Class_1_9747C838F50B576B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8709217D255ACE0E_GET_FENCESCOPE_OFFSET))(this);
	}
};
