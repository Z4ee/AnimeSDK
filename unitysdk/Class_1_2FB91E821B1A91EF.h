#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { class String; }

#define CLASS_1_2FB91E821B1A91EF_METHOD_1_6053A4B1183419A4_OFFSET UNITYSDK_OFFSET(0x1906ED20)
#define CLASS_1_2FB91E821B1A91EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1906ED10)

inline static constexpr unsigned int Class_1_2FB91E821B1A91EF_TypeDefinitionIndex = 75012;

class Class_1_2FB91E821B1A91EF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB91E821B1A91EF__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_6053A4B1183419A4(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::String*(*)(::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_2FB91E821B1A91EF_METHOD_1_6053A4B1183419A4_OFFSET))(a1);
	}
};
