#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C6B63E29A82327F2;
class Class_2_E621E51D351EB960;
class Class_2_E621E51D351EB960_Class_1_49AEF9DCD912C7F1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E621E51D351EB960_CLASS_1_BF3A5FD6FE9AFD95_COMPARE_OFFSET UNITYSDK_OFFSET(0x1418C610)
#define CLASS_2_E621E51D351EB960_CLASS_1_BF3A5FD6FE9AFD95__CTOR_OFFSET UNITYSDK_OFFSET(0x1418C520)

inline static constexpr unsigned int Class_2_E621E51D351EB960_Class_1_BF3A5FD6FE9AFD95_TypeDefinitionIndex = 54264;

class Class_2_E621E51D351EB960_Class_1_BF3A5FD6FE9AFD95 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_E621E51D351EB960_Class_1_49AEF9DCD912C7F1*>* Field_1_0; // 0x10
	::Class_2_E621E51D351EB960* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_2_E621E51D351EB960_Class_1_49AEF9DCD912C7F1*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_E621E51D351EB960_Class_1_49AEF9DCD912C7F1*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_BF3A5FD6FE9AFD95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::Class_2_C6B63E29A82327F2* a1, ::Class_2_C6B63E29A82327F2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C6B63E29A82327F2*, ::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_BF3A5FD6FE9AFD95_COMPARE_OFFSET))(this, a1, a2);
	}
};
