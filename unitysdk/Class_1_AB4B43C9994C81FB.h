#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/Object.h"

class Class_1_B5881DC09EA38D1B;
class Class_1_FBC19CAD0D352154;

#define CLASS_1_AB4B43C9994C81FB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90D700)
#define CLASS_1_AB4B43C9994C81FB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90D800)
#define CLASS_1_AB4B43C9994C81FB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C90D870)
#define CLASS_1_AB4B43C9994C81FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D8B0)

inline static constexpr unsigned int Class_1_AB4B43C9994C81FB_TypeDefinitionIndex = 43297;

class Class_1_AB4B43C9994C81FB : public ::System::Object
{
public:
	::Struct_2_CFA12135DA0D972E ANCGCNIEAAC; // 0x10
	::Class_1_FBC19CAD0D352154* CDJBDBKGDIL; // 0x20
	::Class_1_FBC19CAD0D352154* CEEGJCAJAHB; // 0x28
	::Class_1_B5881DC09EA38D1B* DHHKBENPHMH; // 0x30
	::System::UInt32 EEFDHJEDMEG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4B43C9994C81FB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4B43C9994C81FB_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4B43C9994C81FB_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4B43C9994C81FB_ONRECYCLE_OFFSET))(this);
	}
};
