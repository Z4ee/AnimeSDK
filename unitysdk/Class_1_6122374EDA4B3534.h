#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6122374EDA4B3534__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB7F40D0)
#define CLASS_1_6122374EDA4B3534__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F40B0)

inline static constexpr unsigned int Class_1_6122374EDA4B3534_TypeDefinitionIndex = 69834;

class Class_1_6122374EDA4B3534 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6122374EDA4B3534__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6122374EDA4B3534__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
