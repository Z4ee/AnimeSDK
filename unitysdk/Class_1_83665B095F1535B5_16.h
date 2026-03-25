#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_16_CLEAR_OFFSET UNITYSDK_OFFSET(0x117DDCE0)
#define CLASS_1_83665B095F1535B5_16__CTOR_OFFSET UNITYSDK_OFFSET(0x117DDD30)

inline static constexpr unsigned int Class_1_83665B095F1535B5_16_TypeDefinitionIndex = 43903;

class Class_1_83665B095F1535B5_16 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_16__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_16_CLEAR_OFFSET))(this);
	}
};
