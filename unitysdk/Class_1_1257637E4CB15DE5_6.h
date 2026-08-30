#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DDD773EFCC5548.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C6181B0)
#define CLASS_1_1257637E4CB15DE5_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C618200)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_6_TypeDefinitionIndex = 41849;

class Class_1_1257637E4CB15DE5_6 : public ::System::Object
{
public:
	::Struct_2_58DDD773EFCC5548 BPAPBAFOMCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_6_CLEAR_OFFSET))(this);
	}
};
