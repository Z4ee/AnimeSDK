#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_19_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F86010)
#define CLASS_1_83665B095F1535B5_19__CTOR_OFFSET UNITYSDK_OFFSET(0x17F86060)

inline static constexpr unsigned int Class_1_83665B095F1535B5_19_TypeDefinitionIndex = 55065;

class Class_1_83665B095F1535B5_19 : public ::System::Object
{
public:
	::System::Boolean MNDLIALMKGO; // 0x10
	::System::Boolean IIPDCIMHGGH; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_19__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_19_CLEAR_OFFSET))(this);
	}
};
