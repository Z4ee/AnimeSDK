#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_809B4FD5D7E0046A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC54120)

inline static constexpr unsigned int Class_1_809B4FD5D7E0046A_TypeDefinitionIndex = 74492;

class Class_1_809B4FD5D7E0046A : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_809B4FD5D7E0046A__CTOR_OFFSET))(this, a1, a2);
	}
};
