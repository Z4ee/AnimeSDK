#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_552AB688B7C140A8_GET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x95167A0)
#define CLASS_1_552AB688B7C140A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x95167C0)
#define CLASS_1_552AB688B7C140A8_SET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x95167B0)
#define CLASS_1_552AB688B7C140A8__CTOR_OFFSET UNITYSDK_OFFSET(0x9516810)

inline static constexpr unsigned int Class_1_552AB688B7C140A8_TypeDefinitionIndex = 56289;

class Class_1_552AB688B7C140A8 : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Boolean _WillReuse_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_552AB688B7C140A8__CTOR_OFFSET))(this);
	}

	::System::Boolean get_WillReuse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_552AB688B7C140A8_GET_WILLREUSE_OFFSET))(this);
	}

	::System::Void set_WillReuse(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_552AB688B7C140A8_SET_WILLREUSE_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_552AB688B7C140A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
