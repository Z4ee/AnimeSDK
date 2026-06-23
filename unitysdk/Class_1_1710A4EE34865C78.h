#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1049;

#define CLASS_1_1710A4EE34865C78__CTOR_OFFSET UNITYSDK_OFFSET(0x15489C10)

inline static constexpr unsigned int Class_1_1710A4EE34865C78_TypeDefinitionIndex = 67434;

class Class_1_1710A4EE34865C78 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_1049* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1710A4EE34865C78__CTOR_OFFSET))(this, a1);
	}
};
