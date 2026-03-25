#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF7A5DF238C10B96;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_800B9D8C954C3005_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1172C590)
#define CLASS_1_800B9D8C954C3005__CTOR_OFFSET UNITYSDK_OFFSET(0x1172C600)

inline static constexpr unsigned int Class_1_800B9D8C954C3005_TypeDefinitionIndex = 45828;

class Class_1_800B9D8C954C3005 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_EF7A5DF238C10B96*>* Field_1_6; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x1C
	::System::Boolean Field_1_5; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::Single Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800B9D8C954C3005__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800B9D8C954C3005_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
