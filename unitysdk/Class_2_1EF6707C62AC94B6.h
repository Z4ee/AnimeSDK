#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_249.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_536.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1EF6707C62AC94B6__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1D5C0)

inline static constexpr unsigned int Class_2_1EF6707C62AC94B6_TypeDefinitionIndex = 13654;

class Class_2_1EF6707C62AC94B6 : public ::Class_1_EBCA2A4357C4C8BF_249
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_536 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_536, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_1EF6707C62AC94B6__CTOR_OFFSET))(this, a1, a2);
	}
};
