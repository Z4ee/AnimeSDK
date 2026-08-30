#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5D147579CBDAF3E.h"

#define CLASS_2_99A13A3E958619B0_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE809E0)
#define CLASS_2_99A13A3E958619B0_METHOD_2_77D33294EC223E96_OFFSET UNITYSDK_OFFSET(0xBE80A30)
#define CLASS_2_99A13A3E958619B0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE80C20)

inline static constexpr unsigned int Class_2_99A13A3E958619B0_TypeDefinitionIndex = 70830;

class Class_2_99A13A3E958619B0 : public ::Class_1_D5D147579CBDAF3E
{
public:
	// static const ::System::Single OOHALKCBMAF; // 0x0
	::System::Single BEJHNOKAGGF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_77D33294EC223E96(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99A13A3E958619B0_METHOD_2_77D33294EC223E96_OFFSET))(this, a1, a2);
	}
};
