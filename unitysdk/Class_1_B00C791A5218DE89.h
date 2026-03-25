#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/System/Object.h"

class Class_1_B94DDCD70CFEC484;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B00C791A5218DE89_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x109D01F0)
#define CLASS_1_B00C791A5218DE89_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x109D0270)
#define CLASS_1_B00C791A5218DE89__CTOR_OFFSET UNITYSDK_OFFSET(0x109D0280)

inline static constexpr unsigned int Class_1_B00C791A5218DE89_TypeDefinitionIndex = 50349;

class Class_1_B00C791A5218DE89 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B94DDCD70CFEC484*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::Enum_3_DB663931210BBC27_8 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B00C791A5218DE89__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B00C791A5218DE89_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B00C791A5218DE89_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
