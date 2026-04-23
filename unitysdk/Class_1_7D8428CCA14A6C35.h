#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_28;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D8428CCA14A6C35_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7B7510)
#define CLASS_1_7D8428CCA14A6C35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7B77E0)
#define CLASS_1_7D8428CCA14A6C35__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B7850)

inline static constexpr unsigned int Class_1_7D8428CCA14A6C35_TypeDefinitionIndex = 62256;

class Class_1_7D8428CCA14A6C35 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_28*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x30
	::System::UInt32 Field_1_0; // 0x38
	::System::UInt32 Field_1_2; // 0x3C
	::System::UInt32 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8428CCA14A6C35__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8428CCA14A6C35_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8428CCA14A6C35_DISPOSE_OFFSET))(this);
	}
};
