#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_2_183E70DB1BBBCA90;

#define CLASS_2_4824A5E626818BD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E223F0)
#define CLASS_2_4824A5E626818BD7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13E22370)
#define CLASS_2_4824A5E626818BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x13E22450)

inline static constexpr unsigned int Class_2_4824A5E626818BD7_TypeDefinitionIndex = 55209;

class Class_2_4824A5E626818BD7 : public ::Foundation::SingletonDisposable_1<::Class_2_4824A5E626818BD7*>
{
public:
	::Class_2_183E70DB1BBBCA90* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4824A5E626818BD7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4824A5E626818BD7_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4824A5E626818BD7_DISPOSE_OFFSET))(this);
	}
};
