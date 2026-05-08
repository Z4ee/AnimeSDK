#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7E0CB86557612343__CTOR_OFFSET UNITYSDK_OFFSET(0x18655C30)

inline static constexpr unsigned int Class_1_7E0CB86557612343_TypeDefinitionIndex = 59957;

class Class_1_7E0CB86557612343 : public ::System::Object
{
public:
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Int64 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0CB86557612343__CTOR_OFFSET))(this);
	}
};
