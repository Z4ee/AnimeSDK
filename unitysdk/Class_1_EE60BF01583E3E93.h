#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F2B3E6EDD02C9F11.h"
#include "unitysdk/System/Object.h"

class Class_1_CEA03E94A3669701;

#define CLASS_1_EE60BF01583E3E93_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E68A20)
#define CLASS_1_EE60BF01583E3E93_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E689C0)
#define CLASS_1_EE60BF01583E3E93__CTOR_OFFSET UNITYSDK_OFFSET(0x17E68AE0)

inline static constexpr unsigned int Class_1_EE60BF01583E3E93_TypeDefinitionIndex = 39206;

class Class_1_EE60BF01583E3E93 : public ::System::Object
{
public:
	::Class_1_CEA03E94A3669701* Field_1_1; // 0x10
	::Struct_2_F2B3E6EDD02C9F11 Field_1_0; // 0x18

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
