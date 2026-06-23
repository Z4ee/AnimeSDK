#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_31AFBFCB89B4BB52__CTOR_OFFSET UNITYSDK_OFFSET(0x13897F00)

inline static constexpr unsigned int Class_1_31AFBFCB89B4BB52_TypeDefinitionIndex = 46939;

class Class_1_31AFBFCB89B4BB52 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::UInt64 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_31AFBFCB89B4BB52__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
