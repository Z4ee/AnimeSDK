#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xEA5B480)
#define CLASS_1_7291C38274750BA2_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xEA5B490)
#define CLASS_1_7291C38274750BA2__CTOR_OFFSET UNITYSDK_OFFSET(0xEA5B470)

inline static constexpr unsigned int Class_1_7291C38274750BA2_TypeDefinitionIndex = 68542;

class Class_1_7291C38274750BA2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};
