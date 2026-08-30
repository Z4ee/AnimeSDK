#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_00168C35E0287614_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1E5AEA60)
#define CLASS_1_00168C35E0287614__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AE8D0)

inline static constexpr unsigned int Class_1_00168C35E0287614_TypeDefinitionIndex = 42516;

class Class_1_00168C35E0287614 : public ::System::Object
{
public:
	::System::Action* _Callback_k__BackingField; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_00168C35E0287614__CTOR_OFFSET))(this, a1);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00168C35E0287614_GET_CALLBACK_OFFSET))(this);
	}
};
