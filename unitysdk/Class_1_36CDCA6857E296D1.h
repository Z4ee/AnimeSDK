#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_36CDCA6857E296D1__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC9220)

inline static constexpr unsigned int Class_1_36CDCA6857E296D1_TypeDefinitionIndex = 40345;

class Class_1_36CDCA6857E296D1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_8; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36CDCA6857E296D1__CTOR_OFFSET))(this);
	}
};
