#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D80CFC559D4BCFA6.h"
#include "unitysdk/System/Object.h"

class Class_1_CEA03E94A3669701;

#define CLASS_1_EE60BF01583E3E93_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A024850)
#define CLASS_1_EE60BF01583E3E93_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0247F0)
#define CLASS_1_EE60BF01583E3E93__CTOR_OFFSET UNITYSDK_OFFSET(0x1A024910)

inline static constexpr unsigned int Class_1_EE60BF01583E3E93_TypeDefinitionIndex = 40788;

class Class_1_EE60BF01583E3E93 : public ::System::Object
{
public:
	::Class_1_CEA03E94A3669701* Field_1_0; // 0x10
	::Struct_2_D80CFC559D4BCFA6 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60BF01583E3E93_CLEAR_OFFSET))(this);
	}
};
