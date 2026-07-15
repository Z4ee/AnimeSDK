#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF7A5DF238C10B96;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_800B9D8C954C3005_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x16EC0AC0)
#define CLASS_1_800B9D8C954C3005__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC0B40)

inline static constexpr unsigned int Class_1_800B9D8C954C3005_TypeDefinitionIndex = 54399;

class Class_1_800B9D8C954C3005 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_EF7A5DF238C10B96*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Single Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800B9D8C954C3005__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800B9D8C954C3005_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}
};
