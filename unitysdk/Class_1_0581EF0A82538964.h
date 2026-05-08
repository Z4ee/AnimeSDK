#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5AD8A37AA06A2983;
class Class_2_5AD8A37AA06A2983_1;
class Class_2_5AD8A37AA06A2983_2;
class Class_2_5AD8A37AA06A2983_3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0581EF0A82538964__CTOR_OFFSET UNITYSDK_OFFSET(0x181BB6E0)

inline static constexpr unsigned int Class_1_0581EF0A82538964_TypeDefinitionIndex = 75297;

class Class_1_0581EF0A82538964 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983_1*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983_3*>*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_5AD8A37AA06A2983_2*>*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0581EF0A82538964__CTOR_OFFSET))(this);
	}
};
