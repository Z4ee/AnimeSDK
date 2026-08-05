#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_88D8B6F46ADD4B5A_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x100CF6F0)
#define CLASS_1_88D8B6F46ADD4B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x100CF6E0)

inline static constexpr unsigned int Class_1_88D8B6F46ADD4B5A_TypeDefinitionIndex = 92580;

class Class_1_88D8B6F46ADD4B5A : public ::System::Object
{
public:
	::Struct_2_E614D3B245F96744_1 Field_1_1; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_1_2; // 0x1C
	::Struct_2_E614D3B245F96744_1 Field_1_7; // 0x28
	::Struct_2_E614D3B245F96744_1 Field_1_0; // 0x34
	::System::UInt64 Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88D8B6F46ADD4B5A__CTOR_OFFSET))(this);
	}

	static ::Class_1_88D8B6F46ADD4B5A* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_88D8B6F46ADD4B5A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88D8B6F46ADD4B5A_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
