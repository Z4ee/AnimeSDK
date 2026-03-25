#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8DE8BFFC99FBF46F.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x168969E0)
#define CLASS_1_1257637E4CB15DE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16896D30)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_1_TypeDefinitionIndex = 32286;

class Class_1_1257637E4CB15DE5_1 : public ::System::Object
{
public:
	::Struct_2_8DE8BFFC99FBF46F Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_1_CLEAR_OFFSET))(this);
	}
};
