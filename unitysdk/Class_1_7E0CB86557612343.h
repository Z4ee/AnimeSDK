#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7E0CB86557612343__CTOR_OFFSET UNITYSDK_OFFSET(0x1592D0F0)

inline static constexpr unsigned int Class_1_7E0CB86557612343_TypeDefinitionIndex = 64878;

class Class_1_7E0CB86557612343 : public ::System::Object
{
public:
	::System::Int64 Field_1_1; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0CB86557612343__CTOR_OFFSET))(this);
	}
};
