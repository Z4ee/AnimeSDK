#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;

#define CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109C7560)
#define CLASS_1_31530FC809C9EE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x109C75F0)

inline static constexpr unsigned int Class_1_31530FC809C9EE2A_TypeDefinitionIndex = 44812;

class Class_1_31530FC809C9EE2A : public ::System::Object
{
public:
	::Class_3_5775A4FEC79026BC* Field_1_3; // 0x10
	::Class_3_5775A4FEC79026BC* Field_1_4; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Boolean Field_1_5; // 0x24
	::System::Boolean Field_1_2; // 0x25
	::System::Boolean Field_1_1; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31530FC809C9EE2A_DISPOSE_OFFSET))(this);
	}
};
