#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_18_CLEAR_OFFSET UNITYSDK_OFFSET(0x16502A80)
#define CLASS_1_83665B095F1535B5_18__CTOR_OFFSET UNITYSDK_OFFSET(0x16502AD0)

inline static constexpr unsigned int Class_1_83665B095F1535B5_18_TypeDefinitionIndex = 52375;

class Class_1_83665B095F1535B5_18 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_18__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_18_CLEAR_OFFSET))(this);
	}
};
