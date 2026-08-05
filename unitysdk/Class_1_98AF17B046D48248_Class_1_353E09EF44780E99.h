#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_98AF17B046D48248_CLASS_1_353E09EF44780E99__CTOR_OFFSET UNITYSDK_OFFSET(0x128D5880)

inline static constexpr unsigned int Class_1_98AF17B046D48248_Class_1_353E09EF44780E99_TypeDefinitionIndex = 56085;

class Class_1_98AF17B046D48248_Class_1_353E09EF44780E99 : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_CLASS_1_353E09EF44780E99__CTOR_OFFSET))(this);
	}
};
