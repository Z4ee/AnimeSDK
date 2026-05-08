#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3C8FB4513CB27E99_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x107BB190)
#define CLASS_1_3C8FB4513CB27E99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x107BB0B0)
#define CLASS_1_3C8FB4513CB27E99__CTOR_OFFSET UNITYSDK_OFFSET(0x107BB0A0)

inline static constexpr unsigned int Class_1_3C8FB4513CB27E99_TypeDefinitionIndex = 81029;

class Class_1_3C8FB4513CB27E99 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3C8FB4513CB27E99__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8FB4513CB27E99_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C8FB4513CB27E99_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
