#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_1;
class Class_2_569DE47525C5FD32;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E873A741C966EEF_METHOD_1_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x16712C10)
#define CLASS_1_6E873A741C966EEF_METHOD_1_81A01A90651760B0_OFFSET UNITYSDK_OFFSET(0x16712B30)
#define CLASS_1_6E873A741C966EEF__CTOR_OFFSET UNITYSDK_OFFSET(0x16712A70)

inline static constexpr unsigned int Class_1_6E873A741C966EEF_TypeDefinitionIndex = 28574;

class Class_1_6E873A741C966EEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_569DE47525C5FD32*>* Field_1_2; // 0x10
	::Class_2_099B78418029B3B1_1* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_569DE47525C5FD32*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_099B78418029B3B1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_1_6E873A741C966EEF__CTOR_OFFSET))(this, a1);
	}

	::Class_2_569DE47525C5FD32* Method_1_81A01A90651760B0(::System::UInt32 a1)
	{
		return ((::Class_2_569DE47525C5FD32*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E873A741C966EEF_METHOD_1_81A01A90651760B0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_569DE47525C5FD32*>* Method_1_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_569DE47525C5FD32*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E873A741C966EEF_METHOD_1_1B1602B46CB3FF5C_OFFSET))(this);
	}
};
