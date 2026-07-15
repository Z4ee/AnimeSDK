#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CB8B1EE6DC0D2B5B.h"

namespace System { class String; }

#define CLASS_2_636ACC673254EEB6_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18C0F8A0)
#define CLASS_2_636ACC673254EEB6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C0F8F0)
#define CLASS_2_636ACC673254EEB6__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0F870)

inline static constexpr unsigned int Class_2_636ACC673254EEB6_TypeDefinitionIndex = 39264;

class Class_2_636ACC673254EEB6 : public ::Class_1_CB8B1EE6DC0D2B5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636ACC673254EEB6__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636ACC673254EEB6_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636ACC673254EEB6_TOSTRING_OFFSET))(this);
	}
};
