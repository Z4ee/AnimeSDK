#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C857964561B1FE61_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x129C8B40)
#define CLASS_1_C857964561B1FE61__CTOR_OFFSET UNITYSDK_OFFSET(0x129C8B30)

inline static constexpr unsigned int Class_1_C857964561B1FE61_TypeDefinitionIndex = 69824;

class Class_1_C857964561B1FE61 : public ::System::Object
{
public:
	::System::Action* _OnFinish_k__BackingField; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61__CTOR_OFFSET))(this, a1);
	}

	::System::Action* get_OnFinish()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C857964561B1FE61_GET_ONFINISH_OFFSET))(this);
	}
};
