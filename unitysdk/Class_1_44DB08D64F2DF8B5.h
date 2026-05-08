#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2949C7E509CCB027;
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_44DB08D64F2DF8B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC59E90)

inline static constexpr unsigned int Class_1_44DB08D64F2DF8B5_TypeDefinitionIndex = 26129;

class Class_1_44DB08D64F2DF8B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedList_1<::Class_1_2949C7E509CCB027*>*>* Field_1_0; // 0x10
	::System::UInt16 Field_1_2; // 0x18
	::System::UInt64 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44DB08D64F2DF8B5__CTOR_OFFSET))(this);
	}
};
