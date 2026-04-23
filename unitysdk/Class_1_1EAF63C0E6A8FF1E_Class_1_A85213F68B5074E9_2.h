#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1EAF63C0E6A8FF1E_CLASS_1_A85213F68B5074E9_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A3B410)
#define CLASS_1_1EAF63C0E6A8FF1E_CLASS_1_A85213F68B5074E9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3AE80)

inline static constexpr unsigned int Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2_TypeDefinitionIndex = 51630;

class Class_1_1EAF63C0E6A8FF1E_Class_1_A85213F68B5074E9_2 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_CLASS_1_A85213F68B5074E9_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EAF63C0E6A8FF1E_CLASS_1_A85213F68B5074E9_2_CLEAR_OFFSET))(this);
	}
};
