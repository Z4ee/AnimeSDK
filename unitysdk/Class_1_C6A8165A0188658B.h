#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define CLASS_1_C6A8165A0188658B__CTOR_OFFSET UNITYSDK_OFFSET(0xAAB7E70)

inline static constexpr unsigned int Class_1_C6A8165A0188658B_TypeDefinitionIndex = 74429;

class Class_1_C6A8165A0188658B : public ::System::Object
{
public:
	::System::Version* Field_1_0; // 0x10
	::System::Version* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6A8165A0188658B__CTOR_OFFSET))(this);
	}
};
