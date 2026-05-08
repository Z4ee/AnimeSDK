#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_1_CEBEFC8BE3C58B6D;
class Class_2_ACE9F07052632BA1;

#define CLASS_2_ACE9F07052632BA1_CLASS_1_CA4324981638378B_METHOD_1_BDDBE2FD9A9FFA54_OFFSET UNITYSDK_OFFSET(0x147847F0)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_CA4324981638378B__CTOR_OFFSET UNITYSDK_OFFSET(0x147847E0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_CA4324981638378B_TypeDefinitionIndex = 53299;

class Class_2_ACE9F07052632BA1_Class_1_CA4324981638378B : public ::System::Object
{
public:
	::Class_1_CEBEFC8BE3C58B6D* Field_1_2; // 0x10
	::Class_2_ACE9F07052632BA1* Field_1_1; // 0x18
	::Enum_3_F00DC819D834EFD2 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_CA4324981638378B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BDDBE2FD9A9FFA54(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_CA4324981638378B_METHOD_1_BDDBE2FD9A9FFA54_OFFSET))(this, a1);
	}
};
