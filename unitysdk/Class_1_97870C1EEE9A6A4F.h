#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;

#define CLASS_1_97870C1EEE9A6A4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89D9E60)
#define CLASS_1_97870C1EEE9A6A4F__CTOR_OFFSET UNITYSDK_OFFSET(0x89D9EB0)

inline static constexpr unsigned int Class_1_97870C1EEE9A6A4F_TypeDefinitionIndex = 44940;

class Class_1_97870C1EEE9A6A4F : public ::System::Object
{
public:
	::Class_2_1DB6C02CA182EEBA* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97870C1EEE9A6A4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97870C1EEE9A6A4F_DISPOSE_OFFSET))(this);
	}
};
