#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B62C942A2774BBB8;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_1_13AECAB1AEC5B524_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x141AC210)
#define CLASS_1_13AECAB1AEC5B524_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x141AC270)
#define CLASS_1_13AECAB1AEC5B524_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x141AC260)
#define CLASS_1_13AECAB1AEC5B524__CTOR_OFFSET UNITYSDK_OFFSET(0x141AC200)

inline static constexpr unsigned int Class_1_13AECAB1AEC5B524_TypeDefinitionIndex = 56718;

class Class_1_13AECAB1AEC5B524 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13AECAB1AEC5B524__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13AECAB1AEC5B524_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13AECAB1AEC5B524_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13AECAB1AEC5B524_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
