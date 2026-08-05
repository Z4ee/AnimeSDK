#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A1514E0E8DA163E_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_831;

#define CLASS_1_8B57604365300A64_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11FD0DB0)
#define CLASS_1_8B57604365300A64__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD0DA0)

inline static constexpr unsigned int Class_1_8B57604365300A64_TypeDefinitionIndex = 59600;

class Class_1_8B57604365300A64 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_831* Field_1_0; // 0x10
	::Enum_3_7A1514E0E8DA163E_1 Field_1_1; // 0x18
	::System::UInt32 Field_1_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B57604365300A64__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B57604365300A64_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
