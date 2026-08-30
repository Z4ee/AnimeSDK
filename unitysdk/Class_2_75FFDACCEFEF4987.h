#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_2_EADE8748FB2D5544;

#define CLASS_2_75FFDACCEFEF4987_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x15415B30)
#define CLASS_2_75FFDACCEFEF4987_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15415BF0)
#define CLASS_2_75FFDACCEFEF4987__CTOR_OFFSET UNITYSDK_OFFSET(0x15415B20)

inline static constexpr unsigned int Class_2_75FFDACCEFEF4987_TypeDefinitionIndex = 77767;

class Class_2_75FFDACCEFEF4987 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_EADE8748FB2D5544* MKKLHFCCCNF; // 0x18
	::System::Single HBDJCFFDGDD; // 0x20
	::System::Boolean OELBLBCINNB; // 0x24

	::System::Void _ctor(::Class_2_EADE8748FB2D5544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EADE8748FB2D5544*))((::PBYTE)hIl2Cpp + CLASS_2_75FFDACCEFEF4987__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FFDACCEFEF4987_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_75FFDACCEFEF4987_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
