#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1B1FAA9A0A3E2A7A.h"

class Class_0_16E4307DCC419505_435;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_19BA530403F9D791_METHOD_2_30003F11260810E0_OFFSET UNITYSDK_OFFSET(0x15734E10)
#define CLASS_2_19BA530403F9D791_METHOD_2_46ECFDEE4F733DFC_OFFSET UNITYSDK_OFFSET(0x15734F60)
#define CLASS_2_19BA530403F9D791__CTOR_OFFSET UNITYSDK_OFFSET(0x15734E00)

inline static constexpr unsigned int Class_2_19BA530403F9D791_TypeDefinitionIndex = 77103;

class Class_2_19BA530403F9D791 : public ::Class_1_1B1FAA9A0A3E2A7A
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_435*>* Field_2_1; // 0x10
	::MonoUITableScrollV2* Field_2_0; // 0x18

	::System::Void _ctor(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_19BA530403F9D791__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_30003F11260810E0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_19BA530403F9D791_METHOD_2_30003F11260810E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_46ECFDEE4F733DFC(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_435*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_435*>*))((::PBYTE)hIl2Cpp + CLASS_2_19BA530403F9D791_METHOD_2_46ECFDEE4F733DFC_OFFSET))(this, a1);
	}
};
