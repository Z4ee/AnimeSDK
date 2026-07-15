#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_4_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x17C8FD10)
#define CLASS_1_7291C38274750BA2_4_METHOD_1_AA54247FF5D7BBB1_OFFSET UNITYSDK_OFFSET(0x17C8FC90)
#define CLASS_1_7291C38274750BA2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8FD00)

inline static constexpr unsigned int Class_1_7291C38274750BA2_4_TypeDefinitionIndex = 63049;

class Class_1_7291C38274750BA2_4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7291C38274750BA2_4* Method_1_AA54247FF5D7BBB1(::System::String* a1)
	{
		return ((::Class_1_7291C38274750BA2_4*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4_METHOD_1_AA54247FF5D7BBB1_OFFSET))(a1);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_4_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}
};
