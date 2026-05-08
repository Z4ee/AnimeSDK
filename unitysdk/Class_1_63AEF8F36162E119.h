#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D8377DB91A00B0F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_63AEF8F36162E119__CTOR_OFFSET UNITYSDK_OFFSET(0x123BABF0)

inline static constexpr unsigned int Class_1_63AEF8F36162E119_TypeDefinitionIndex = 61026;

class Class_1_63AEF8F36162E119 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_6D8377DB91A00B0F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AEF8F36162E119__CTOR_OFFSET))(this);
	}
};
