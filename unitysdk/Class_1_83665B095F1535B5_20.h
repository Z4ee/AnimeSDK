#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_20_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B1DB60)
#define CLASS_1_83665B095F1535B5_20__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1DBB0)

inline static constexpr unsigned int Class_1_83665B095F1535B5_20_TypeDefinitionIndex = 54855;

class Class_1_83665B095F1535B5_20 : public ::System::Object
{
public:
	::System::Boolean MNDLIALMKGO; // 0x10
	::System::Boolean IIPDCIMHGGH; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_20__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_20_CLEAR_OFFSET))(this);
	}
};
