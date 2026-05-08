#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_101;
class Class_2_208CC9941471731A_403;

#define CLASS_1_A4D9FFFAC913C4C8_METHOD_1_4BDF465977DB5FC9_OFFSET UNITYSDK_OFFSET(0x14CCFE50)
#define CLASS_1_A4D9FFFAC913C4C8__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCFE40)

inline static constexpr unsigned int Class_1_A4D9FFFAC913C4C8_TypeDefinitionIndex = 38239;

class Class_1_A4D9FFFAC913C4C8 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_101* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4D9FFFAC913C4C8__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_403* Method_1_4BDF465977DB5FC9()
	{
		return ((::Class_2_208CC9941471731A_403*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4D9FFFAC913C4C8_METHOD_1_4BDF465977DB5FC9_OFFSET))(this);
	}
};
