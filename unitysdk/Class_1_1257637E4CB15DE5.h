#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_08E83AE8FF06882E.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EC9620)
#define CLASS_1_1257637E4CB15DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC96A0)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_TypeDefinitionIndex = 37995;

class Class_1_1257637E4CB15DE5 : public ::System::Object
{
public:
	::Struct_2_08E83AE8FF06882E Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_CLEAR_OFFSET))(this);
	}
};
