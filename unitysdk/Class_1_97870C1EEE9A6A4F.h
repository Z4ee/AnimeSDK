#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;

#define CLASS_1_97870C1EEE9A6A4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA81CA0)
#define CLASS_1_97870C1EEE9A6A4F__CTOR_OFFSET UNITYSDK_OFFSET(0xFA81CF0)

inline static constexpr unsigned int Class_1_97870C1EEE9A6A4F_TypeDefinitionIndex = 56280;

class Class_1_97870C1EEE9A6A4F : public ::System::Object
{
public:
	::Class_2_1DB6C02CA182EEBA* JMJMFEBBGOJ; // 0x10
	::System::UInt32 HCDEOKNIGKG; // 0x18
	::System::UInt32 DFEJABODPGM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97870C1EEE9A6A4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97870C1EEE9A6A4F_DISPOSE_OFFSET))(this);
	}
};
