#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FCB420C2A1570809__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAFE360)
#define CLASS_2_FCB420C2A1570809__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CAFE370)
#define CLASS_2_FCB420C2A1570809__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFE350)

inline static constexpr unsigned int Class_2_FCB420C2A1570809_TypeDefinitionIndex = 24714;

class Class_2_FCB420C2A1570809 : public ::System::Attribute
{
public:
	::System::String* EKIJFPIPCKF; // 0x10
	::System::Object* MNDFOPKBHKP; // 0x18
	::System::Boolean FBPIMILLGHI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCB420C2A1570809__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FCB420C2A1570809__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FCB420C2A1570809__CTOR_2_OFFSET))(this, a1, a2);
	}
};
