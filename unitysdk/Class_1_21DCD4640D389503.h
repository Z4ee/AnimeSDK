#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_21DCD4640D389503_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x8DAF630)
#define CLASS_1_21DCD4640D389503_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x8DAF5E0)
#define CLASS_1_21DCD4640D389503_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DAF550)
#define CLASS_1_21DCD4640D389503_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x8DAF590)
#define CLASS_1_21DCD4640D389503__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAF680)

inline static constexpr unsigned int Class_1_21DCD4640D389503_TypeDefinitionIndex = 58303;

class Class_1_21DCD4640D389503 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}
};
