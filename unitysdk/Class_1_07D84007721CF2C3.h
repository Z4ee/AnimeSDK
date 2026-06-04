#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AB9BCA81E3BF60F;
class Class_1_558097AD11A5799C;
class Class_1_5F51D4049EA87B7B;
class Class_1_D0AE2E76E734D5CA;

#define CLASS_1_07D84007721CF2C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13623EE0)
#define CLASS_1_07D84007721CF2C3_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13624020)
#define CLASS_1_07D84007721CF2C3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13623F90)
#define CLASS_1_07D84007721CF2C3__CTOR_OFFSET UNITYSDK_OFFSET(0x136240A0)

inline static constexpr unsigned int Class_1_07D84007721CF2C3_TypeDefinitionIndex = 53112;

class Class_1_07D84007721CF2C3 : public ::System::Object
{
public:
	::Class_1_2AB9BCA81E3BF60F* Field_1_0; // 0x10
	::Class_1_D0AE2E76E734D5CA* Field_1_1; // 0x18
	::Class_1_558097AD11A5799C* Field_1_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x34
	::System::UInt32 Field_1_6; // 0x38
	::System::UInt64 Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07D84007721CF2C3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07D84007721CF2C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07D84007721CF2C3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07D84007721CF2C3_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}
};
