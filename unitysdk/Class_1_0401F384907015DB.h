#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0401F384907015DB__CTOR_OFFSET UNITYSDK_OFFSET(0x169E8910)

inline static constexpr unsigned int Class_1_0401F384907015DB_TypeDefinitionIndex = 33744;

class Class_1_0401F384907015DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0401F384907015DB__CTOR_OFFSET))(this);
	}
};
