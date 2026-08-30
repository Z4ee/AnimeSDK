#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_24B84A23937930DB.h"

namespace System { class String; }

#define CLASS_2_636ACC673254EEB6_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1BFAFF40)
#define CLASS_2_636ACC673254EEB6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFAFF90)
#define CLASS_2_636ACC673254EEB6__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAFEE0)

inline static constexpr unsigned int Class_2_636ACC673254EEB6_TypeDefinitionIndex = 40137;

class Class_2_636ACC673254EEB6 : public ::Class_1_24B84A23937930DB
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
