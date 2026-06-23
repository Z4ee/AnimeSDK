#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_88D8B6F46ADD4B5A_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1B380B90)
#define CLASS_1_88D8B6F46ADD4B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B380B80)

inline static constexpr unsigned int Class_1_88D8B6F46ADD4B5A_TypeDefinitionIndex = 88524;

class Class_1_88D8B6F46ADD4B5A : public ::System::Object
{
public:
	::Struct_2_E614D3B245F96744 Field_1_1; // 0x10
	::Struct_2_E614D3B245F96744 Field_1_3; // 0x1C
	::System::UInt64 Field_1_0; // 0x28
	::Struct_2_E614D3B245F96744 Field_1_2; // 0x30
	::Struct_2_E614D3B245F96744 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88D8B6F46ADD4B5A__CTOR_OFFSET))(this);
	}

	static ::Class_1_88D8B6F46ADD4B5A* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_88D8B6F46ADD4B5A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88D8B6F46ADD4B5A_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
