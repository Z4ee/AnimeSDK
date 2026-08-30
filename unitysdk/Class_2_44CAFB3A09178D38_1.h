#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_44CAFB3A09178D38_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B99CA0)
#define CLASS_2_44CAFB3A09178D38_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x15B99A70)
#define CLASS_2_44CAFB3A09178D38_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15B99D00)
#define CLASS_2_44CAFB3A09178D38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99D80)

inline static constexpr unsigned int Class_2_44CAFB3A09178D38_1_TypeDefinitionIndex = 65919;

class Class_2_44CAFB3A09178D38_1 : public ::Class_1_3713064DEE761936
{
public:
	::System::Int32 GHNMCEOFMJD; // 0x20
	::System::Int32 GDLOGJIBGLC; // 0x24
	::System::Int32 LPEHHMHPCMG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_44CAFB3A09178D38_1* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_44CAFB3A09178D38_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_1_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44CAFB3A09178D38_1_ONEXECUTE_OFFSET))(this);
	}
};
