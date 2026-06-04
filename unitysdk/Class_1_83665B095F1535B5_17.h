#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_17_CLEAR_OFFSET UNITYSDK_OFFSET(0x13A1D970)
#define CLASS_1_83665B095F1535B5_17__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1D9C0)

inline static constexpr unsigned int Class_1_83665B095F1535B5_17_TypeDefinitionIndex = 51270;

class Class_1_83665B095F1535B5_17 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_17__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_17_CLEAR_OFFSET))(this);
	}
};
