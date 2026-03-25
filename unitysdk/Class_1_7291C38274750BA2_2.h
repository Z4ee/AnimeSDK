#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_2_METHOD_1_AA54247FF5D7BBB1_OFFSET UNITYSDK_OFFSET(0x8BF50B0)
#define CLASS_1_7291C38274750BA2_2_METHOD_1_CDB67F8643E189E2_OFFSET UNITYSDK_OFFSET(0x8BF5130)
#define CLASS_1_7291C38274750BA2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF5120)

inline static constexpr unsigned int Class_1_7291C38274750BA2_2_TypeDefinitionIndex = 53608;

class Class_1_7291C38274750BA2_2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7291C38274750BA2_2* Method_1_AA54247FF5D7BBB1(::System::String* a1)
	{
		return ((::Class_1_7291C38274750BA2_2*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2_METHOD_1_AA54247FF5D7BBB1_OFFSET))(a1);
	}

	::System::Boolean Method_1_CDB67F8643E189E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2_METHOD_1_CDB67F8643E189E2_OFFSET))(this);
	}
};
