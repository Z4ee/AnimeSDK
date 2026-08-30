#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0E4F6157B87A67FB_GET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x1B445F90)
#define CLASS_1_0E4F6157B87A67FB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B445FB0)
#define CLASS_1_0E4F6157B87A67FB_SET_WILLREUSE_OFFSET UNITYSDK_OFFSET(0x1B445FA0)
#define CLASS_1_0E4F6157B87A67FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B446000)

inline static constexpr unsigned int Class_1_0E4F6157B87A67FB_TypeDefinitionIndex = 61136;

class Class_1_0E4F6157B87A67FB : public ::System::Object
{
public:
	::System::Object* ACKBJOOHPBF; // 0x10
	::System::Boolean _WillReuse_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4F6157B87A67FB__CTOR_OFFSET))(this);
	}

	::System::Boolean get_WillReuse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4F6157B87A67FB_GET_WILLREUSE_OFFSET))(this);
	}

	::System::Void set_WillReuse(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0E4F6157B87A67FB_SET_WILLREUSE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E4F6157B87A67FB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
