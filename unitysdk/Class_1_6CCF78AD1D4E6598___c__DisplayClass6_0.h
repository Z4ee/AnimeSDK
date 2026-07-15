#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/System/Object.h"

class Class_1_00C1046829D4D237;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6CCF78AD1D4E6598___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179A1890)
#define CLASS_1_6CCF78AD1D4E6598___C__DISPLAYCLASS6_0__GETMULTSEQUENCE_B__0_OFFSET UNITYSDK_OFFSET(0x179A1A50)

inline static constexpr unsigned int Class_1_6CCF78AD1D4E6598___c__DisplayClass6_0_TypeDefinitionIndex = 72473;

class Class_1_6CCF78AD1D4E6598___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Func_2<::Class_1_00C1046829D4D237*, ::System::Boolean>* __9__0; // 0x10
	::Enum_3_71AA90D596A09AC8_9 type; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetMultSequence_b__0(::Class_1_00C1046829D4D237* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_00C1046829D4D237*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598___C__DISPLAYCLASS6_0__GETMULTSEQUENCE_B__0_OFFSET))(this, a1);
	}
};
