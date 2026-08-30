#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_4_METHOD_1_AA54247FF5D7BBB1_OFFSET UNITYSDK_OFFSET(0x18DE3A80)
#define CLASS_1_7291C38274750BA2_4_METHOD_1_CDB67F8643E189E2_OFFSET UNITYSDK_OFFSET(0x18DE3B00)
#define CLASS_1_7291C38274750BA2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE3AF0)

inline static constexpr unsigned int Class_1_7291C38274750BA2_4_TypeDefinitionIndex = 66033;

class Class_1_7291C38274750BA2_4 : public ::System::Object
{
public:
	::System::String* JHLIDACEDBD; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7291C38274750BA2_4* Method_1_AA54247FF5D7BBB1(::System::String* a1)
	{
		return ((::Class_1_7291C38274750BA2_4*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4_METHOD_1_AA54247FF5D7BBB1_OFFSET))(a1);
	}

	::System::Boolean Method_1_CDB67F8643E189E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4_METHOD_1_CDB67F8643E189E2_OFFSET))(this);
	}
};
