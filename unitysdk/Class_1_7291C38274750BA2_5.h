#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_5_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x156251D0)
#define CLASS_1_7291C38274750BA2_5_METHOD_1_AA54247FF5D7BBB1_OFFSET UNITYSDK_OFFSET(0x15625150)
#define CLASS_1_7291C38274750BA2_5__CTOR_OFFSET UNITYSDK_OFFSET(0x156251C0)

inline static constexpr unsigned int Class_1_7291C38274750BA2_5_TypeDefinitionIndex = 66034;

class Class_1_7291C38274750BA2_5 : public ::System::Object
{
public:
	::System::String* PMEDKAFPLMN; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_5__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7291C38274750BA2_5* Method_1_AA54247FF5D7BBB1(::System::String* a1)
	{
		return ((::Class_1_7291C38274750BA2_5*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_5_METHOD_1_AA54247FF5D7BBB1_OFFSET))(a1);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_5_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}
};
