#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CALLBACKSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3EBAD0)
#define CALLBACKSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EBAC0)

inline static constexpr unsigned int CallbackScope_TypeDefinitionIndex = 27030;

class CallbackScope : public ::System::Object
{
public:
	::System::Action* callback; // 0x10

	::System::Void _ctor(::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CALLBACKSCOPE__CTOR_OFFSET))(this, callback);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALLBACKSCOPE_DISPOSE_OFFSET))(this);
	}
};
