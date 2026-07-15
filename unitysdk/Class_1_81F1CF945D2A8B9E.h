#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define CLASS_1_81F1CF945D2A8B9E_METHOD_1_5278BD1C79678EC4_OFFSET UNITYSDK_OFFSET(0x18D35820)
#define CLASS_1_81F1CF945D2A8B9E__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35810)

inline static constexpr unsigned int Class_1_81F1CF945D2A8B9E_TypeDefinitionIndex = 35339;

class Class_1_81F1CF945D2A8B9E : public ::System::Object
{
public:
	::System::IO::Stream* Field_1_0; // 0x10

	::System::Void _ctor(::System::IO::Stream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_81F1CF945D2A8B9E__CTOR_OFFSET))(this, a1);
	}

	::System::IO::Stream* Method_1_5278BD1C79678EC4()
	{
		return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F1CF945D2A8B9E_METHOD_1_5278BD1C79678EC4_OFFSET))(this);
	}
};
